#include <iostream>
using namespace std;

int main () {
    double a = 3/2; // 1 - will only display how many decimals you give - 1 here
    double b = 3.0/2; // 1.5 - 3.0 has 1 decimal so the answer does
    double c = b * 1; //1.5 - b has 1 decimal so the answer does too
    int d = 3/2*2; // 2 - will round down to 1 decimal 3/2 rounds down to 1 which is then multiplied
    int e = 7 % 3 / 3; // 0 rounds down to 0
    cout << a << endl;
    cout << b << '\n' ;
    cout << c << endl;
    cout << d << endl;
    cout << e << endl;
    int f = b * 3; // this will round down (truncate) to 4 (not 4.5)
    cout << f << endl;
    return 0;

}
