/* 
 * File:   Menu
 * Author: Xyril Celestino
 * Created on March 23, 2017, 12:07 PM
 * Purpose:  Menu to be utilized in HW #4
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Time library to seed the random number generator
#include <iomanip>   //Formatting
#include <cmath>     //Math Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float MSSERTH = 5.972e27f;   //Mass of Earth in Grams
const float GCONST   = 6.673E-8f;   //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM  = 1.0f/30.48f; //Conversion from ft to cm
const float CNVMFT   = 5280.0f;     //Conversion from miles to ft
const float RADERTH  = 3959;        //Radius of the Earth in miles

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and Loop
    do{
        //Display Menu
        cout<<"Type 0 to exit"<<endl;
        cout<<"Type 1 for Sum 1 to n Problem"<<endl;
        cout<<"Type 2 for Sum 0.1 error Problem"<<endl;
        cout<<"Type 3 for Gaddis_8thEd_Ch5_Prob1_SumofNumbers"<<endl;
        cout<<"Type 4 for Gaddis_8thEd_Ch5_Prob8_MathTutor"<<endl;
        cout<<"Type 5 for Gaddis_8thEd_Prob2_ASCIICode"<<endl;
        cout<<"Type 6 for Savitch_9thEd_PracticeProb7_CheckYourWeight"<<endl;
        cout<<"Type 7 for Gaddis_8thed_Prob4_CaloriesBurned"<<endl;
        cout<<"Type 8 for Gaddis_8thEd_Prob6_Distance"<<endl;
        cout<<"Type 9 for Gaddis_8thEd_Prob12_Celsius2Fahrenheit"<<endl;
        
        //Input the choice
        cin>>choice;
        
        //Place solutions to problems in switch statement
        switch(choice){
            case '1':{
                //Declare and initialize variables
                //Make sure 0<=n<=40000
                int n = 40000, sum = 0;


                //Map inputs to outputs or process the data
                for (int i = 1; i<=n; i++){
                    sum+=i;
                }
                //Output the transformed data
                cout<<"The computed sum of 1 to "<<n<<"  = "<<sum<<endl;
                cout<<"and "<<n<<"*("<<n<<"+1)/2"<<"         "
                                              <<"  = "<<n*(n+1)/2<<endl;
                break;
            }
            case '2':{
                //Declare and initialize variables
                int nLoop = 10000000;
                float sum = 0.0f, frac = 0.1f;


                //Map inputs to outputs or process the data
                for (int i = 1;i<=nLoop;i++){
                    sum+=frac;
                }
                //Output the transformed data
                cout<<"The computed sum of "
                        <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
                cout<<"Simple multiplication of "
                        <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
                cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
                        <<"%"<<endl;
                break;
            }
            case '3':{
                    //Declare and initialize variables
                    //Make sure 0<n<50
                    int n;
                    int sum = 0;

                    //Input data
                    cout<<"This program retrieves the sum of all integers from ";
                    cout<<"1 to the number entered."<<endl;
                    cout<<"Please input a number from 1 to 50"<<endl;
                    cin>>n;

                    //Map inputs to outputs or process the data
                    if (!(n>=1&&n<=50)){
                        cout<<"You failed to input a number between 1 and 50"<<endl;
                        return 1;
                    }
                    for (int i = 1; i<=n; i++){
                        sum+=i;
                    }

                    //Output the transformed data
                    cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;

                break;
            }
            case '4':{
                 //Initialize the random number generator with time
                srand(static_cast<unsigned int>(time(0)));

                //Declare and Initialize variables
                char choice;
                short op1,op2,sum1,sum2;
                char ch;

                //Show menu and loop
                do{
                    //Display Menu
                    cout<<"Type 0 to exit"<<endl;
                    cout<<"Type 1 for addition"<<endl;
                    cout<<"Type 2 for subtraction"<<endl;
                    cout<<"Type 3 for multiplication"<<endl;
                    cout<<"Type 4 for division"<<endl;

                    //Input choice
                    cin>>choice;

                    //Place solutions to problems in switch statement
                    switch (choice){
                        case '1':{
                            //Declare and Initialize Variables
                            short op1, op2, sum1, sum2;
                            char ch;

                            //Input data
                            op1=rand()%90+10;//[10-99]
                            op2=rand()%90+10;//[10-99]

                            //Map inputs to outputs or process the data
                            sum2 = op1+op2;

                            //Output the transformed data
                            cout<<"This program will add two numbers and pause "
                                <<"for you to solve.",
                            cout<<" Begin. "<<endl;        
                            cin.get(ch);
                            cout<<op1<<" + "<<op2<<" = "<<endl;
                            cout<<"Please enter the answer."<<endl;
                            cin>>sum1;
                            if (sum1 == sum2) cout<<"You are correct, "
                                                  <<"Congratulations!!!"<<endl;
                            if (sum1>sum2&&sum1<sum2) cout<<"Sorry, the correct"
                                                    <<" answer is "<<sum2<<endl;
                            break;
                        }
                        case '2':{
                            //Declare and Initialize Variables
                            short op1, op2, dif1, dif2;
                            char ch;

                            //Input data
                            op1=rand()%90+10;//[10-99]
                            op2=rand()%90+10;//[10-99]

                            //Map inputs to outputs or process the data
                            dif2 = op1-op2;

                            //Output the transformed data
                            cout<<"This program will subtract two numbers"
                                <<"and pause for you to solve.";
                            cout<<" Begin. "<<endl;        
                            cin.get(ch);
                            cout<<op1<<" - "<<op2<<" = "<<endl;
                            cout<<"Please enter the answer."<<endl;
                            cin>>dif1;
                            if (dif1 == dif2) cout<<"You are correct"
                                            <<" Congratulations!!!"<<endl;
                            if (dif1>dif2&&dif1<dif2) cout<<"Sorry, the"
                                            <<" correct answer is "<<dif2<<endl;
                            break;
                        }
                        case '3':{
                            //Declare and Initialize Variables
                            short op1, op2, prod1, prod2;
                            char ch;

                            //Input data
                            op1=rand()%90+10;//[10-99]
                            op2=rand()%90+10;//[10-99]

                            //Map inputs to outputs or process the data
                            prod2 = op1*op2;

                            //Output the transformed data
                            cout<<"This program will multiply two numbers and"
                                <<" pause for you to solve.",
                            cout<<" Begin. "<<endl;        
                            cin.get(ch);
                            cout<<op1<<" * "<<op2<<" = "<<endl;
                            cout<<"Please enter the answer."<<endl;
                            cin>>prod1;
                            if (prod1 == prod2) cout<<"You are correct,"
                                                <<" Congratulations!!!"<<endl;
                            if (prod1>prod2&&prod1<prod2) cout<<"Sorry, the"
                                         <<" correct answer is "<<prod2<<endl;
                            break;

                        }
                        case '4':{
                            //Declare and Initialize Variables
                            short op1, op2, quot1, quot2;
                            char ch;

                            //Input data
                            op1=rand()%90+10;//[10-99]
                            op2=rand()%90+10;//[10-99]

                            //Map inputs to outputs or process the data
                            quot2 = op1/op2;

                            //Output the transformed data
                            cout<<"This program will divide two numbers and"
                                <<" pause for you to solve.",
                            cout<<" Begin. "<<endl;        
                            cin.get(ch);
                            cout<<op1<<" / "<<op2<<" = "<<endl;
                            cout<<"Please enter the answer."<<endl;
                            cin>>quot1;
                            if (quot1 == quot2) cout<<"You are correct,"
                                                <<" Congratulations!!!"<<endl;
                            if (quot1>quot2&&quot1<quot2) cout<<"Sorry,"
                                     <<" the correct answer is "<<quot2<<endl;
                            break;
                        }
                        default :{
                            cout<<"Exit the program"<<endl;
                        }
                    }

                }while (choice>='1'&&choice<='4');
                break;
            }
            case '5':{
                //Map inputs to outputs or process the data
                for (int i=0;i<=127;i++){
                    cout<<static_cast<char>(i);
                    if (i%16==15)cout<<endl;        //Every 16 symbols, end line
                }
                break;
            }
            case '6':{
                 //Declare and initialize variables
                float myWeight;     //Result in lbs
                float myMass = 7;   //Units of slugs

                //Map inputs to outputs or process the data
                myWeight = GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
                        /(RADERTH*RADERTH*CNVMFT);

                //Output the transformed data
                cout<<"You weigh "<<myWeight<<" lbs"<<endl;
                break;
            }
            case '7':{
                    //Declare and initialize variables
                    int min, Brn = 0;   //Minutes of exercise and Calories burned

                    //Map inputs to outputs or process the data
                    cout<<"This program calculates the amount of calories burned every 5 ";
                    cout<<"minutes for a total of 30 minutes"<<endl;
                    cout<<"-----------------------------------------------------"<<endl;

                    //Loop calculations and output transformed data
                    for (min = 5;min<=30;min+=5)
                    {
                        Brn = CalBrn*min;   //Calories Burned per minute
                        cout<<"At "<<min<<" minutes you burned "<<Brn<<" Calories."<<endl;
                    }
                break;
            }
            case '8':{
                    //Declare and initialize variables
                    float Dist = 0;     //Distance Traveled
                    int Spd, Time, HrIn;  //Speed and Time

                    //Input data
                    cout<<"This program calculates distance traveled for each hour."<<endl;
                    cout<<"Please input the speed of the vehicle in MPH:"<<endl;
                    cin>>Spd;
                    cout<<"Please input hours traveled"<<endl;
                    cin>>HrIn;

                    //Map inputs to outputs or process the data
                     for (Time==HrIn;Time<=HrIn;Time+=1)
                    {
                        Dist = Spd*Time;   //Calories Burned per minute
                        cout<<"At "<<Time<<" hours you drove "<<Dist<<" Miles."<<endl;
                    }
                break;
            }
            case '9':{
                    //Declare and initialize variables
                    float F; //Fahrenheit
                    int C;   //Celsius

                    //Map inputs to outputs or process the data
                    cout<<"This program creates a table that converts Celsius";
                    cout<<" to Fahrenheit"<<endl;
                    cout<<"Celsius                                  Fahrenheit"<<endl;
                    cout<<"___________________________________________________"<<endl;

                    //Loop calculations and output transformed data
                    for (C==0;C<=20;C+=1)
                    {
                        F = (9/5)*C+32;   //Celsius to Fahrenheit conversion
                        cout<<C<<" Celsius         =                "<<F<<" Fahrenheit"<<endl;
                    }
                break;
            }
            default:{
                cout<<"Exit the Program"<<endl;
            }
        }
        
        
    }while(choice>='1'&&choice<='9');
    
   
    
    //Exit stage right!
    return 0;
}

