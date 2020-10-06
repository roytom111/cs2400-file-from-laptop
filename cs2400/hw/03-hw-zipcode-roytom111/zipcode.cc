/**
 *   @file: zipcode.cc
 * @author: Roy Frimpong 
 *   @date: 9/26/2020
 *  @brief: program that will generate bar codes based on zipcode
 *   
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <cctype>
using namespace std;

//protype for function
string getDigitCode(char digit);
/** Function Name: getDigitCode
* @param digit  - the character to be converted into a bar code
*@return - return a barcod
*/
int getCheckDigitValue(int sum);/** Function Name: getCheckDigitValue
* @param  sum - the integer to be used to take the mod and then subtract 10 
*@return - a value which can be added to a sum to make it devisible by 10 return a barcode
*/
int conversion(char num);
/** conversion: would convert the character to an integer
* @param  num - character found in the input
*@return - an integer from 0-10 
*/

string convertint(int digit);
/** convertint: would convert an in to a string
* @param  num - integer found in the variable lastnumber
*@return - would return a bar code
*/


int main(int argc, char const *argv[])
{
    string zipcode; // define all the varibles
    string answer;
    int counter = 0;
    int add = 0;
    string code;
    int newzip;
    string barcode;
    int lastnumber;
    string lastbarcode;
    int length;

    do
    {
        cout << "Enter a zip code: " << endl; //promting the user
        cin >> zipcode; // userinput

        length = zipcode.length(); //finding the length of string

        if (length < 5 || length > 5) // setting the first error 
        {
            cout << "zipcode must be 5 digits" << endl;
        }
        else

        {
            char point1 = zipcode.at(0); // have to define each and every point of the string to a character so it can later be used
            char point2 = zipcode.at(1);
            char point4 = zipcode.at(2);
            char point3 = zipcode.at(3);
            char point5 = zipcode.at(4);

            do
            {

                counter++;
                if (counter == 1)
                {
                    cout << "| ";
                }
                

                if (counter == 1)
                {
                    if (isalpha(point1) || isspace(point1)) //setting the error
                    {
                        cout << "one of the numbers are letters";
                        break;
                    }

                    barcode = getDigitCode(point1);
                    newzip = conversion(point1);
                    cout << barcode << " ";
                }
                if (counter == 2)
                {
                    if (isalpha(point2) || isspace(point2)) //setting the error
                    {
                        cout << "one of the numbers are letters";
                        break;
                    }
                    barcode = getDigitCode(point2);
                    newzip = conversion(point2);
                    cout << barcode << " ";
                }
                if (counter == 3)
                {
                    if (isalpha(point3) || isspace(point3))
                    {
                        cout << "one of the numbers are letters";
                        break;
                    }

                    barcode = getDigitCode(point3);
                    newzip = conversion(point3);
                    cout << barcode << " ";
                }
                if (counter == 4)
                {
                    if (isalpha(point4) || isspace(point4))
                    {
                        cout << "one of the numbers are letters";
                        break;
                    }

                    barcode = getDigitCode(point4);
                    newzip = conversion(point4);
                    cout << barcode << " ";
                }
                if (counter == 5)

                {
                    if (isalpha(point5) || isspace(point5))
                    {
                        cout << "one of the numbers are letters";
                        break;
                    }

                    barcode = getDigitCode(point5);
                    newzip = conversion(point5);
                    cout << barcode << " ";
                }

                //barcode = getDigitCode(zipcode);
                //newzip = conversion(zipcode);
                add = add + newzip;
                lastnumber = getCheckDigitValue(add);
                lastbarcode = convertint(lastnumber);

                // cout << barcode << " ";

            } while (counter != 5);
            cout << lastbarcode << "  |" <<endl;
        
        }

        cout << "More codes (y/n)?" << endl; // promting the user
        cin >> answer; // waiting for input
    } while (answer == "y" || answer == "Y"); 
    return 0;
} /// main

string getDigitCode(char digit)
{
    if (digit == '0')
    {
        return "||:::";
    }
    if (digit == '1')
    {
        return ":::||";
    }
    if (digit == '2')
    {
        return "::||:";
    }
    if (digit == '3')
    {
        return ":|::|";
    }
    if (digit == '4')
    {
        return ":|::|";
    }
    if (digit == '5')
    {
        return ":|:|:";
    }
    if (digit == '6')
    {
        return ":||::";
    }
    if (digit == '7')
    {
        return "|:::|";
    }
    if (digit == '8')
    {
        return "|::|:";
    }
    if (digit == '9')
    {
        return "|:|::";
    }
    else
    {
        return "failed";
    }
}
int conversion(char num)
{
    if (num == '0')
    {
        return 0;
    }
    if (num == '1')
    {
        return 1;
    }
    if (num == '2')
    {
        return 2;
    }
    if (num == '3')
    {
        return 3;
    }
    if (num == '4')
    {
        return 4;
    }
    if (num == '5')
    {
        return 5;
    }
    if (num == '6')
    {
        return 6;
    }
    if (num == '7')
    {
        return 7;
    }
    if (num == '8')
    {
        return 8;
    }
    if (num == '9')
    {
        return 9;
    }
    else
    {
        return 00;
    }
}
int getCheckDigitValue(int sum)
{
    int result, modresult;
    modresult = (sum % 10);
    result = 10 - modresult;
    if (modresult == 0)
    {
       return 0;
    }
    else
    {
        return result;
    }
    
}
string convertint(int digit)
{
    if (digit == 0)
    {
        return "||:::";
    }
    if (digit == 1)
    {
        return ":::||";
    }
    if (digit == 2)
    {
        return "::||:";
    }
    if (digit == 3)
    {
        return ":|::|";
    }
    if (digit == 4)
    {
        return ":|::|";
    }
    if (digit == 5)
    {
        return ":|:|:";
    }
    if (digit == 6)
    {
        return ":||::";
    }
    if (digit == 7)
    {
        return "|:::|";
    }
    if (digit == 8)
    {
        return "|::|:";
    }
    if (digit == 9)
    {
        return "|:|::";
    }
    else
    {
        return "failed bottom";
    }
}
