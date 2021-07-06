/*
==Class 설명==
  아마 구조체를 배웠다면 상당히 익숙한 형태일 것이다. C++의 class를 C에서의 구조체와 비교해보자면 함수를 멤버로 포함할수 있다는 차이접이 있다.
C++에서의 구조체와 비교를 해본다면 private, public등 엑세스 지정자를 추가할 수 있다는 것이다.

  클래스를 선언하게 되면 그 클래스는 메모리에 객체로써 자리잡게 되지만 해당 메모리에 자리만 잡고 있지 초기화는 되지 않는다. 그러므로 생성자를 통해서
초기화해줄 필요가 있다. 생성자의 이름은 항상 클래스명과 동일해야 하고, 오버로딩을 통해서 인자값을 받을수는 있으나 리턴값은 가질수 없다.
*/
#include<iostream>
#include<cstring>
class plane{
    public:
        char name;
        int lenght;
};