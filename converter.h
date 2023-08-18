/* converter.h: Initializes functions for main.cpp
 *
 */

#ifndef CONVERTER_H_
#define CONVERTER_H_

// Franc Conversions
double francToEuro(double conversion){
    return(conversion * 1.047278);
}

double francToPound(double conversion){
    return(conversion * 0.893438);
}

double francToNaira(double conversion){
    return(conversion * 875.097476);
}

double francToDollar(double conversion){
    return(conversion * 1.138963);
}

// Euro Conversions
double euroToFranc(double conversion){
    return(conversion * 0.954877);
}

double euroToPound(double conversion){
    return(conversion *  0.852989);
}

double euroToNaira(double conversion){
    return(conversion * 835.556776);
}

double euroToDollar(double conversion){
    return(conversion * 1.087);
}

// Pound Sterling Conversions
double poundToFranc(double conversion){
    return(conversion * 1.119268);
}

double poundToEuro(double conversion){
    return(conversion * 1.172211);
}

double poundToNaira(double conversion){
    return(conversion * 979.509923);
}

double poundToDollar(double conversion){
    return(conversion * 1.274669);
}

// Naira Conversions
double nairaToFranc(double conversion){
    return(conversion * 0.001143);
}

double nairaToEuro(double conversion){
    return(conversion * 0.001197);
}

double nairaToPound(double conversion){
    return(conversion * 0.001021);
}

double nairaToDollar(double conversion){
    return(conversion * 0.001301);
}

// Dollar Conversions
double dollarToFranc(double conversion){
    return(conversion * 0.87825);
}

double dollarToEuro(double conversion){
    return(conversion * 0.919667);
}

double dollarToPound(double conversion){
    return(conversion * 0.784443);
}

double dollarToNaira(double conversion){
    return(conversion * 768.48);
}

#endif // CONVERTER_H_