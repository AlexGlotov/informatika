class ground : public WarMachine {
public:
    virtual bool provKilled() = 0;
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
            if (u <= this->MaxSpeed && u >= ( -1) * this->MaxSpeed) {
                this->speed = u;
                cout << endl;
                return;
            }
            else {
                cout << endl << "Error. Maximum speed = " << getMaxSpeed() << endl;
            }
        }
    };
    void setStartCoord() {
        int a, b, c;
        cout << "Enter the starting location (integer)" << endl;
        while (true) {
            cin >> a >> b >> c;
            if (c != 0) {
                cout << endl << "Error. Please change location" << endl;
            }
            else {
                cout << endl;
                return;
            }
        }
    };
};

class artillery : public ground {
    bool provKilled(int a, int b, int c) {
        if ((sqrt((this->x - a) * (this->x - a) + (this->y - b) * (this->y - b)) <= this->DefeatRadius) && (c <= 100)) {
            return true;
        }
        else
            return false;
    }
protected:
    unsigned int DefeatRadius;
};

class antiair : public ground {
    bool provKilled(int a, int b, int c) {
        if (sqrt((this->x - a) * (this->x - a) + (this->y - b) * (this->y - b) + (this->z - c) * (this->z - c)) <= this->MaxHeight) {
            return true;
        }
        else
            return false;
    }
protected:
    unsigned int MaxHeight;
};

class tank : public ground {
public:
    bool getSmokeScreen() {
        cout << this->smokeScreen << endl;
    };
    int getBattleDistance() {
        cout << this->battleDistance << endl;
    };
protected:
    bool smokeScreen;
    int battleDistance;
};

class SupportTank : public tank {

protected:
    bool GuidedPocket;
};

class BattleTank : public tank {

private:
    bool activeArmor;
};
