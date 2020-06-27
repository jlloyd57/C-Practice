int main() {
  const Complex a(2.0, 3.5); // real=2.0, imag = 3.5
  const Complex b(1.5);      // real = 1.5, imag = 0.0
  const Complex c;           // real = 0.0, imag = 0.0
  const Complex d = a + b;   // use member syntax (lefthand side is this, righthand passed as parameter)
  const Complex e = a - b;   // use friend syntax (specify both parameters)
  const Complex f = -a;      // use member syntax (no parameter, this points to the object a)
  const Complex g = +a;      // use friend syntax
  cout << a << '\n';
  cout << b << '\n';
  cout << c << '\n';
  cout << d << '\n';
  cout << e << '\n';
  cout << f << '\n';
  cout << g << '\n';
  
}
