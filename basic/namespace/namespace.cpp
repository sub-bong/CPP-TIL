#include <iostream>
#include "header1.h"
#include "header2.h"

using header1::foo; // foo를 여러번 반복적으로 호출하게 되는 경우 using을 활용하여 foo만 활용

// namespace 개념
namespace header1
{
  int func()
  {
    foo();          // 알아서 header1::foo() 가 실행된다.
    header2::foo(); // header2의 foo() 가 실행된다.
    header1::foo(); // header1 이란 이름 공간에 있는 foo를 호출
    foo();          // header1에 있는 foo 함수 호출
  }
}

using namespace header1; // header1 이름 공간 안에 정이된 모든 것들을 header1:: 없이 사용하고 싶을 때 명시

int main()
{
  header2::foo(); // header2의 foo 함수 호출
  foo();          // header1의 foo 함수 호출
}

namespace // 이름 없는 네임스페이스 => 이 경우 해당 네임스페이스에 정의된 것들은 해당 파일 안에서만 접근할 수 있게 됨. static 키워드를 사용한 것과 같은 효과
{
  // 파일 안에서만 사용 가능
  int OnlyInThisFile() {}
  int only_in_this_file = 0;
}

int main2()
{
  OnlyInThisFile();
  only_in_this_file = 3;
}

/*
권장하는 방식은 using namespace std; 를 사용하지 않고 std:: 를 직접 앞에 붙이는 방식으로 명시해주는 것이 좋음
*/