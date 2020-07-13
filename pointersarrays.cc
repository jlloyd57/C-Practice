#include <iostream>
using namespace std;

int main() {
    int x[10];
    x[0] = 5;
    int *const p = x; // p and x are the same (const pointer to int)
    cout << x[0] << p[0] << endl;

    const int y[10] = {3}; //initialize anything in a list - rest are 0
    const int* const q = y; // q and y are same
    //q is a constant pointer to integers which are constant
    //can't change where it's pointing and what it's pointing to
    cout << y[0] << endl; // can just look
    //illegal to do y[0]=5 y[] is const
    //*q = 55; illegal - q is constant  


}
