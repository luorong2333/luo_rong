#include <iostream>
using namespace std;

int main()
{
   int number =0;
   int factorial = 1;

   // get input
   cout << "Enter a positive Integer: ";
   cin >> number;

   cout << number << "! is ";

   while ( number > 0 )
   {
      factorial *= number;
      number--;
   }

   cout << factorial << endl;
}
