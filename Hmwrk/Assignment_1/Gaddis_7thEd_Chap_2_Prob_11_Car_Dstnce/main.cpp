/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 7, 2018, 1:29 PM
 * Purpose: To find the total distance that can be traveled on one tank of gas
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
    unsigned short gastank;
    float hwy_rte,st_rte,hwy_mle,st_mlge;
    
    
    //Initialize Variables
    gastank=20;  //gallons the gas tank can hold
    hwy_rte=26.8;//miles per gallon on the highway
    st_rte=21.5; //miles per gallon in town
    
    //Process/Map inputs to outputs
    hwy_mle=(gastank)*(hwy_rte); //distance in miles traveled on highway on one tank
    st_mlge=(gastank)*(st_rte);  //distance in miles traveled in town on one tank
    
    //Output Data
    cout<<"Total distance traveled in town on one tank is: "<<st_mlge<<" miles"<<endl;
    cout<<"Total distance traveled on highway on one tank is: "<<hwy_mle<<" miles"<<endl;
    
    //Exit stage right!
    return 0;
}

