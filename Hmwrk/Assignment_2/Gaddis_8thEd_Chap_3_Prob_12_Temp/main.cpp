/* 
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 9, 2018, 1:40 AM
 * Purpose:  To compute temperature in different units of measurement
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float degF,degC,Ctmpchk,x1,x2,y1,y2;
    
    //Input or initialize values Here
    x1=32; //Interpolation 32 deg Fahrenheit
    x2=212;//Interpolation 212 deg Fahrenheit
    y1=0;  //Interpolation 0 deg Celsius
    y2=100;//Interpolation 100 deg Celsius
    
    //Input temperature to convert
    cout<<"Input the temperature in degrees Fahrenheit"<<endl;
    cout<<" to convert to degrees Celsius"<<endl;
    cin>>degF;
    
    //Process/Map inputs to outputs
    degC=(degF-32)*5/9;
    Ctmpchk=y1+(y2-y1)*(degF-x1)/(x2-x1);
    
    //Output Located Here
    cout<<degF<<" degrees Fahrenheit = "
    <<Ctmpchk<<" degrees Celsius by interpolation = "
    <<degC<<" = degrees Celsius by conversion"<<endl;

    //Exit
    return 0;
}

