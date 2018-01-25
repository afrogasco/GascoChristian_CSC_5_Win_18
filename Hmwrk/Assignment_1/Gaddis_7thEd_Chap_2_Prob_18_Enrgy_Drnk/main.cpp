/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 7, 2018, 2:31 PM
 * Purpose: To determine the approximate number of energy drink customers
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
    float wklypct,ctrspct,wkycust,ctrscst,custsvy;
    
    
    //Initialize Variables
    custsvy=1.2467e4;//the number of customers surveyed
    wklypct=.14;//the percent of customers who purchase one or more drink a week
    ctrspct=.64;//the percent of customers who prefer citrus flavor
    
    //Process/Map inputs to outputs
    wkycust=(custsvy)*(wklypct);//the amount of customers who purchase one or more drinks a week
    ctrscst=(custsvy)*(ctrspct);//the amount of customers who prefer citrus flavor
    
    //Output Data
    cout<<"The amount of customers surveyed was "<<custsvy<<endl;
    cout<<"The approximate number of customers in survey who purchase one or "
          "more drinks a week is "<<wkycust<<endl;
    cout<<"The approximate number of customers in survey who prefer citrus "
          "flavored is "<<ctrscst<<endl;
    
    //Exit stage right!
    return 0;
}

