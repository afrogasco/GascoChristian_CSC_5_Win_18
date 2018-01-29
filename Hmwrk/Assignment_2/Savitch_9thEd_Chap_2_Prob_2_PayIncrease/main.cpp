/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 10, 2018, 11:56 PM
 * Purpose: To find the amount of pay increase
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions
const float HLFPNY=5e-3;//Rounding with respect to cents
const int SHIFT=100;    //A shift within cents

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int salary;
    const float prc_inc=.076;//The percent increase for 6 months
    float month,inc_amt,ann_sal,mnthsal; 
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program calculates pay increase for a company"<<endl;
    cout<<"Input your annual salary \n$";
    cin>>salary;
    
    cout<<fixed<<setprecision(2)<<showpoint;
    month=static_cast <int> (salary)/12;//Monthly salary before increase
    int intPymt=(month+HLFPNY)*100;
    month=static_cast <float> (intPymt)/100;
    inc_amt=(month)*(prc_inc)*6;        //The increase amount over the six months
    ann_sal=salary+inc_amt;             //Total annual salary after pay increase
    mnthsal=ann_sal/12;                 //The total monthly salary after pay increase
    
    //Output Data

    cout<<"If your total annual salary is $"<<salary<<endl;
    cout<<"Total increase for the six months is $"<<inc_amt<<endl;
    cout<<"New annual salary is $"<<ann_sal<<endl;
    cout<<"The monthly salary for this increase is $"<<mnthsal<<endl;
    
    //Exit stage right!
    return 0;
}

