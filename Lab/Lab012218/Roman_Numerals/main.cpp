/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 22, 2018, 10:56 AM
 * Purpose: Roman Numeral Converter
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global COnstants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes
string rmnConv(unsigned short);

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short num2cnv;
    
    //Initialize Variables
    cout<<"This program converts Arabic numbers to Roman Numerals"<<endl;
    cout<<"Input a number between 1 and 3000"<<endl;
    cin>>num2cnv; 

    //Output Data
    cout<<rmnConv(num2cnv)<<endl;
    
    //Exit stage right!
    return 0;
}
string rmnConv(unsigned short num2cnv){
    //Declare Variables
    unsigned char n1000s,n100s,n10s,n1s;
    string roman;

    //Process/Map inputs to outputs
    n1000s=(num2cnv-num2cnv%1000)/1000;
    num2cnv%=1000;
    n100s=(num2cnv-num2cnv%100)/100;
    num2cnv%=100;
    n10s=(num2cnv-num2cnv%10)/10;
    num2cnv%=10;
    n1s=num2cnv;
    
    //Display the 1000's place
    switch(n1000s){
        case 3:roman+="M";
        case 2:roman+="M";
        case 1:roman+="M";
    }
    //Display the 100's place
    switch(n100s){
        case 9:roman+="CM";break;
        case 8:roman+="DCCC";break;
        case 7:roman+="DCC";break;
        case 6:roman+="DC";break;
        case 5:roman+="D";break; 
        case 4:roman+="CD";break;
        case 3:roman+="C";
        case 2:roman+="C";
        case 1:roman+="C";
    }
    //Display the 10's place
    switch(n10s){
        case 9:roman+="XC";break;
        case 8:roman+="LXXX";break;
        case 7:roman+="LXX";break;
        case 6:roman+="LX";break;
        case 5:roman+="L";break; 
        case 4:roman+="XL";break;
        case 3:roman+="X";
        case 2:roman+="X";
        case 1:roman+="X";
    }
    //Display the 1's place
    switch(n1s){
        case 9:roman+="IX";break;
        case 8:roman+="VIII";break;
        case 7:roman+="VII";break;
        case 6:roman+="VI";break;
        case 5:roman+="V";break; 
        case 4:roman+="IV";break;
        case 3:roman+="I";
        case 2:roman+="I";
        case 1:roman+="I";
    }
    return roman;
}