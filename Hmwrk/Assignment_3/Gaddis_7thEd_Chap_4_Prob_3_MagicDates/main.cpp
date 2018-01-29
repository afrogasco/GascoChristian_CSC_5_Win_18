/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 2, 2018, 1:20 PM
 * Purpose: Determines magic dates
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
    int month,day,year;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program uses the date to calculate if the "
          "month\nnumber times the day equals the year"<<endl;
    cout<<"Input the month in numeric form, followed by the day "
          "and two digit year\n";
    cin>>month>>day>>year;
    
    if (month*day==year)
        cout<<"This date is magic:"<<endl;
    else
        cout<<"This date is not magic:"<<endl;
    
    //Output Data
    cout<<month<<"/"<<day<<"/"<<year<<endl;
    
    //Exit stage right!
    return 0;
}

