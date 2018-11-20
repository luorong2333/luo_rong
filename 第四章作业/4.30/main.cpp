#include <iostream>
using namespace std;

double r = 0;
double d = 0;
double c = 0;
double s = 0;

int main()
{
  cout << "Enter a number:";
  cin >> r;

  d=2*r;
  c=2*3.14159*r;
  s=3.14159*r*r;
  cout << "d=" << d << endl;
  cout << "c=" << c << endl;
  cout << "s=" << s << endl;
return 0;
}

