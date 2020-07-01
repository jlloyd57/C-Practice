#include <iostream>
using namespace std;

void f(int x){
    cout << x;
    x+= 5;
    //variables in a function exist on a stack but when you
    //return from a function they're gone- paramter never changes
}
void g(int& x){ //& = reference x - if you change the value of x
    // you are changing the one sent to you - x is pointing to
    // location in memory by changing x you change a now
    cout << x << endl;
    x +=5;
}
int main() {
    int a = 3;
    f(a); //3 -> in void f x becomes 8 but this value isnt saved
    f(a);//3 again not 8- parameters are passed by VALUE (copy)
    f(4); // notice 4 does not change x becomes 9 but 4 does not change this
    g(a); // 3 but now a = 8
    g(a); // 8 but now becomes 13
    //g(12); //not allowed to pass a constant by reference -
    // does not compile- cannot change a constant like this
    int b = 4;
    b =5; //5 is an r value - can't be put on left side of =
    //cannot assign a value to 5 cant do 5 = r;

}

