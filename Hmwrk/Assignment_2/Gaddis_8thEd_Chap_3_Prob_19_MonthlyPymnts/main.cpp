/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 9, 2018, 10:50 PM
 * Purpose: To find the monthly payments on a loan
 */

//System Libraries
#include <iostream>
#include <cmath>
#include <iomanip>

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
    short numpymt;
    float int_rte,loanamt,mnthamt,mnthrte,totpymt,int_amt,util;
    
    //Initialize Variables
    numpymt=36;//The number of payments that must be made monthly
    int_rte=.12;//The interest rate per year for this loan
    loanamt=1.0e4;//Loan amount for $10000
    
    //Process/Map inputs to outputs
    mnthrte=int_rte/12;        //The interest rate per month
    util=pow(1+mnthrte,numpymt);          //Variable replacing power function
    mnthamt=util*mnthrte*loanamt/(util-1);//Calculation for monthly payments
    int intPymt=(mnthamt+HLFPNY)*SHIFT;
    mnthamt=static_cast<float>(intPymt)/SHIFT;
    totpymt=mnthamt*numpymt;              //The total amount paid for this loan
    int_amt=totpymt-loanamt;              //The total interest paid for this loan
    
    //Output Data
    cout<<"This program calculates loan interest payments"<<endl;
    cout<<"Interest rate         = "<<int_rte<<endl;
    cout<<"Monthly interest rate = "<<mnthrte<<endl;
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Monthly Payments      = $"<<mnthamt<<endl;
    cout<<"Total amount paid     = $"<<totpymt<<endl;
    cout<<"Total interest paid   = $"<<int_amt<<endl;
    
    //Exit stage right!
    return 0;
}

