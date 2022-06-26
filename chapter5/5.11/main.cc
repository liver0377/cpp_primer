#include <iostream>

int main() {
  int a[13] = {};
  char c;

  while (scanf("%c", &c) == 1) {
    switch (c) {
    case 'a':
      a[0]++;
      break;
    case 'e':
      a[1]++;
      break;
    case 'i':
      a[2]++;
      break;
    case 'o':
      a[3]++;
      break;
    case 'u':
      a[4]++;
      break;

    case 'A':
      a[5]++;
      break;
    case 'E':
      a[6]++;
      break;
    case 'I':
      a[7]++;
      break;
    case 'O':
      a[8]++;
    case 'U':
      a[9]++;
      break;

    case ' ':
      a[10]++;
      break;
    case '\t':
      a[11]++;
      break;
    case '\n':
      a[12]++;
      break;
    }
  }

  std::cout << "a, e, i, o, u: " << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << a[i] << "  ";
  }

  std::cout << std::endl << std::endl;
  std::cout << "A, E, I, O, U: " << std::endl;
  for (int i = 5; i < 10; i++) {
    std::cout << a[i] << "  ";
  }

  std::cout << std::endl << std::endl;

  std::cout << "space, \\t, \\n" << std::endl;
  for (int i = 10; i < 13; i++) {
    std::cout << a[i] << " ";
  }

  std::cout << std::endl;
  return 0;
}