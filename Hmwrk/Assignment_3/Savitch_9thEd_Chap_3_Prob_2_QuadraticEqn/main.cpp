/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 17, 2018, 11:20 PM
 * Purpose: To find the roots of a quadratic equation
 */

//System Libraries
#include <iostream>
#include <cmath>
using namespace std;

//User Libraries

//Global COnstants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Declare Variables
    int a,b,c;
    float root1,root2;//Variables in quadratic equation
    
    //Initialize Variables
    cout<<"This program finds the roots of a quadratic function:";
    cout<<" ax^2+bx+c=0"<<endl;
    cout<<"Input three variables, where a is not zero"<<endl;
    cin>>a>>b>>c;
    
    //Process/Map inputs to outputs
    root1=((-1*b)+sqrt(pow(b,2)-(4*a*c)))/(2*a);
    root2=((-1*b)-sqrt(pow(b,2)-(4*a*c)))/(2*a);
    
    if(a==0)
        cout<<"a cannot be zero"<<endl;
    
    else if(pow(b,2)-(4*a*c)<0)
    {    root1=((-1*b)+sqrt((pow(b,2)-(4*a*c))*-1))/(2*a);
         root2=((-1*b)-sqrt((pow(b,2)-(4*a*c))*-1))/(2*a);
         cout<<"These roots are imaginary"<<endl;
         cout<<"x="<<root1<<"i & x="<<root2<<"i"<<endl;
    }
    
    else if(pow(b,2)-(4*a*c)==0)
    {    cout<<"This quadratic has one real root"<<endl;
         cout<<"x="<<root1<<endl;
    }
    
    else
    {
        cout<<"This quadratic has two real roots"<<endl;
        cout<<"x="<<root1<<" and x="<<root2<<endl;
    }
    
    //Output Data
    
    //Exit stage right!
    return 0;
}

