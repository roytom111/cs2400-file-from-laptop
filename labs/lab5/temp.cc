/*
 *
 *      File: temp.cc
 *      Author:Roy Frimpong 
 *      Date: 9/3/2020
 *      Description: 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cmath>
using namespace std;

int main(int argc, char const *argv[])
{
    double tempdata; //defining the different variables
    double lowtemp;
    double hightemp;
    cout << "what are the different tempratures" << endl; //promiting the user so know what intput to put in.
    cin >> tempdata; // the input
    lowtemp = tempdata;
    hightemp = tempdata;
    while (tempdata != -100) // setting a limit for the loop
    {

        if (tempdata < lowtemp) // if the input is lower then do this
        {
            lowtemp = tempdata; // new answer

            cin >> tempdata; // new inpt
        }
        else if (tempdata > hightemp) // if the first thing is false then do this. if the input is bigger then do this
        {
            hightemp = tempdata; //new answer
            cin >> tempdata; // new input
        }
        else
        {
            cin >> tempdata; // new input if all of them fail
        }
    }
    cout << "the highest temprature is :  " << hightemp << endl; // print the answers
    cout << "the lowest temptrature is : " << lowtemp << endl;
    return (0);
}