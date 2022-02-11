#include <iostream>

using namespace std;

struct bullet {

};

class WarMachine {
public:
    WarMachine(string name, double weight, double MaxTime, double MaxSpeed, double armor) {
        this->name = name;
        this->weight = weight;
        this->MaxTime = MaxTime;
        this->MaxSpeed = MaxSpeed;
        this->armor = armor;
        this->speed = speed;

    };
    ~WarMachine(){
    
    };
    virtual double getWeight() = 0; // получить массу
    virtual double getTimeWork() = 0; //получить максимальное время автономной работы
    virtual double getMaxSpeed() = 0; // получить максимальную скорость
    virtual double getCalibre() = 0; //размер главного калибра
    virtual double getArmorWidth() = 0; //получить среднюю толщину брони
    virtual double getSpeed() = 0; // получить текущую скорость; по умолчанию - ноль
    virtual void setSpeed() = 0; //установить скорость движения; ограничена максимальной
protected:
    string name;
    double weight;
    double MaxTime;
    double MaxSpeed;
    double speed;
    double armor;
};

int main()
{
    //тестовый код - надо придумать и написать
    return 0;
}
