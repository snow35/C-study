#include <iostream>

#define SQUARE(x) ((x)*(x))

int main(void){
    std::cout<< SQUARE(5) <<std::endl; // 전처리 과정을 거친 후 => std::cout<< ((5)*(5)) <<std::endl;
    return 0;                          // 이렇게 함수의 몸체부분이 함수호출 문장을 완전히 대체했을 때 '함수가 인라인화 되었다' 라고 함
}

