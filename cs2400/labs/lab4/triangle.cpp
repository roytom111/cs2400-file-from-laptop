/*
 *
 *      File: triangle.cpp
 *      Author:Roy Frimpong 
 *      Date: 9/3/2020
 *      Description: getting area for triangle
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    double area, s; // variables 
    int side_1, side_2, side_3;
    char answer;

    do
    {
        cout << "what is the lenght of your first side" << endl; //aksing for prompt
        cin >> side_1;
        cout << "what is the lenght of your second side" << endl;
        cin >> side_2;
        cout << "what is the lenght of your third side" << endl;
        cin >> side_3;
        cout << fixed << setprecision(2);
        s = (side_1 + side_2 + side_3) / 2.0;
        area = sqrt(s * (s - side_1) * (s - side_2) * (s - side_3)); // calculations
        if (side_1 + side_2 < side_3 )
        {
            cout << ("(Invalid)");
            break;
        }
        if (side_2 + side_3 < side_1)
        {
            cout << ("(Invalid)");
            break;
        }
        if (side_3 + side_1 < side_2)
        {
            cout << ("(Invalid)");
            break;
        }
        if (side_1 + side_2 > side_3 && side_2 + side_3 > side_1 && side_3 + side_1 > side_2) // if the all the variables are valid it would say all the variable are valid
        {
            cout << "Valid, " << area << endl;
        }

        cout << "Do you have other inputs for me? (y/n)" << endl;
        cin >> answer;
    } while (answer == 'y' || answer == 'Y' );

    return (0);
}