// Simple currency converter using C++

#include <iostream>
using std::cout;
using std::cin;

int main(){
    // Variable to hold the the user's input for starting currency
    int starting_curr;
    // Variable to hold the intial input of the user
    double value;
    // Variables to hold conversion option
    int chf_convert, eur_convert, gbp_convert, ngn_convert, usd_convert;
    // Variables to hold new value after conversion
    double chf_value, eur_value , gbp_value, ngn_value, usd_value;

    bool continue_conversion = true;

    while (continue_conversion){
        cout << "\n";
        cout << "------ Welcome To Your Currency Converter Application! ------";
        cout << "\n\t What currency will you be starting with today: ";
        cout << "\n\t\t1. Swiss Franc (CHF)";
        cout << "\n\t\t2. European Euro (EUR)";
        cout << "\n\t\t3. British Pound (GBP)";
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
                cout << "\n\t\t3. British Pound (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> chf_convert;
                
                while(chf_convert < 1 || chf_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> chf_convert;
                }
                // Conversion from Franc to Franc
                if(chf_convert == 1){
                    cout << "\t You cannot convert this currency to itself!";
                }
                // Conversion from Franc to Euro
                else if(chf_convert == 2){
                    chf_value = value * 1.023818;
                    cout << "\t Your \u20A3" << value << " has been converted to \u20AC" << chf_value << " EUR";
                }
                // Conversion from Franc to Pound
                else if(chf_convert == 3){
                    chf_value = value * 0.879585;
                    cout << "\t Your \u20A3" << value << " has been converted to \uFFE1" << chf_value << " GBP";
                }
                // Conversion from Franc to Naira
                else if(chf_convert == 4){
                    chf_value = value * 849.711575;
                    cout << "\t Your \u20A3" << value << " has been converted to \u20A6" << chf_value << " NGN";
                }
                // Conversion from Franc to Dollar
                else if(chf_convert == 5){
                    chf_value = value * 1.117644;
                    cout << "\t Your \u20A3" << value << " has been converted to \uFF04" << chf_value << " USD";
                }
                break;

            // European Euro
            case 2:
                cout << "\t Input any amount and press enter: \u20AC";
                cin >> value;
                cout << "\n\t What currency would you like to convert \u20AC" << value << " to :";
                cout << "\n\t\t1. Swiss Franc (CHF)";
                cout << "\n\t\t2. European Euro (EUR)";
                cout << "\n\t\t3. British Pound (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> eur_convert;

                while(eur_convert < 1 || eur_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> eur_convert;
                }
                // Conversion from Euro to Franc
                if(eur_convert == 1){
                    eur_value = value * 0.976736;
                    cout << "\t Your \u20AC" << value << " has been converted to \u20A3" << eur_value << " CHF";
                }
                // Conversion from Euro to Euro
                else if(eur_convert == 2){
                    cout << "\t You cannot convert this currency to itself!";
                }
                // Conversion from Euro to Pound
                else if(eur_convert == 3){
                    eur_value = value * 0.859122;
                    cout << "\t Your \u20AC" << value << " has been converted to \uFFE1" << eur_value << " GBP";
                }
                // Conversion from Euro to Naira
                else if(eur_convert == 4){
                    eur_value = value * 829.94378;
                    cout << "\t Your \u20AC" << value << " has been converted to \u20A6" << eur_value << " NGN";
                }
                // Conversion from Euro to Dollar
                else if(eur_convert == 5){
                    eur_value = value * 1.091643;
                    cout << "\t Your \u20AC" << value << " has been converted to \uFF04" << eur_value << " USD";
                }
                break;

            // British Pound
            case 3:
                cout << "\t Input any amount and press enter: \uFFE1";
                cin >> value;
                cout << "\n\t What currency would you like to convert \uFFE1" << value << " to :";
                cout << "\n\t\t1. Swiss Franc (CHF)";
                cout << "\n\t\t2. European Euro (EUR)";
                cout << "\n\t\t3. British Pound (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> gbp_convert;

                while(gbp_convert < 1 || gbp_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> gbp_convert;
                }
                // Conversion from Pound to Franc
                if(gbp_convert == 1){
                    gbp_value = value * 1.1369;
                    cout << "\t Your \uFFE1" << value << " has been converted to \u20A3" << gbp_value << " CHF";
                }
                // Conversion from Pound to Euro
                else if(gbp_convert == 2){
                    gbp_value = value * 1.163979;
                    cout << "\t Your \uFFE1" << value << " has been converted to \u20AC" << gbp_value << " EUR";
                }
                // Conversion from Pound to Pound
                else if(gbp_convert == 3){
                    cout << "\t You cannot convert this currency to itself!";
                }
                // Conversion from Pound to Naira
                else if(gbp_convert == 4){
                    gbp_value = value * 966.037051;
                    cout << "\t Your \uFFE1" << value << " has been converted to \u20A6" << gbp_value << " NGN";
                }
                // Conversion from Pound to Dollar
                else if(gbp_convert == 5){
                    gbp_value = value / 1.27065;
                    cout << "\t Your \uFFE1" << value << " has been converted to \uFF04" << gbp_value << " USD";
                }
                break;

            // Nigerian Naira
            case 4:
                cout << "\t Input any amount and press enter: \u20A6";
                cin >> value;
                cout << "\n\t What currency would you like to convert \u20A6" << value << " to :";
                cout << "\n\t\t1. Swiss Franc (CHF)";
                cout << "\n\t\t2. European Euro (EUR)";
                cout << "\n\t\t3. British Pound (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> ngn_convert;

                while(ngn_convert < 1 || ngn_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> ngn_convert;
                }
                // Conversion from Naira to Franc
                if(ngn_convert == 1){
                    ngn_value = value * 0.001177;
                    cout << "\t Your \u20A6" << value << " has been converted to \u20A3" << ngn_value << " CHF";
                }
                // Conversion from Naira to Euro
                else if(ngn_convert == 2){
                    ngn_value = value * 0.001205;
                    cout << "\t Your \u20A6" << value << " has been converted to \u20AC" << ngn_value << " EUR";
                }
                // Conversion from Naira to Pound
                else if(ngn_convert == 3){
                    ngn_value = value * 0.001035;
                    cout << "\t Your \u20A6" << value << " has been converted to \uFFE1" << ngn_value << " GBP";
                }
                // Conversion from Naira to Naira
                else if(ngn_convert == 4){
                    cout << "\t You cannot convert this currency to itself!";
                }
                // Conversion from Naira to Dollar
                else if(ngn_convert == 5){
                    ngn_value = value * 0.001315;
                    cout << "\t Your \u20A6" << value << " has been converted to \uFF04" << ngn_value << " USD";
                }
                break;

            // US Dollar
            case 5:
                cout << "\t Input any amount and press enter: \uFF04";
                cin >> value;
                cout << "\n\t What currency would you like to convert \uFF04" << value << " to :";
                cout << "\n\t\t1. Swiss Franc (CHF)";
                cout << "\n\t\t2. European Euro (EUR)";
                cout << "\n\t\t3. British Pound (GBP)";
                cout << "\n\t\t4. Nigerian Naira (NGN)";
                cout << "\n\t\t5. US Dollar (USD)";
                cout << "\n\t Input a number from 1-5 here and press enter: ";
                cin >> usd_convert;

                while(usd_convert < 1 || usd_convert > 5){
                    cout << "\t Please enter a valid number: ";
                    cin >> usd_convert;
                }
                // Conversion from Dollar to Franc
                if(usd_convert == 1){
                    usd_value = value * 0.894739;
                    cout << "\t Your \uFF04" << value << " has been converted to \u20A3" << usd_value << " CHF";
                }
                // Conversion from Dollar to Euro
                else if(usd_convert == 2){
                    usd_value = value * 0.915541;
                    cout << "\t Your \uFF04" << value << " has been converted to \u20AC" << usd_value << " EUR";
                }
                // Conversion from Dollar to Pound
                else if(usd_convert == 3){
                    usd_value = value * 0.786999;
                    cout << "\t Your \uFF04" << value << " has been converted to \uFFE1" << usd_value << " GBP";
                }
                // Conversion from Dollar to Naira
                else if(usd_convert == 4){
                    usd_value = value * 760.27;
                    cout << "\t Your \uFF04" << value << " has been converted to \u20A6" << usd_value << " NGN";
                }
                // Conversion from Dollar to Dollar
                else if(usd_convert == 5){
                    cout << "\t You cannot convert this currency to itself!";
                }
                break;
        }

        // Ask the user if they want to perform another conversion
        char choice;
        cout << "\n\t Do you want to perform another converion? Input (Y for yes / N for no) and press enter: ";
        cin >> choice;

        // Check if the user wants to continue or stop
        continue_conversion = (choice == 'Y' || choice == 'y');
    }
    return 0;
}