#include <iostream>
using namespace std;

class Vehicle {
private:
    double speed;
public:
    Vehicle(double speed) : speed(speed) {}
    friend ostream& operator << (ostream& s, const Vehicle& v) {
        return s << v.speed;
    }
    virtual void payToll() const = 0;
};
class Car : public Vehicle {
private: string color;
public:
    Car(double speed, const string& color): Vehicle(speed), color(color) {}
void payToll() const {
        cout << "$15" << endl;
    }
};
class Bus : public Vehicle {
private:
    int numPassengers;
public:
    Bus(double speed, int numPassengers) : Vehicle(speed), numPassengers(numPassengers) {

    }
    void payToll() const {
        cout << "$24" << endl;
    }
};
class Truck : public Vehicle {
private:
    double weight;
    int numAxes;
public:
    Truck(double speed, double weight, int numAxes) : Vehicle(speed), weight(weight), numAxes(numAxes){}
    void payToll() const {
        cout << '$' << 4 * numAxes;
    }
};

int main() {
    Vehicle* v[1000];
    cout << sizeof(Vehicle*) << endl;
    Car c1(55, "red");
    Bus b1(90,28);
    Truck t1(48,12000,6);
    v[0] = &c1;
    v[1] = &t1;
    v[2] = &b1;
    for (int i=0; i < 3; i++){
        (*v[i]).payToll(); //polymorphic call 
        v[i]->payToll();
    }
}




