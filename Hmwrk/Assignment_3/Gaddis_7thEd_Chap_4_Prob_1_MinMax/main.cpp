/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 16, 2018, 8:53 AM
 * Purpose: To determine Minimum/Maximum value of two numbers
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
    int a,b,x;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program determines which of two numbers is greater"<<endl;
    cout<<"Input one number, then enter the next number\n";
    cin>>a>>b;
    
    x=a-b>0?a:b;
    
    //Output Data
    cout<<x<<" is the greater number"<<endl;
    
    
    //Exit stage right!
    return 0;
}

