/*1. 이름공간 (namespace)
 1) "특정 영역에 이름을 붙여주기 위한 문법적 요소"
 2) "::" 범위지정 연산자
  (1) 범위지정 연산자의 다른 기능
    - 전역변수와 지역변수의 이름이 같을 경우 전역변수는 지역변수에 의해 가려짐
    - 이때 범위지정 연산자를 활용하여 전역변수에도 접근이 가능하다
     예시)
        int Num = 9;
        int main(void) {
            int Num = 8;
            ::Num+=5; => 전역변수 Num이 5증가
            Num+=8; => 지역변수 Num이 8증가
        }

 3) 동일한 이름공간에 정의된 함수를 호출할 때에는 이름공간을 명시할 필요가 없당
 4) 이름공간은 중첩이 가능하다(다른 이름공간안에 이름공간을 삽입할수 있다)
namespace (이름공간의 이름){
    이름공간의 내부
}

=> 이런식으로 이름공간 내부에 함수를 선언하면 똑같은 Func이라는 함수가 있어도
 (이름공간의 이름)::Func
 (이름공간의 이름2)::Func
 이런식으로 사용이 가능하다

using namespace std;
=> std라는 네임스페이스 즉, "standard(표준) 네임스페이스를 사용하겠다"
 이거 쓰고 cout<<~~<<endl; 이런식으로 코드 사용할수 있음
 +다만! 이름충돌이 발생할 확률은 상대적으로 높아짐+
 */

#include <iostream>
namespace Hyundai{
    void makecar(void){
        std::cout<<"GV70제작 완료"<<std::endl;
    }
}

namespace KIA{
    void makecar(void){
        std::cout<<"K7제작 완료"<<std::endl;
    }
}

int main(void){
    Hyundai::makecar();
    KIA::makecar();
    return 0;
}