#include <iostream>
using namespace std;

double a =0;
double b =0;
double c =0;

int main()
{
    cout << "Enter first number;";
    cin  >> a;
    cout << "Enter second number:";
    cin >> b;
    cout << "Enter third number:";
    cin >> c;

    if(a+b>c&a+c>b&b+c>a)
        cout << "The three numbers can form triangles";
    else
      cout << "The three numbers can not form triangles";
}


