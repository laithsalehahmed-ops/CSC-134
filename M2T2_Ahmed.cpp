/*
CSC 134
M2T2 - Recipt Calculator
Laith Ahmed
2/16/2026
*/

#include <iostream> 
#include <iomanip>
#include <string>
using namespace std;

int main() {
    // purpose - create a simple recipt
    // should also handle sales tax (8%)

    //declare our variables
    string item = "pizza";
    double item_price = 5.99;
    double tax_percent = 0.08; // 8% is 8/100
    double tax_amount;
    double total;


    //Greet user and take order
    cout <<"Welcome to our CSC 134 restuarant!" << endl;
    
    // calculate meal price
    // calculate tax amount
    tax_amount = item_price * tax_percent; 
    total = item_price + tax_amount;

    // print recipt
    cout << setprecision(2) << fixed;
    cout << "Thank you for shopping with us" << endl;
    cout << "---------------------------------" << endl;
    cout << item << "\t$" << item_price << endl;
    cout << "Tax" << "\t$" << tax_amount << endl;
    cout << "---------------------------------" << endl;

    cout << "Total" << "\t$" << total << endl;

    return 0; // no errors




}