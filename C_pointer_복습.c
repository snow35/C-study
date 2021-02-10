/*
1. Pointer
 1) 변수의 메모리 주소를 저장하는 변수를 포인터 변수라고 한다.
 2) 포인터 변수는 *(애스터리스크) 을 사용하여 선언한다
 예시) 자료형 *포인터이름;
      포인터 = &변수;
*/
#include<stdio.h>
int main() {
    int *numPtr; // numPtr이라는 포인터 변수를 선언
    int num1 = 10; // int형 변수 num1선언, 10저장

    numPtr = &num1; // numPtr포인터 변수에 num1변수의 메모리 주소 저장
    printf("%p\n", numPtr);
    printf("%p\n", &num1);

    return 0;
}