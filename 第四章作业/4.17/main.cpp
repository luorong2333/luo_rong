

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
   int counter = 0;
   int number = 0;
   int largest = 0;

   cout << "Enter the first number: ";
   cin >> largest;

   while ( ++counter < 10 )
   {
      cout << "Enter the next number : ";
      cin >> number;



      if ( number > largest )
         largest = number;
   }

   cout << "Largest is " << largest << endl;
   return 0;
}


