#include <iostream>
using namespace std;

void f(int x){
    cout << x << endl;
}
void g(int& x){
    cout << x << endl;
    x = 0;
}
void h( int* x) {
    cout << *x << endl; //print what it points to
    *x = 0;
}
int main() {
    int a = 2;
    const int b = 3;
    int& r = a; // r is pointing to address of a - but you can't tell what r is
    cout << &r << '\t' << &a << endl;
    cout<< sizeof(r) << '\t' << sizeof(a) << endl;
    //int& r2 = b will give an error, r2 is not const
    const int& r2 = b; //allowed
    cout << r2 << endl;

    int* p = &a;
    cout << p << endl; //p is the address of a
    cout << &p << endl; // the address of p is different than a tho
    f(a);
    cout << a << endl; // a stays the same
    g(a); // a is now 0
    cout << g << endl;
    h(&a); // passing address of a- a could change..
    

}

