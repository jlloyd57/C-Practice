#include <iostream>
using namespace std;

class Fraction {
private:
    int num, den; // instance variables (what the object remembers)
public:
    Fraction(int n, int d) : num(n), den(d) {
//    num = n; den = d; have to be stored in the object for it to be remembered
        cout << "in the constructor\n"; //constructor is a function with same name as the clas
    }
    void print() {
        cout << num << "/" << den;
    }

};

void f() {

}
int main() {
    Fraction a(1, 2);  // 1/2 prints in the constructor 
    Fraction b(1, 3);  // 1/3 prints in the constructor
    //Fraction c = a + b;
    a.print();//tells it to print a not b
    b.print();
    //cout << c;


    return 0;
}
