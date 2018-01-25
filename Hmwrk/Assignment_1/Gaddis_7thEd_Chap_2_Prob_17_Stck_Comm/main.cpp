/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 7, 2018, 2:11 PM
 * Purpose: To compute stock prices
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
    unsigned short stocks;
    float amtpaid,commisn,amtstck,stckprc,commpct;
    
    
    //Initialize Variables
    stocks=600;   //the amount of stocks purchased
    stckprc=21.77;//dollars per stock
    commpct=.02;  //how much of total commission costs
    
    
    //Process/Map inputs to outputs
    amtstck=(stocks)*(stckprc); //the price in dollars of stocks
    commisn=(amtstck)*(commpct);//the price in dollars paid to commission
    amtpaid=amtstck+commisn;    //the total amount paid by Kathryn
    
    //Output Data
    cout<<"The amount paid for the stock alone was $"<<amtstck<<endl;
    cout<<"The amount paid to commission was $"<<commisn<<endl;
    cout<<"The total amount paid by Kathryn was $"<<amtpaid<<endl;
    
    //Exit stage right!
    return 0;
}

