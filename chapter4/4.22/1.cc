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
    std::string grade =
        (e >= 90) ? "[high pass]"
                  : (e >= 75) ? "[pass]" : (e >= 60) ? "[low pass]" : "[fail]";
    grades.push_back(grade);
  }

  for (auto &e : grades) {
    std::cout << e << " ";
  }

  std::cout << std::endl;
  return 0;
}