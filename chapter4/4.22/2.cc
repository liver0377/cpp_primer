#include <iostream>
#include <string>
#include <vector>

int main() {
  std::vector<int> scores;
  std::vector<std::string> grades;
  int score;
  while (std::cin >> score) {
    scores.push_back(score);
  }

  for (auto &e : scores) {
    std::string grade;
    if (e >= 90) {
      grade = "[high pass]";
    } else if (e >= 75) {
      grade = "[pass]";
    } else if (e >= 60) {
      grade = "[low pass]";
    } else {
      grade = "[fail]";
    }
    grades.push_back(grade);
  }

  for (auto &e : grades) {
    std::cout << e << " ";
  }

  std::cout << std::endl;
  return 0;
}