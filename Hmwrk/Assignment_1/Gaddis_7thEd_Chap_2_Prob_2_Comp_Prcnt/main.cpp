/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 6, 2018, 5:00 PM
 * Purpose: To find the amount East Coast sales makes from total sales
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
    float prcntg,totsls,slspcnt;
    
    //Initialize Variables
    prcntg=.62;  //percentage made by East Coast sales division
    totsls=4.6e6;//Total amount of Company sales
    
    //Process/Map inputs to outputs
    slspcnt=(prcntg)*(totsls); //The amount generated by sales division
    
    //Output Data
    cout<<"The amount generated by sales is $"<<slspcnt<<endl;
    
    //Exit stage right!
    return 0;
}
