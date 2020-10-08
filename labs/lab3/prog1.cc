/**
 *    @file: prog1.cc 
 *  @author: Roy Frimpong
 *    @date: 9/10/20        \
 *   @brief: supposed to output "sum of 15 is and 20 is 35 product is 300 20 is bigger"
 *  
 */


#include<iostream> 
#include<cstdlib>
using namespace std;
const int INT1 = 15;
const int INT2 = 20;

 int main()
 {
    const int INT1 = 15;
    const int INT2 = 20;

    cout << " Sum of " << INT1 << " and " << INT2 << " is " << INT1+INT2;
    cout <<" Product is "<< INT1 * INT2 <<endl;

     if(INT1 < INT2)
        cout << INT2 <<" is bigger ";
     else
         cout << INT1 << " is bigger "; 
             
             
    return (EXIT_SUCCESS);
}
