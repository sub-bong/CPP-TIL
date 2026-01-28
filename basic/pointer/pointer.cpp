#include <iostream>
/* 포인터도 변수 */

int main()
{
  int a;
  int b;
  int *p;

  p = &a;
  *p = 2;
  p = &b;
  *p = 4;

  std::cout << "a : " << a << std::endl;
  std::cout << "b : " << b << std::endl;

  return 0;
}