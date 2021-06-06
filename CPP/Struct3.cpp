#include<iostream>

struct test
{
    int i;
    void testfunc() 
    {
        std::cout<<"Hello world"<<i<<std::endl; //이렇게 구조체 내부에 함수를 넣어줄 수도 있음
    }
};

int main() {
    test snow={5};
    snow.testfunc();//호출은 이런 식으로
}
