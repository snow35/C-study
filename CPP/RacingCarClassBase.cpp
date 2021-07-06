#include<iostream>
#include<cstring>

namespace CAR_CONST{
    enum{
        ID_LEN=20, MAX_SPD=200, FUEL_STEP=2,
        ACC_STEP=10, BRK_STEP=10
    };
}

class Car
{
private:
    char gamerID[CAR_CONST::ID_LEN];
    int fuelGuage;
    int curSpeed;
public:
    void InitMembers(char * ID, int fuel);
    void ShowCarState();
    void Accel();
    void Break();
};

void Car::InitMembers(char * ID, int fuel){
    strcpy(gamerID, ID);
    fuelGuage=fuel;
    curSpeed=0;
}

void Car::ShowCarState(){
    std::cout<<"소유자 ID: "<<gamerID<<std::endl;
    std::cout<<"연료량: "<<fuelGuage<<std::endl;
    std::cout<<"현재속도: "<<curSpeed<<"km/s"<<std::endl<<std::endl;
}

void Car::Accel(){
    if(fuelGuage<=0)
        return;
    else 
        fuelGuage-=CAR_CONST::FUEL_STEP;

    if((curSpeed+CAR_CONST::ACC_STEP)>=CAR_CONST::MAX_SPD)
    {
        curSpeed=CAR_CONST::MAX_SPD;
        return;
    }
    curSpeed=+CAR_CONST::ACC_STEP;
}

void Car::Break(){
    if(curSpeed<CAR_CONST::BRK_STEP){
        curSpeed=0;
        return;
    }
    curSpeed-=CAR_CONST::BRK_STEP;
}

int main() {
    Car porsche;
    porsche.InitMembers("porsche", 100);
    porsche.Accel();
    porsche.Accel();
    porsche.ShowCarState();
    porsche.Break();
    porsche.ShowCarState();
    return 0;
}
