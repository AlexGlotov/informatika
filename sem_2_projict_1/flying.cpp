class FlyingMachine : public WarMachine {
public:
    virtual int getMax_fly_height() = 0;
    virtual int getMax_fly_length() = 0;
    virtual float getLength() = 0;
    virtual float getHeight() = 0;
    double getWeight() {
        cout << this->weight << " tons" << endl;
    };
    double getTimeWork() {
        cout << this->MaxTime << " minutes" << endl;
    };
    double getMaxSpeed() {
        cout << this->MaxSpeed << " km/h" << endl;
    };
    double getArmor() {
        cout << this->armor << " mm" << endl;
    };
    double getSpeed() {
        cout << this->speed << " km/h" << endl;
    };
    void setSpeed() {
        double u;
        cout << endl << "Enter new speed" << endl;
        while (true) {
            cin >> u;
            if (u <= this->MaxSpeed && u >= (-1) * this->MaxSpeed) {
                this->speed = u;
                cout << endl;
                return;
            }
            else {
                cout << endl << "Error. Maximum speed = " << getMaxSpeed() << endl;
            }
        }
    };
    void consumption(float Fuel_consumption, float speed) {
        Fuel_consumption *= (speed / cons_speed);
    }
    float time_to_fly(int f_x,int f_y, int a_x, int a_y, float Ammount_of_fuel, float fuel_consumption) {
        float length = sqrt(pow(a_x - f_x, 2) + pow(a_y - f_y, 2));
        if (length / fuel_consumption > Ammount_of_fuel) {
            cout << "Not enough fuel" << endl;
        }
        else {
            cout << "===Flight details===";
            cout << "Time = " << length / speed << endl;
            cout << "Fuel = " << Ammount_of_fuel - length / fuel_consumption << endl;;
        }
    }
protected:
    int coord_x;
    int coord_y;
    float Length;
    float Height;
    float Ammount_of_fuel;
    float Fuel_consumption;
    int Max_fly_height;
    int Max_fly_length;
    float Calibre;
    float cons_speed;
};

class Airport {
    int Ammount_of_space;
    int coord_x;
    int coord_y;
};

class Airplane : public FlyingMachine {

public:
    float getWingspan() {
        cout << this->Wingspan << " m" << endl;
    }
    float getTakeoff_run() {
        cout << this->Takeoff_run << " m" << endl;
    }
    float getWing_loading() {
        cout << this->Wing_loading << " kg" << endl;
    }

protected:
    float Wingspan;
    float Takeoff_run;
    float Wing_loading;
};

class ScrewAircraft : public Airplane {
public:
    int getNumber_of_props() {
        cout << this->Number_of_props << " props" << endl;
    }
protected:
    int Number_of_props;
};

class JetAircraft : public Airplane {
public:
    int getNumber_of_jets() {
        cout << this->Number_of_jets << " jets" << endl;
    }
protected:
    int Number_of_jets;
};

class Amphibious_aircraft : public ScrewAircraft {
public:
    
};


class Helicopter : public FlyingMachine {
public:
    float getPropeller_width() {
        cout << this->Propeller_width << " m" << endl;
    }
    float getRate_of_climb() {
        cout << this->Rate_of_climb << " km/h" << endl;
    }

protected:
    float Propeller_width = 0;
    float Rate_of_climb = 0;
};
