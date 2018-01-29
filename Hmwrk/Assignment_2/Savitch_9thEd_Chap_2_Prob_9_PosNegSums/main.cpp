/* 
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 9, 2018, 12:36 PM
 * Purpose:  To find the sum
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
    int number,negSum,posSum;
    
    //Input or initialize values Here
    negSum=posSum=0;
    
    //Process/Calculations Here
    cout<<"This program adds 10 numbers"<<endl;
    cout<<"It determines the negative, positive, and total sum"<<endl;
    cout<<"Input 10 numbers, 1 at a time"<<endl;
    
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
        
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
        
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
        
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
        
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
        
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
        
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
        
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
        
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
        
    cin>>number;
    negSum+=number<0?number:0;
    posSum+=number>0?number:0;
    
    //Output Located Here
    cout<<"The negative sum ="<<negSum<<endl;
    cout<<"The positive sum ="<<posSum<<endl;
    cout<<"The total sum ="<<negSum+posSum<<endl;
    
    //Exit
    return 0;
}

