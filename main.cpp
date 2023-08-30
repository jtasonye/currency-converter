/* main.cpp: Simple currency converter using C++
 *
 */

#include <iostream>
#include "converter.h"
using std::cout;
using std::cin;
using std::endl;

int main(){
    // Variable to hold the the user's input for starting currency
    int starting_curr;
    // Variable to hold the intial input of the user
    double value;
    // Variables to hold conversion option
    int chf_convert, eur_convert, gbp_convert, ngn_convert, usd_convert;

    bool continue_conversion = true;

    while (continue_conversion){
        cout << "\n";
        cout << "------ Welcome To Your Currency Converter Application! ------";
        cout << "\n\t What currency will you be starting with today: ";
        cout << "\n\t\t1. Swiss Franc (CHF)";
        cout << "\n\t\t2. European Euro (EUR)";
        cout << "\n\t\t3. British Pound Sterling (GBP)";
        cout << "\n\t\t4. Nigerian Naira (NGN)";
        cout << "\n\t\t5. US Dollar (USD)";
        cout << "\n\t Input a number from 1-5 here and press enter: ";
        cin >> starting_curr;

        while(starting_curr < 1 || starting_curr > 5){
            cout << "\t Please enter a valid number: ";
            cin >> starting_curr;
        }

        switch(starting_curr){
            // Swiss Franc
            case 1: 
                cout << "\t Input any amount and press enter: \u20A3";
                cin >> value;
                cout << "\n\t What currency would you like to convert \u20A3" << value << " to :";
                cout << "\n\t\t1. Swiss Franc (CHF)";
                cout << "\n\t\t2. European Euro (EUR)";
                cout << "\n\t\t3. British Pound Sterling (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> chf_convert;
                
                while(chf_convert < 1 || chf_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> chf_convert;
                }
                if(chf_convert == 1){
                    cout << "\t You cannot convert this currency to itself!";
                }
                else if(chf_convert == 2){
                    cout << "\t Your \u20A3" << value << " has been converted to \u20AC" << francToEuro(value) << " EUR";
                }
                else if(chf_convert == 3){
                    cout << "\t Your \u20A3" << value << " has been converted to \uFFE1" << francToPound(value) << " GBP";
                }
                else if(chf_convert == 4){
                    cout << "\t Your \u20A3" << value << " has been converted to \u20A6" << francToNaira(value) << " NGN";
                }
                else if(chf_convert == 5){
                    cout << "\t Your \u20A3" << value << " has been converted to \uFF04" << francToDollar(value) << " USD";
                }
                break;

            // European Euro
            case 2:
                cout << "\t Input any amount and press enter: \u20AC";
                cin >> value;
                cout << "\n\t What currency would you like to convert \u20AC" << value << " to :";
                cout << "\n\t\t1. Swiss Franc (CHF)";
                cout << "\n\t\t2. European Euro (EUR)";
                cout << "\n\t\t3. British Pound Sterling (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> eur_convert;

                while(eur_convert < 1 || eur_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> eur_convert;
                }
                if(eur_convert == 1){
                    cout << "\t Your \u20AC" << value << " has been converted to \u20A3" << euroToFranc(value) << " CHF";
                }
                else if(eur_convert == 2){
                    cout << "\t You cannot convert this currency to itself!";
                }
                else if(eur_convert == 3){
                    cout << "\t Your \u20AC" << value << " has been converted to \uFFE1" << euroToPound(value) << " GBP";
                }
                else if(eur_convert == 4){
                    cout << "\t Your \u20AC" << value << " has been converted to \u20A6" << euroToNaira(value) << " NGN";
                }
                else if(eur_convert == 5){
                    cout << "\t Your \u20AC" << value << " has been converted to \uFF04" << euroToDollar(value) << " USD";
                }
                break;

            // British Pound
            case 3:
                cout << "\t Input any amount and press enter: \uFFE1";
                cin >> value;
                cout << "\n\t What currency would you like to convert \uFFE1" << value << " to :";
                cout << "\n\t\t1. Swiss Franc (CHF)";
                cout << "\n\t\t2. European Euro (EUR)";
                cout << "\n\t\t3. British Pound Sterling (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> gbp_convert;

                while(gbp_convert < 1 || gbp_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> gbp_convert;
                }
                if(gbp_convert == 1){
                    cout << "\t Your \uFFE1" << value << " has been converted to \u20A3" << poundToFranc(value) << " CHF";
                }
                else if(gbp_convert == 2){
                    cout << "\t Your \uFFE1" << value << " has been converted to \u20AC" << poundToEuro(value) << " EUR";
                }
                else if(gbp_convert == 3){
                    cout << "\t You cannot convert this currency to itself!";
                }
                else if(gbp_convert == 4){
                    cout << "\t Your \uFFE1" << value << " has been converted to \u20A6" << poundToNaira(value) << " NGN";
                }
                else if(gbp_convert == 5){
                    cout << "\t Your \uFFE1" << value << " has been converted to \uFF04" << poundToDollar(value) << " USD";
                }
                break;

            // Nigerian Naira
            case 4:
                cout << "\t Input any amount and press enter: \u20A6";
                cin >> value;
                cout << "\n\t What currency would you like to convert \u20A6" << value << " to :";
                cout << "\n\t\t1. Swiss Franc (CHF)";
                cout << "\n\t\t2. European Euro (EUR)";
                cout << "\n\t\t3. British Pound Sterling (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> ngn_convert;

                while(ngn_convert < 1 || ngn_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> ngn_convert;
                }
                if(ngn_convert == 1){
                    cout << "\t Your \u20A6" << value << " has been converted to \u20A3" << nairaToFranc(value) << " CHF";
                }
                else if(ngn_convert == 2){
                    cout << "\t Your \u20A6" << value << " has been converted to \u20AC" << nairaToEuro(value) << " EUR";
                }
                else if(ngn_convert == 3){
                    cout << "\t Your \u20A6" << value << " has been converted to \uFFE1" << nairaToPound(value) << " GBP";
                }
                else if(ngn_convert == 4){
                    cout << "\t You cannot convert this currency to itself!";
                }
                else if(ngn_convert == 5){
                    cout << "\t Your \u20A6" << value << " has been converted to \uFF04" << nairaToDollar(value) << " USD";
                }
                break;

            // US Dollar
            case 5:
                cout << "\t Input any amount and press enter: \uFF04";
                cin >> value;
                cout << "\n\t What currency would you like to convert \uFF04" << value << " to :";
                cout << "\n\t\t1. Swiss Franc (CHF)";
                cout << "\n\t\t2. European Euro (EUR)";
                cout << "\n\t\t3. British Pound Sterling (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> usd_convert;

                while(usd_convert < 1 || usd_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> usd_convert;
                }
                if(usd_convert == 1){
                    cout << "\t Your \uFF04" << value << " has been converted to \u20A3" << dollarToFranc(value) << " CHF";
                }
                else if(usd_convert == 2){
                    cout << "\t Your \uFF04" << value << " has been converted to \u20AC" << dollarToEuro(value) << " EUR";
                }
                else if(usd_convert == 3){
                    cout << "\t Your \uFF04" << value << " has been converted to \uFFE1" << dollarToPound(value) << " GBP";
                }
                else if(usd_convert == 4){
                    cout << "\t Your \uFF04" << value << " has been converted to \u20A6" << dollarToNaira(value) << " NGN";
                }
                else if(usd_convert == 5){
                    cout << "\t You cannot convert this currency to itself!";
                }
                break;
        }

        // Ask the user if they want to perform another conversion
        char choice;
        cout << "\n\n\t Do you want to perform another converion? Input (Y for yes / N for no) and press enter: ";
        cin >> choice;

        // Check if the user wants to continue or stop
        continue_conversion = (choice == 'Y' || choice == 'y');

        // If the user wants to stop, display the following message
        if(choice != 'Y' || choice != 'y'){
            cout << "\n\t Thank you for using the conversion app today!" << endl;
        }
    }
    return 0;
}