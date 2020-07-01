#include <iostream>
#include <random>
using namespace std;

default_random_engine gen(0); //set seed to be 0- useful to debug
//get rid of 0 once you know it works

void fillRandom(int a[], int n ) { //set location array a[] and n elements
    uniform_int_distribution<int> distribution(1,n);
    for (int i = 0; i < n; i++) {
        a[i] = distribution(gen);
    }
}
void print(int x[], int n) {
    for (int i = 0; i < n; i++)
        cout << x[i] << ' '<< endl;
    }
double mean(int x[], int n) {
    double s = 0;
    for (int i = 0; i < n; i++)
        s += x[i];
    return s / n;
}

int main() {
    const int SIZE = 10;
    int x[SIZE];
    fillRandom(x, SIZE); //fill following array - x, with SIZE random numbers
    print(x, SIZE);
    cout << mean(x, SIZE) << endl;

}

