#include <iostream>
#include <cmath>
using namespace std;

void f() { //takes no parameters and only does same thing over and over again
    cout << "hello" << endl;
}
int add(int a, int b) { // takes 2 parameters
    return a + b;
}
double hypot(double a, double b) {
    return  sqrt(a*a + b*b);
}
int main() {
    f;// this is legal but doesn't do anything
    5; // this is legal but doesn't do anything
    3+4; // this is legal but doesn't do anything
    f(); //executes the function
    int z= add(3,4); // push these #s to stack
    cout << z << endl;
    double c = hypot(3,4);
    cout << c << endl;
}

