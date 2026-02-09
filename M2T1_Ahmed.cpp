// CSC 134
// M2T1 - Product Sales
// Ahmed
// 2/8/2026
#include <iostream>
#include <iomanip> 
using namespace std;


int main() {

    string first_name, last_name, full_name;
    string product = "phones";
    int amount_purchased;
    double cost_each = 499.99;
    double total_cost;

    cout <<"Welcome to our " << product << " store!" << endl;
    cout << "What's your first name? ";
    cin >> first_name;
    cout << "What's your last name? ";
    cin >> last_name;
    full_name = first_name + " " + last_name;
    cout << "Nice to meet you, " << full_name << endl;
    cout << "how many " << product << " would you like today? ";
    cin  >> amount_purchased;
    total_cost = amount_purchased * cost_each;
    cout << setprecision(2) << fixed;
    cout << "for " << amount_purchased << " " << product << endl;
    cout << "That will be: $" << total_cost << endl;
    cout << "Thank you for shopping with us!" << endl;


    return 0;

}