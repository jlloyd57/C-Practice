#include <iostream>
using namespace std;

int main() {
    int a [10]={3,4,5};
    double b[20]={2.5,3.5,4,5.5};

    // declare a pointer p to first element of a, two ways
    int* p = &a[0];
    //int* p = a;
    // declare a pointer q to point to fifth element of b
    double* q = &b[4];
    //double * q = b+4; //pointer arithmetic
    //add 1 to what q points at
    //*q++;

    //initialize pointer r to point at the first element of a and scan forward, setting the entire array to 3
    for(int *r=a; r <a +10; r++){
        *r = 3;
    }

}

