/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 12, 2018, 10:28 PM
 * Purpose: To calculate calories consumed
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
    int cookies,srvngs,cal,totcal,numckes;
    float caleat;
    
    //Initialize Variables
    cookies=40;//Number of cookies in a bag
    srvngs=10;//Total servings in a bag of cookies
    cal=300;//The amount of calories per serving
    
    //Process/Map inputs to outputs
    totcal=srvngs*cal;//Total calories in a bag of cookies
    cout<<"This program calculates the total calories consumed"
           " in a certain amount of cookies"<<endl;
    cout<<"How many cookies did you eat?"<<endl;
    cin>>numckes;
    caleat=static_cast<float>(numckes*totcal)/cookies;//Total number of calories consumed
    
    //Output Data
    cout<<"Total calories consumed: "<<caleat<<" calories"<<endl;
    
    //Exit stage right!
    return 0;
}

