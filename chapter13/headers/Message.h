#ifndef MESSAGE_H
#define MESSAGE_H

#include <set>
#include <string>

void swap(Message &lhs, Message &rhs);
class Folder;

class Message {
    friend class Folder;
    friend void swap(Message &lhs, Message &rhs);

  public:
    explicit Message(const std::string &str = "") : contents(str) {}
    Message(const Message &);
    Message &operator=(const Message &);
    ~Message();

    // 从给定Folder中添加/删除Message
    void save(Folder &);
    void remove(Folder &);

  private:
    std::string contents;
    std::set<Folder *> folders;

    // 将本message插入/移除到给定message的所有folder中
    // 用于拷贝初始化
    void add_to_Folders(const Message &);
    void remove_from_Folders();

    void addFldr(Folder *f) { folders.insert(f); }
    void remFldr(Folder *f) { folders.erase(f); }
};

class Folder {
  public:
    void addMsg(const Message *);
    void remMsg(const Message *);

  private:
    std::set<Message> messages;
};

void Folder::addMsg(const Message *m) { messages.insert(*m); }

void Folder::remMsg(const Message *m) { messages.erase(*m); }

Message::Message(const Message &m) {
    contents = m.contents;
    folders = m.folders;
    add_to_Folders(m);
}

void Message::add_to_Folders(const Message &m) {
    for (auto &f : m.folders) {
        f->addMsg(this);
    }
}

void Message::remove_from_Folders() {
    for (auto &f : folders) {
        f->remMsg(this);
    }
}

Message::~Message() { remove_from_Folders(); }

Message &Message::operator=(const Message &m) {
    remove_from_Folders();
    contents = m.contents;
    folders = m.folders;
    add_to_Folders(m);
    return *this;
}

void Message::save(Folder &f) { f.addMsg(this); }

void Message::remove(Folder &f) { f.remMsg(this); }

void swap(Message &lhs, Message &rhs) {
    using std::swap;
    for (auto &f : lhs.folders) {
        f->remMsg(&lhs);
    }
    for (auto &f : rhs.folders) {
        f->remMsg(&rhs);
    }

    swap(lhs.contents, rhs.contents);
    swap(lhs.folders, rhs.folders);

    for (auto &f : lhs.folders) {
        f->addMsg(&lhs);
    }
    for (auto &f : rhs.folders) {
        f->addMsg(&rhs);
    }
}

#endif