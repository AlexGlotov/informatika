
class fleet : public WarMachine {
public:
    fleet(string name, double weight, double maxTime, double maxSpeed, double armor, double Maxdepth) : WarMachine(name, weight, maxTime, maxSpeed, armor, Maxdepth) {}
    double getWeight() override{
        return this->weight;
    };
    void getTimeWork() {
        cout << this->MaxTime << " minutes" << endl;
    };
    void getMaxSpeed() {
        cout << this->MaxSpeed << " km/h" << endl;
    };
    void getArmorWidth() {
        cout << this->armor << " mm" << endl;
    };
    void getSpeed(double v, double x, double y, double z) {
        cout << this->speed << " km/h" << endl;
    };
    void setSpeed(double v) {
        cout << "The velocity of the sheep is " << v;
        if ((v > MaxSpeed) || (v < 0)) {
            v = MaxSpeed;
        }
    }
    void setStartCoord(double x, double y, double z) {
        if ((z > 0)||(z < -Maxdepth)) {
            cout << "Error! Please change location" << endl;
        }
    }

};
class BigSheeps : public fleet {
public:
    BigSheeps(string name, double weight, double maxTime, double maxSpeed, double armor, double Maxdepth) : fleet(name, weight, maxTime, maxSpeed, armor, Maxdepth) {}

};

class SmallSheeps : public fleet {

public:
    SmallSheeps(string name, double weight, double maxTime, double maxSpeed, double armor, double Maxdepth) : fleet(name, weight, maxTime, maxSpeed, armor, Maxdepth) {}
};

class UpBigWater : public BigSheeps {
public:
    UpBigWater(string name, double weight, double maxTime, double maxSpeed, double armor, double Maxdepth) : BigSheeps(name, weight, maxTime, maxSpeed, armor, Maxdepth) {}
};

class UnderSmallWater : public SmallSheeps {
public:
    UnderSmallWater(string name, double weight, double maxTime, double maxSpeed, double armor, double Maxdepth) : SmallSheeps(name, weight, maxTime, maxSpeed, armor, Maxdepth) {}

};

class UpSmallWater : public SmallSheeps{
public:
    UpSmallWater(string name, double weight, double maxTime, double maxSpeed, double armor, double Maxdepth) : SmallSheeps(name, weight, maxTime, maxSpeed, armor, Maxdepth) {}
};

class UnderBigWater : public BigSheeps{
public:
    UnderBigWater(string name, double weight, double maxTime, double maxSpeed, double armor, double Maxdepth) : BigSheeps(name, weight, maxTime, maxSpeed, armor, Maxdepth) {}

};
class LargeSubmarine : public UnderBigWater{
    LargeSubmarine(string name, double weight, double maxTime, double maxSpeed, double armor, double Maxdepth) : UnderBigWater(name, weight, maxTime, maxSpeed, armor, Maxdepth) {}

};

class SubMarine : public UnderSmallWater{
    SubMarine(string name, double weight, double maxTime, double maxSpeed, double armor, double Maxdepth) : UnderSmallWater(name, weight, maxTime, maxSpeed, armor, Maxdepth) {}

};
int main()  {
    fleet a("Vasya", 47, 1488, 14, 88, 5);
    a.setSpeed(10);
}