/*
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 16, 2018, 11:30 PM
 * Purpose: Create a CSC/CIS 5 Template
 */

//System Libraries
#include <iostream>//I/O Library
#include <cstdlib> //Random number function
#include <ctime>   //Run time
#include <iomanip> //Formatting
using namespace std;

//User Libraries

//Global COnstants - Math/Physics Constants, Conversions,
//                   2-D Array Dimensions

//Function Prototypes

//Execution Begins Here
int main(int argc, char** argv) {
    //Set the number random seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare Variables
    unsigned short op1,op2,result,answer;
    
    //Initialize Variables
    op1=rand()%900+100;//Three digit number
    op2=rand()%1000;   //Any 1 to 3 digit number
    
    //Process/Map inputs to outputs
    result=op1+op2;
    
    //Output Data
    cout<<"Test your addition skills, Solve the following"<<endl;
    cout<<setw(5)<<op1<<endl;
    cout<<"+ "<<setw(3)<<op2<<endl;
    cout<<"-----"<<endl<<(result>1000?" ":"  ");
    cin>>answer;
    cout<<(result==answer?"Correct":"Incorrect")<<endl;
           
    
    //Exit stage right!
    return 0;
}

