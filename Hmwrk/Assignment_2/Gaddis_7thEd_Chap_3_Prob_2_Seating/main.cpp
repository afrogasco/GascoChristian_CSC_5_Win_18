/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 12, 2018, 8:50 PM
 * Purpose: To calculate income from tickets for baseball stadium
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
    int ClassA,ClassB,ClassC,//Stadium categories
        num_1,num_2,num_3;
    float income;
    
    //Initialize Variables
    ClassA=15;//The price for tickets in Class A
    ClassB=12;//The price for tickets in Class B
    ClassC=9;//The price for tickets in Class C
    
    //Process/Map inputs to outputs
    cout<<"This program calculates the income for tickets sold"<<endl;
    cout<<"Input the number of people in Class A"<<endl;
    cin>>num_1;
    cout<<"Input the number of people in Class B"<<endl;
    cin>>num_2;
    cout<<"Input the number of people in Class C"<<endl;
    cin>>num_3;
    
    cout<<fixed<<setprecision(2)<<showpoint;
    income=(ClassA*num_1)+(ClassB*num_2)+(ClassC*num_3);//The total income from tickets
    
    //Output Data
    cout<<"The total income from tickets is $"<<income<<endl;
    
    //Exit stage right!
    return 0;
}

