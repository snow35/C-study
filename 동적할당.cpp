#include<iostream>
int main(void){
    int *arr;
    int leng;

    std::cout<<"배열의 크기를 입력하세요 : "; //배열 크기 입력받기
    std::cin>>leng;

    arr = new int[leng];

    for(int i = 0; i < leng; i++){
        arr[i] = leng - 1;
    }
    for (int i = 0; i<leng; i++){
        std::cout<<arr[i]<<std::endl;
    }

    delete[] arr; //arr배열 삭제 
}