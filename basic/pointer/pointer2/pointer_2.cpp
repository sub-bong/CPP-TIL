#include <iostream>

int main() {
  int* p;
  int a;

  p = &a;

  std::cout << "포인터 p 에 들어 있는 값" << p << std::endl;
  std::cout << "int 변수 a가 저장된 주소: " << &a << std::endl;

  return 0;
}