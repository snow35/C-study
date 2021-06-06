#include<iostream>
int main(void){
    int x = 10;
    std::cout<<x<<std::endl;
    std::cout<<*&x<<std::endl;

    return 0;
}