/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 6, 2018, 10:00 PM
 * Purpose: To find the level of ocean water rising after certain years
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
    float rte_lvl,lvl_1,lvl_2,lvl_3;
    
    
    //Initialize Variables
    rte_lvl=1.5;//millimeters of ocean level rising per year
    
    //Process/Map inputs to outputs
    lvl_1=rte_lvl*(5); //how much more rainfall after 5 years
    lvl_2=rte_lvl*(7); //how much more rainfall after 7 years
    lvl_3=rte_lvl*(10);//how much more rainfall after 10 years
    
    //Output Data
    cout<<"The rate of ocean level rising is: "<<rte_lvl<<" millimeters per year"<<endl;
    cout<<"The ocean level after 5 years is: "<<lvl_1<<" millimeters more than current"<<endl;
    cout<<"The ocean level after 7 years is: "<<lvl_2<<" millimeters more than current"<<endl;
    cout<<"The ocean level after 10 years is: "<<lvl_3<<" millimeters more than current"<<endl;
    
    //Exit stage right!
    return 0;
}

