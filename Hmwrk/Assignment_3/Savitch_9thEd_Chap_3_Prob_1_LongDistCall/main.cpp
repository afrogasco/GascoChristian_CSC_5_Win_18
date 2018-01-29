/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 16, 2018, 7:47 PM
 * Purpose: To calculate the cost of a long-distance call
 */

//System Libraries
#include <iostream>
#include <iomanip>
using namespace std;

//User Libraries

//Global Constants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    char day,   //The day of the week
          dm;   //Dummy input 
    unsigned short cost, //The cost of the long distance call
                   mins, //The duration of the call
                   time; //The time the call started   
    
    //Initialize Variables
    cout<<"This program calculates the cost of a long-distance call"<<endl;
    cout<<"Input the day of the week with first two letters"<<endl;
    cout<<"Mo Tu We Th Fr Sa Su"<<endl;
    cin>>day>>dm;
    cout<<"Input the start time in military format"<<endl;
    cout<<"1:30 PM = 13:30"<<endl;
    cin>>setw(2)>>time>>dm>>dm>>dm;
    cout<<"Input the duration of phone call in minutes"<<endl;
    cin>>mins;
    
    //Process/Map inputs to outputs
    if(day=='S'||day=='s'){
        cost=mins*15;
    }else if(mins>=8&&mins<18){
        cost=mins*40;
    }else{
        cost=mins*25;
    }
    
    //Output Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The phone call costs $"<<cost/100.0<<endl;
    
    //Exit stage right!
    return 0;
}

