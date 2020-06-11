#include <iostream>
using namespace std;
int main() {
    int x = 0;
    while (x < 8) {
        cout << x << endl;
        x++;
    }
    for (int i = 0; i < 5; i++)
        cout << i << endl;
    for (int i = 5; i > -2; i--)
        cout << i << endl;
    int sum = 0;
    for (int j = 2; j < 12; j += 2) {
        sum += j;
        cout << sum << endl;
    }
    cout << "practice" << endl;

    for (int i = 1; i < 1024; i *= 2) {
        cout << i << endl; // 1,2,4,8,16,32,64,128,256,512
    }
    for (int j = 2; j < 100; j *= 3) {
        cout << j << endl; // 2,6,18,54
    }
    for (int j = 3; j < 100; j *= 3+1) { // multiply by 4
        cout << j << endl; //3,12,48
    }
    for (int j = 3; j < 100; j = j * 3 + 1) {
        cout << j << endl; // 3, 10, 31, 94
    }

    /*for ( int k = 0; k < 10; k *=2){
        cout << k << endl; // 0,0,0..0
    } */
    double total = 0;
    for (double i = 1.0; i < 100; i++){
        total += 1.0/i;
        cout << total << endl;
    }
}

