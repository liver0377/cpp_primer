#include <iostream>

template <typename elemType>
class ListItem;

template <typename elemType>
class List {
   public:
    List();
    List(const List &);
    ~List();
    List &operator=(const List &);

    void insert(ListItem<elemType> *ptr, elemType value);

   private:
    ListItem *front, *end;
};