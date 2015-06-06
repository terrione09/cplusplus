/*
    Author: Terrione Francis
    Date: 5-11-15 
    
    Purpose: to show an understanding of 
    implecit and explecit conversion.
*/
#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
        int dollars,cents;
        double price;
        char dollarSign = 36; // implecit conversion
        
        cout << "Enter price in dollars and cents: " << endl;
        cin >> price;
        
        dollars = price; // implecit conversionfrom double to int
        cents = price * 100 - dollars * 100;
        
        cout << "Total dollars: " << dollars << endl;
        cout << "Total cents: " << cents << endl;
    return 0;
}