#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
int main() {
   double x = 6.023e+22;
   double y = 1.23456789012345e-300;
   double z = 1.23456789012345e+328;

   for (double i = 0; i < 10 ; i+= 0.1)
       cout << i << " " << endl;
   double j = 0;
   for (int i = 0; i < 100; i++, j += 0.1)
       cout << j << ' ' << endl;
   for (int i = 0; i < 100; i++) {
       cout << i * 0.1 << ' ' << endl;
       //slowest but most accurate
   }
   double sum = 0;
   for (double x = 0; x < 1000000; x += .1)
       sum += x;
   cout << setprecision(15);
   cout << sum << endl;
}


