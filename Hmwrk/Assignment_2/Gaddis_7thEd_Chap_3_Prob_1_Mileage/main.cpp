/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 12, 2018, 8:20 PM
 * Purpose: To calculate the miles per gallon of gas
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
    int gallons,//The number of gallons the car can hold
    miles,      //The number of miles that can be driven on a full tank
    mileage;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program calculates miles on a car per gallon of gas"<<endl;
    cout<<"Input the number of gallons your car holds"<<endl;
    cin>>gallons;
    cout<<"Input the number of miles that can be driven on a full tank"<<endl;
    cin>>miles;
    
    mileage=miles/gallons;//The miles on car per gallon of gas
    
    //Output Data
    cout<<"The mileage for this car is "<<mileage<<" miles per gallon"<<endl;
    
    //Exit stage right!
    return 0;
}

