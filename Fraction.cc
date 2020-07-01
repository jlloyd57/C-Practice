#include <iostream>
using namespace std;
 /*
  * class is a specification of an object - table is something we eat on
  * object is an instance (example) of a class for ex: a dinner table
  * message
  * method  = member functions
  *
  * key features:
  * encapsulation: hide the internals
  * */
class Fraction {
private:
    int numerator;
    int denominator;
public: //what do you want the object to do
    Fraction(int n, int d) : numerator(n) , denominator(d){

    } //constructor- builds object - no return type

    void print(){
   cout << numerator<< "/" << denominator << endl;
}

};
int main() {
    Fraction f1(1,2);
    Fraction f2(1,3);
    f1.print();
    f2.print();
   // Fraction f3=f1+f2;

}

