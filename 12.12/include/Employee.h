#ifndef EMPLOYEE_H
#define EMPLOYEE_H

#include <string> // C++ standard string class
#include "Date.h" // Date class definition
using namespace std;

class Employee
{
public:
   Employee( const string &, const string &, const string &,
      int, int, int );

   void setFirstName( const string & ); // set first name
   string getFirstName() const; // return first name

   void setLastName( const string & ); // set last name
   string getLastName() const; // return last name

   void setSocialSecurityNumber( const string & );
   string getSocialSecurityNumber() const;

   void setBirthDate( int, int, int );
   Date getBirthDate() const;

   virtual double earnings() const = 0;
   virtual void print() const;
private:
   string firstName;
   string lastName;
   string socialSecurityNumber;
   Date birthDate;
};
#endif

