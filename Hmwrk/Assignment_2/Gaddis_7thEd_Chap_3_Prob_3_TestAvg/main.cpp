/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 12, 2018, 9:13 PM
 * Purpose: To find test average
 */

//System Libraries
#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

//User Libraries

//Global COnstants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int score1,score2,score3,score4,score5;
    float testavg;
    //Initialize Variables
    
    //Process/Map inputs to outputs
    cout<<"This program takes five test scores and finds the average"<<endl;
    cout<<"Input first test score\n";
    cin>>score1;
    cout<<"Input second test score\n";
    cin>>score2;
    cout<<"Input third test score\n";
    cin>>score3;
    cout<<"Input the fourth test score\n";
    cin>>score4;
    cout<<"Input fifth test score\n";
    cin>>score5;
    
    testavg=static_cast<float>(score1+score2+score3+score4+score5)/5;//Average of all scores
    
    //Output Data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"The average test score is "<<testavg<<endl;
    
    //Exit stage right!
    return 0;
}

