#include <iostream>
#include <string>
using namespace std;

//print out the string n times cout << msg will print
void print (string msg, int n){
for (int i = 0; i < n; i++){
    cout << msg;
}
}
// return a string repeating msg n times, example "hi", 3 --> hihihi
string repeat(string msg, int n){
    string big = msg;
    big += " " + msg; // msg twice concatinated

}
//return a string that is the opposite order ex: hello --> olleh
string reverse(string msg){
    //need to know how long the string is what's the last letter

    return "your answer goes here" ;
}
char nextChar(char c){

}

int factorial (int n) {
cout << "give me a number and ill print the factorial" << endl;
    int fact;
    if(n>0){
    fact = n * (n-1);
    cout << fact << endl; }
}


/*int factorial2(int n) {

}
*/
int choose(int a, int b) {

}

int main() {
//example
    print("hello", 3);
    string big = repeat("yo", 9);
    cout << big << endl;
    cout << nextChar('a') << endl;
    cout << factorial(5) << endl;
   // cout << factorial2(21) << endl;
   // cout << factorial2(51) << endl;
   cout << choose(52,6) << endl; // 52! / (6!(52-6)!)
   //52C0 = 1 52C1 = 52
   /* string example
   string a = "abc" ;
   cout << a << endl;
   cout << a[0] << endl;
   cout << a[a.size() -1] << endl; //starts with 0 so last one is -1
   a += "def" ;
   a += a[3];
    */
}

