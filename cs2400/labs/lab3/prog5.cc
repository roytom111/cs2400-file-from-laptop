/**
 *    @file: prog1.cc 
 *  @author: Roy Frimpong
 *    @date: 9/10/20        \
 *   @brief: supposed to output " 20.0 degrees Celsius in Fahrenheit is 68.0
56.0 degrees Fahrenheit in Celsius is 13.3 "
 *  
 */

#include <iostream>
#include <cstdlib>
#include <iomanip>
using namespace std;

int main()
{
   double ctof;  // equivalent Celsius temperature
   double ftoc;  // equivalent Fahrenheit temperature.
 
   double fah = 56.;  //declare and initialize at the same time - page 48
   double  cel = 20.;

   ctof =  cel * 9./5.  + 32.;
   ftoc =(fah - 32.) * 5./9.;

   cout << setprecision(1) << fixed;
   cout << cel << " degrees Celsius in Fahrenheit is " << ctof << endl;
   cout << fah << " degrees Fahrenheit in Celsius is " << ftoc << endl;

   return (EXIT_SUCCESS);
}
