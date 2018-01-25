/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 6, 2018, 1:20 PM
 * Purpose: To add up two integers
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
    short a,b,total; //Three Integer Variables
    
    //Initialize Variables
    a=62;
    b=99;
   
    
    //Process/Map inputs to outputs
    total=a+b; //sum of two integer variables
     
    //Output Data
    cout<<total<<" = "<<a<<" + "<<b<<endl;
    
    //Exit stage right!
    return 0;
}

