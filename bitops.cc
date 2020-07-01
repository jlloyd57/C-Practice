#include <iostream>
using namespace std;

int main() {
    int a = 11; // 00001011
    int b = 6; //  00000110
    //in binary -> bitwise operations
    int c = a & b; //bit wise and 00000010 = 2
    int d = a | b; //OR 00001111 = 15
    int e = a ^b; // XOR 00001101 = 13
    int f = ~a; // NOT a 111111111111111111110100 = 2s complement -12
    //went up to 32 bits in f ^
    //shifting
    int g = 1 << 5; // 000100000 multiply by 2^5= 32
    int h = 1024 >> 3; //00000010000000000 2^10 = 1024
    //                   00000010000000 1024/ 2^3 =1024/8=128
    int i= 55 >> 3; // 55/8 =  00110111 = 32 + 16 + 4 + 2 + 1
    // shifting 3 you lose the last 3 numbers -> 00110 = 6


}

