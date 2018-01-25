/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 7, 2018, 1:57 PM
 * Purpose: To find the total number of acres in feet of land
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
    long oneacre,arealnd,areacre;
    
    
    //Initialize Variables
    oneacre=43,560; //this many square feet in an acre
    arealnd=389,767;//square feet of land
    
    //Process/Map inputs to outputs
    areacre=(arealnd)/(oneacre);//the number of acres of land
  
    //Output Data
    cout<<"The number of acres of land = "<<areacre<<" acres"<<endl;
    
    //Exit stage right!
    return 0;
}

