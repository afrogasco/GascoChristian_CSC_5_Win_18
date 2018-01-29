/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 17, 2018, 8:30 PM
 * Purpose: Change for dollar game
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
    int pennies,dimes,nickels,quartrs;
    float price;
    
    //Initialize Variables
    cout<<"This program adds change to determine if it equals a dollar"<<endl;
    cout<<"Select the number of coins that will add up to one dollar"<<endl;
    cout<<"Input number of pennies"<<endl;
    cin>>pennies;
    cout<<"Input the number of nickels"<<endl;
    cin>>nickels;
    cout<<"Input the number of dimes"<<endl;
    cin>>dimes;
    cout<<"Input the number of quarters"<<endl;        
    cin>>quartrs;
    
    
    //Process/Map inputs to outputs
    price=(0.01*pennies)+(0.05*nickels)+(0.1*dimes)+(0.25*quartrs);
    
    if(price==1.00)
        cout<<"The total was $1.00\nCongratulations you won the game"<<endl;
    else if(price<1.00)
        cout<<"The sum of these coins was less than $1"<<endl;
    else if(price>1.00)
        cout<<"The sum of these coins was more than $1"<<endl;
    
    //Output Data
    
    //Exit stage right!
    return 0;
}

