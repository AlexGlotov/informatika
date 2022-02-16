class FlyingMachine : public WarMachine {
public:
    virtual int getMax_fly_height() = 0;
    virtual int getMax_fly_length() = 0;
    virtual float getLength() = 0;
    virtual float getHeight() = 0;
    double getWeight() {
        return this->weight;
    }
    double getTimeWork() {
        return Ammount_of_fuel / Fuel_consumption;
    }
    double getMaxSpeed() {
        return MaxSpeed;
    }
    double getCalibre() {
        return Calibre;
    }
protected:
    float Length;
    float Height;
    float Ammount_of_fuel;
    float Fuel_consumption;
    int Max_fly_height;
    int Max_fly_length;
    float Calibre;
};

class Airplane : public FlyingMachine {

public:
    virtual float getWingspan() = 0;
    virtual float getTakeoff_run() = 0;
    virtual float getWing_loading() = 0;

protected:
    float Wingspan;
    float Takeoff_run;
    float Wing_loading;
};

class ScrewAircraft : public Airplane {
public:
    int getNumber_of_props() {
        return this->Number_of_props;
    }
protected:
    int Number_of_props;
};

class JetAircraft : public Airplane {
public:
    int getNumber_of_jets() {
        return this->Number_of_jets;
    }
protected:
    int Number_of_jets;
};

class Amphibious_aircraft : public Airplane {
public:
    int getNumber_of_() {
        return this->Number_of_jets;
    }
protected:
    int Number_of_jets;
};


class Helicopter : public FlyingMachine {
public:
    float getPropeller_width() {
        return Propeller_width;
    }
    float getRate_of_climb() {
        return Rate_of_climb;
    }

protected:
    float Propeller_width = 0;
    float Rate_of_climb = 0;
};
