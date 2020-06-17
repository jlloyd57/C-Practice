#include <iostream>
using namespace std;

int main() {
    int a = 5; //scalar
   // string s = 'abc'; s[0] = 'a'
   int x[5]; // define x[0]..x[1]...x[4]
   //we have not initialized x[5] yet so it's full of garbage
   int y[5] = {5,1,2,-3,16}; // x[0] = 5... x[4] = 16
   int z[] = {5,4,3}; // knows its size 3
   int w [10] = {5,4,3}; // it will write 0s into anything
   // not written into
   const int SIZE = 10;
   int b[SIZE] = {0}; //writes 0s into everything
   for( int i =0; i < SIZE; i++)
       b[i] = i;

   //2D array 4x4
   //identity matrix - 1s across diagonal
   double m[4][4] = {
           {1,0,0,0},
           {0,1,0,0},
           {0,0,1,0},
           {0,0,0,1}
   };
   for (int i = 0; i < 4; i++) {
       for (int j = 0; j < 4; j++) {
           m[i][j] *=2; // doubled rows and columns
       }
   }
    //non manual way
    //want an array but don't know the size
    cout << "enter matrix size : " << endl;
    int n;
   cin >> n;
   double m2[n]; //double*m2 = new double[n]
   for(int i = 0; i < n; i++){
       m2[i] = 0;
   }
