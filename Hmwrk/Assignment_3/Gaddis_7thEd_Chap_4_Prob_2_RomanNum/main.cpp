/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 16, 2018, 9:14 AM
 * Purpose: To Convert to Roman Numerals
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global COnstants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int num;
    string RomNum;
    
    //Initialize Variables
    cout<<"This program converts numbers to Roman Numerals"<<endl;
    cout<<"Input a number from 1 to 10"<<endl;
    cin>>num;
    
    //Process/Map inputs to outputs
    switch(num){
        case 10:cout<<"Roman numeral for "<<num<<" = X";break;
        case 9 :cout<<"Roman numeral for "<<num<<" = IX";break;
        case 8 :cout<<"Roman numeral for "<<num<<" = VIII";break;
        case 7 :cout<<"Roman numeral for "<<num<<" = VII";break;
        case 6 :cout<<"Roman numeral for "<<num<<" = VI";break;
        case 5 :cout<<"Roman numeral for "<<num<<" = V";break;
        case 4 :cout<<"Roman numeral for "<<num<<" = IV";break;
        case 3 :cout<<"Roman numeral for "<<num<<" = III";break;
        case 2 :cout<<"Roman numeral for "<<num<<" = II";break;
        case 1 :cout<<"Roman numeral for "<<num<<" = I";break;
        default:cout<<"This input is invalid";
    }
    
    //Output Data

    
    //Exit stage right!
    return 0;
}

