#include <iostream>
using namespace std;

void f(int& x){
    x=0;
}
int main() {
    int a; //this isn't wrong but it's not initialized
    //order of variables in memory is not guaranteed
    cout << &a << endl; //the address of a, where it lives in memory
    //normally we don't care about this address
    int b = 2;
    cout << &b << endl; //address of b - not necessarily next to a
    //const int c; invalid - have to initialize constants
    const int d = 58; //valid
    f(b); // b becomes 0 after the function f
    cout << b << endl;
    //f(d); invalid- can't change the constant d
    // a pointer is declared in reverse
    // what p points to is an int, there p is a pointer to int
    int *p; //points to random location -> never initialized p - will crash
    int* q=&a; // space makes no difference. q is pointing to a
    //have to declare multiple pointers on different lines
    double x[10]; // array x with 10 elements
    cout << x << endl; // the name of an array is a pointer to the start
    double* dp = &x[0]; //points to the location of the first element in array
    double* dp2 = x; // point to location of first element
    dp++; //advance to next element (8 bytes at time)
    cout << *dp << endl; // prints random garbage because the first element was not initialized
    dp = x + 5; // pointer addition works in terms of types not bytes
    // x is start of array so dp now points to 6th element in array
    *dp = 2.5; // x[5] = 2.5

}

