/*
 *        File: invoice.cc
 *      Author: Roy Frimpong
 *        Date: 9/9/20 
 * Description: 
 *              creating an invoice for buying harddrives 
 */

#include <iostream>
#include <iomanip>
#include <cstdlib>
using namespace std;
const double HARDRIVE_1 = 90;
const double HARDRIVE_2 = 95;
const double TAX = 0.07;
const double DISCOUNT_OFF = 0.05;

int main(int argc, char const *argv[])
{
    double price, total_price, subtotal, discount, taxes, final_total;
    int quantity;
    string hardrive_type;
    string answer;

    cout << "Enter a hard drive type (W, S) followed by the quantity" << endl; //choosing the type of Harddrive
    cin >> hardrive_type;
    if (hardrive_type == "W" || hardrive_type == "w") //be able to chose between two letters
    {
        hardrive_type = "Western Digital";
        price = HARDRIVE_1;
    }
    if (hardrive_type == "S" || hardrive_type == "s")
    {
        hardrive_type = "Seagate";
        price = HARDRIVE_2;
    }
    //cout << "Enter how many you want?" << endl;
    cin >> quantity;
    if (quantity >= 5) // if the customer wants more than 5 he's going to get a discount
    {
        discount = price * quantity * DISCOUNT_OFF;
    }
    if (quantity < 5) // less than 5 means no discount
    {
        discount = 0;
    }
    total_price = price * quantity;
    cout << hardrive_type << " " << quantity << endl;

    //cout << quantity << endl;
    //cout << hardrive_type << quantity << endl;
    cout << "Do you live in Ohio?";
    cin >> answer;
    if (answer == "yes" || answer == "Yes") //if the customer lives in ohio, the customer is going to have 7% tax added
    {
        subtotal = (total_price * TAX) + total_price;
        taxes = total_price * TAX;
        final_total = TAX + subtotal - discount;
    }
    if (answer == "no" || answer == "No") //if the customer does not live in ohio get no tax
    {
        subtotal = total_price;
        taxes = 0;
        cout << "no tax" << endl;
        final_total = subtotal - discount;
    }
    cout << fixed << setprecision(2) << endl;
    cout << "Hard Drives Invoice" << endl;
    cout << "-----------------------------" << endl;
    cout << "Drive brand: " << hardrive_type << endl;
    cout << "quantity: " << quantity << endl;
    cout << "price: "
         << "$" << price << endl;
    cout << "Ohio resident: " << answer << endl;
    cout << "total price: "
         << "$" << total_price << endl;
    cout << "-----------------------------" << endl;
    cout << "Discount: "
         << "$" << discount << endl;
    cout << "subtotal: "
         << "$" << subtotal << endl;
    cout << "Taxes: "
         << "$" << taxes << endl;
    cout << "===============================" << endl;
    cout << "total: "
         << "$" << final_total << endl;
    cout << "===============================" << endl;
    cout << "you have chosen " << hardrive_type << " as your harddrive "
         << "you also have " << quantity << " harddrives" << endl;

    return 0;
}