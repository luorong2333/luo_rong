#include <iostream>
using namespace std;

int main()
{
   int counter = 0;
   int number =0;
   int largest =0;
   int secondLargest =0;

   cout << "Enter the first number: ";
   cin >> largest;

   cout << "Enter next number: ";
   cin >> number;

   if ( number > largest )
   {
      secondLargest = largest;
      largest = number;
   } // end if
   else
      secondLargest = number;

   counter = 2;


   while ( counter < 10 )
   {
      cout << "Enter next number: ";
      cin >> number;


      if ( number > largest )
      {
         secondLargest = largest;
         largest = number;
      }
      else if ( number  > secondLargest )
         secondLargest = number;

      counter++;
   }


   cout << "\nLargest is " <<  largest
      << "\nSecond largest is " << secondLargest << endl;
}
