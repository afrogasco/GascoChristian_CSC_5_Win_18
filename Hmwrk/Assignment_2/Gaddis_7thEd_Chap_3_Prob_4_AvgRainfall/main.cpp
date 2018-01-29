/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 12, 2018, 9:44 PM
 * Purpose: To calculate average rainfall over three months
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global COnstants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char month1[10],month2[10],month3[10];
    int rain1,rain2,rain3;
    float avgrain;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program calculates average rainfall in inches for three months\n";
    
    cout<<"Input first month\n";
    cin>>month1;
    cout<<"Input inches of rainfall for this month\n";
    cin>>rain1;
    
    cout<<"Input second month\n";
    cin>>month2;
    cout<<"Input inches of rainfall for this month\n";
    cin>>rain2;
    
    cout<<"Input third month\n";
    cin>>month3;
    
    cout<<"Input inches of rainfall for this month\n";
    cin>>rain3;
    
    avgrain=static_cast<float>(rain1+rain2+rain3)/3;//The average rainfall in inches for three months
    
    //Output Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The average rainfall for "<<month1<<", "<<month2<<", & "<<month3<<
         " is "<<avgrain<<" inches"<<endl;
    
    //Exit stage right!
    return 0;
}

