/*#include <iostream>
#include <cmath>
#include <cstdint>
#include <iomanip>
using namespace std;


int main() {
    /*given quadratic equation a=2, b=4, c=1 compute the roots and print out to 18 digits accuracy
3. a=1, b=2.00000001 c= 1
    cout << "give me digits for a quadratic equation; a then b then c" << endl;
    double a;
    cout << "a please" << endl;
    cin >> a;
    int64_t  b;
    cout << "b please" << endl;
    cin >> b;
    int64_t  c;
    cout << "c please" << endl;
    cin >> c;
    int64_t  root;
    root = (-b + sqrt((b*b) - 4 * a * c)/(2*a));
            cout << root << endl;
} */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

    float a, b, c, x1, x2, discriminant, realPart, imaginaryPart;
    cout << "Enter coefficients a, b and c: ";
    cin >> a >> b >> c;
    discriminant = b*b - 4*a*c;

    if (discriminant > 0) {
        x1 = (-b + sqrt(discriminant)) / (2*a);
        x2 = (-b - sqrt(discriminant)) / (2*a);
        cout << "Roots are real and different." << endl;
        cout << "x1 = " << x1 << endl;
        cout << "x2 = " << x2 << endl;
    }
    else if (discriminant == 0) {
        cout << "Roots are real and same." << endl;
        x1 = (-b + sqrt(discriminant)) / (2*a);
        cout << "x1 = x2 =" << x1 << endl;
    }

    else {
        realPart = -b/(2*a);
        imaginaryPart =sqrt(-discriminant)/(2*a);
        cout << "Roots are complex and different."  << endl;
        cout << "x1 = " << realPart << "+" << imaginaryPart << "i" << endl;
        cout << "x2 = " << realPart << "-" << imaginaryPart << "i" << endl;
    }

    return 0;
}