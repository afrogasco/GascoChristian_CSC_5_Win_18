/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 12, 2018, 11:00 AM
 * Purpose: To determine if meeting room capacity violates fire law regulations
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
    int maxcap,attndng;
    
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program checks to see if a meeting room violates "
        <<"fire law regulations regarding maximum room capacity"<<endl;
    cout<<"Enter the maximum capacity for meeting room"<<endl;
    cin>>maxcap; //The maximum capacity of people for meeting room
    cout<<"Enter the number of people attending the meeting"<<endl;
    cin>>attndng;//The number of people attending the meeting
    
    if (attndng<=maxcap)
    {
        cout<<"The meeting is legal to continue"<<endl;
        int diff=maxcap-attndng;
        cout<<diff<<" additional people can attend the meeting \n";
    }
    else
    {
       int diff=attndng-maxcap;
        cout<<"The meeting violates fire law regulations\n";
        cout<<diff<<" people must exit the meeting\n";
    
    }   
        
                
    //Output Data
    
    
    //Exit stage right!
    return 0;
}

