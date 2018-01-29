/* 
 * File:   main.cpp
 * Author: Christian A. Gasco
 * Created on January 16, 2018, 12:34 PM
 * Purpose:  Menu
 */

//System Libraries Here
#include <iostream>
#include <cmath>
#include <iomanip>
#include <ctime>
#include <cstdlib>

using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int probNum;
    
    //Loop on menu
    do{

        //Menu with input of choice
        cout<<"Choose from the following Menu"<<endl;
        cout<<"Problem 1 -> Gaddis_7thEdition_Chapter4_Problem1_Min/Max"<<endl;
        cout<<"Problem 2 -> Gaddis_7thEdition_Chapter4_Problem2_RomanNumerals"<<endl;
        cout<<"Problem 3 -> Gaddis_7thEdition_Chapter4_Problem3_MagicDates"<<endl;
        cout<<"Problem 4 -> Gaddis_7thEdition_Chapter4_Problem8_Change4Dollar"<<endl;
        cout<<"Problem 5 -> Gaddis_9thEdition_Chapter4_Problem11_MathTutor"<<endl;
        cout<<"Problem 6 -> Savitch_9thEdition_Chapter3_Problem1_LongDistanceCall"<<endl;
        cout<<"Problem 7 -> Savitch_9thEdition_Chapter3_Problem2_QuadraticEquation"<<endl;
        cout<<"Problem 8 -> Savitch_9thEdition_Chapter3_Problem6_Fibonacci"<<endl;
        cout<<"Problem 9 -> Savitch_9thEdition_Chapter3_Problem7_etox"<<endl;
        cout<<"Type 1 to 9 only"<<endl;
        cin>>probNum;

        //Output the results
        switch(probNum){
            case 1: {
                int a,b,x;

                //Process/Map inputs to outputs
                cout<<"This program determines which of two numbers is greater"<<endl;
                cout<<"Input one number, then enter the next number\n";
                cin>>a>>b;

                x=a-b>0?a:b;

                //Output Data
                cout<<x<<" is the greater number"<<endl;break;
            }    
            case 2: {
                int num;
                string RomNum;

                //Initialize Variables
                cout<<"This program converts numbers to Roman Numerals"<<endl;
                cout<<"Input a number from 1 to 10"<<endl;
                cin>>num;

                //Process/Map inputs to outputs
                switch(num){
                    case 10:cout<<"Roman numeral for "<<num<<" = X";break;
                    case 9 :cout<<"Roman numeral for "<<num<<" = IX";break;
                    case 8 :cout<<"Roman numeral for "<<num<<" = VIII";break;
                    case 7 :cout<<"Roman numeral for "<<num<<" = VII";break;
                    case 6 :cout<<"Roman numeral for "<<num<<" = VI";break;
                    case 5 :cout<<"Roman numeral for "<<num<<" = V";break;
                    case 4 :cout<<"Roman numeral for "<<num<<" = IV";break;
                    case 3 :cout<<"Roman numeral for "<<num<<" = III";break;
                    case 2 :cout<<"Roman numeral for "<<num<<" = II";break;
                    case 1 :cout<<"Roman numeral for "<<num<<" = I";break;
                    default:cout<<"This input is invalid"; 
                  };break;
            }
            case 3: {
                int month,day,year;

                //Process/Map inputs to outputs
                cout<<"This program uses the date to calculate if the "
                      "month\nnumber times the day equals the year"<<endl;
                cout<<"Input the month in numeric form, followed by the day "
                      "and two digit year\n";
                cin>>month>>day>>year;

                if (month*day==year)
                    cout<<"This date is magic:"<<endl;
                else
                    cout<<"This date is not magic:"<<endl;

                //Output Data
                cout<<month<<"/"<<day<<"/"<<year<<endl;break;
            }
            case 4: {
                int pennies,dimes,nickels,quartrs;
                float price;

                //Initialize Variables
                cout<<"This program adds change to determine if it equals a dollar"<<endl;
                cout<<"Select the number of coins that will add up to one dollar"<<endl;
                cout<<"Input number of pennies"<<endl;
                cin>>pennies;
                cout<<"Input the number of nickels"<<endl;
                cin>>nickels;
                cout<<"Input the number of dimes"<<endl;
                cin>>dimes;
                cout<<"Input the number of quarters"<<endl;        
                cin>>quartrs;

                //Process/Map inputs to outputs
                price=(0.01*pennies)+(0.05*nickels)+(0.1*dimes)+(0.25*quartrs);

                if(price==1.00)
                    cout<<"The total was $1.00\nCongratulations you won the game"<<endl;
                else if(price<1.00)
                    cout<<"The sum of these coins was less than $1"<<endl;
                else if(price>1.00)
                    cout<<"The sum of these coins was more than $1"<<endl;break;
            }
            case 5: {
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
                cout<<(result==answer?"Correct":"Incorrect")<<endl;break;
            }
            case 6: {
                char day,   //The day of the week
                      dm;   //Dummy input 
                unsigned short cost, //The cost of the long distance call
                               mins, //The duration of the call
                               time; //The time the call started   

                //Initialize Variables
                cout<<"This program calculates the cost of a long-distance call"<<endl;
                cout<<"Input the day of the week with first two letters"<<endl;
                cout<<"Mo Tu We Th Fr Sa Su"<<endl;
                cin>>day>>dm;
                cout<<"Input the start time in military format"<<endl;
                cout<<"1:30 PM = 13:30"<<endl;
                cin>>setw(2)>>time>>dm>>dm>>dm;
                cout<<"Input the duration of phone call in minutes"<<endl;
                cin>>mins;

                //Process/Map inputs to outputs
                if(day=='S'||day=='s'){
                    cost=mins*15;
                }else if(mins>=8&&mins<18){
                    cost=mins*40;
                }else{
                    cost=mins*25;
                }

                //Output Data
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"The phone call costs $"<<cost/100.0<<endl;break;
            }
            case 7: {
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
                }break;
            }
            case 8: {
                unsigned int fi,fim1,fim2;

                //Initialize Variables
                fim1=1;
                fim2=1;
                cout<<fim2<<","<<fim1;

                //Process/Calculations Here
                fi=fim1+fim2;
                cout<<","<<fi;
                fim2=fim1;
                fim1=fi;

                //Process/Calculations Here
                fi=fim1+fim2;
                cout<<","<<fi;
                fim2=fim1;
                fim1=fi;

                //Process/Calculations Here
                fi=fim1+fim2;
                cout<<","<<fi;
                fim2=fim1;
                fim1=fi;

                //Process/Calculations Here
                fi=fim1+fim2;
                cout<<","<<fi;
                fim2=fim1;
                fim1=fi;

                //Process/Calculations Here
                fi=fim1+fim2;
                cout<<","<<fi;
                fim2=fim1;
                fim1=fi;

                //Process/Calculations Here
                fi=fim1+fim2;
                cout<<","<<fi;
                fim2=fim1;
                fim1=fi;

                //Process/Calculations Here
                fi=fim1+fim2;
                cout<<","<<fi;
                fim2=fim1;
                fim1=fi;

                //Process/Calculations Here
                fi=fim1+fim2;
                cout<<","<<fi;
                fim2=fim1;
                fim1=fi;

                //Output Located Here
                cout<<"\nRatio = "<<1.0f*fim1/fim2<<endl;break;
            }
            case 9: {
                float aproxE,term,x;
                int counter;

                //Input or initialize values Here
                aproxE=1.0f;
                counter=1;
                x=1.0f;
                term=x/counter++;

                //Process/Calculations Here
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Calculations Here
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Calculations Here
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Calculations Here
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;

                //Process/Calculations Here
                aproxE+=term;
                cout<<"e^"<<x<<" approximately = "<<aproxE<<endl;
                term*=x/counter++;    

                //Output Located Here
                cout<<"e^"<<x<<"       exactly = "<<exp(x)<<endl;break;
            }
            default:cout<<"You choose to exit"<<endl;
        }

    }while(probNum>=1&&probNum<=9);
   
    
    //Input or initialize values Here
    
    //Process/Calculations Here
    
    //Output Located Here

    //Exit
    return 0;
}

