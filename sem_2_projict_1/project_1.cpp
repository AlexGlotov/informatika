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
    ~WarMachine() {

    };
    virtual double getWeight() = 0; // получить массу
    virtual double getTimeWork() = 0; //получить максимальное время автономной работы
    virtual double getMaxSpeed() = 0; // получить максимальную скорость
    virtual double getArmorWidth() = 0; //получить среднюю толщину брони
    virtual double getSpeed() = 0; // получить текущую скорость; по умолчанию - ноль
    virtual void setSpeed() = 0; //установить скорость движения; ограничена максимальной
    virtual void setStartCoord() = 0;
protected:
    string name;
    double weight;
    double MaxTime;
    double MaxSpeed;
    double speed = 0;
    double armor;
    int x;
    int y;
    int z;
};



int main()
{
    WarMachine obj1 = new SupportTank;
    return 0;
}
