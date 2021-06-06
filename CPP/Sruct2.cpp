#include<iostream>
#include<string>

struct Employee
{
    std::string name;
    int id;
    int pw;
    int wage;
};

struct Laboratory
{
    Employee head;
    int numberofhead;
};

int main(){
Laboratory etry;
etry.head.name="Jhon";
etry.head.id=2034054;
etry.numberofhead=5;
etry.head.pw=0430523;
etry.head.wage=540;

int id_Input=0;
int pw_Input=0;

std::cout<<"■■■■■■■■■■■■■■■■■■■■■■"<<std::endl;
std::cout<<"Welcome to Etry system"<<std::endl;
std::cout<<"Input your id : ";
std::cin>>id_Input;
    if(id_Input==etry.head.id){
        std::cout<<"Input your password : ";
        std::cin>>pw_Input;
        if(pw_Input==etry.head.pw){
         std::cout<<"welcome, "<<etry.head.name<<std::endl;
         std::cout<<"■■■■■■Information■■■■■■"<<std::endl;
         std::cout<<"number of head : "<<etry.numberofhead<<std::endl;
         std::cout<<"Your wage is   : "<<etry.head.wage<<std::endl;
         std::cout<<"■■■■■■■■■■■■■■■■■■■■■■■"<<std::endl;
        }
        else{
        std::cout<<"wrong Input"<<std::endl;
        }
    }
    else{
    std::cout<<"wrong Input"<<std::endl;
    }
    return 0;
}

