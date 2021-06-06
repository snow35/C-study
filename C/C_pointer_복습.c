/*
1. Pointer
 1) 변수의 메모리 주소를 저장하는 변수를 포인터 변수라고 한다.
 2) 포인터 변수는 *(애스터리스크) 을 사용하여 선언한다
 예시) 자료형 *포인터이름;
      포인터 = &변수;
 3) 포인터 연산도 가능하다

#include<stdio.h>
int main() {
    int *numPtr; // numPtr이라는 포인터 변수를 선언
    int num1 = 10; // int형 변수 num1선언, 10저장

    numPtr = &num1; // numPtr포인터 변수에 num1변수의 메모리 주소 저장
    printf("%p\n", numPtr);
    printf("%p\n", &num1);

    return 0;
}



#include<stdio.h>
int main(){
    int a;
    int* pa;
    pa = &a;

    printf("pa의 값 : %p \n", pa);
    printf("pa + 1 의 값 : %p \n", pa + 1); //포인터 + 1

    return 0;
}
*/

#include<stdio.h> //포인터 배열
int main() {
    int arr[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int i;

    for(i = 0; i < 10; i++){
        printf("arr[%d] 의 주소값 : %p \n", i, &arr[i]); //한 개당 4바이트씩 먹음 
    }

    return 0;
}