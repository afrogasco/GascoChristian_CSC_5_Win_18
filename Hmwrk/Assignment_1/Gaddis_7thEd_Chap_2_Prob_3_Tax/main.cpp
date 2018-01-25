/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 6, 2018, 8:20 PM
 * Purpose: To compute the tax on a sale
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
    unsigned short price;
    float stattax, cntytax,tottax,amt_tax;
    
    //Initialize Variables
    price=52;   //amount of purchase in dollars
    stattax=.04;//percentage of state sales tax
    cntytax=.02;//percentage of county sales tax
    
    //Process/Map inputs to outputs
    tottax=stattax+cntytax; //total sales tax
    amt_tax=(price)*(tottax);//the amount of sales tax on purchase
    
    //Output Data
    cout<<"The total sales tax is "<<tottax<<endl;
    cout<<"The amount of total sales tax for a $52 purchase is $"<<amt_tax<<endl;
    
    //Exit stage right!
    return 0;
}

