/* 
 * File:   Gaddis_8thEd_Chap4_Prob11_MathTutor
 * Author: Xyril Celestino
 * Created on March 20, 2017, 9:36 AM
 * Purpose: Program that can be used as a math tutor
 *          for a young student. Also congratulates or berates student.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Number Generator
#include <ctime>     //Time library to seed the random nu ber generator

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
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
                cout<<"This program will add two numbers and pause for you to solve.",
                cout<<" Press ENTER to begin. "<<endl;        
                cin.get(ch);
                cout<<op1<<" + "<<op2<<" = "<<endl;
                cout<<"Please enter the answer."<<endl;
                cin>>sum1;
                if (sum1 == sum2) cout<<"You are correct, Congratulations!!!"<<endl;
                if (sum1>sum2&&sum1<sum2) cout<<"Sorry, the correct answer is "<<sum2<<endl;
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
                cout<<"This program will subtract two numbers and pause for you to solve.",
                cout<<" Press ENTER to begin. "<<endl;        
                cin.get(ch);
                cout<<op1<<" - "<<op2<<" = "<<endl;
                cout<<"Please enter the answer."<<endl;
                cin>>dif1;
                if (dif1 == dif2) cout<<"You are correct, Congratulations!!!"<<endl;
                if (dif1>dif2&&dif1<dif2) cout<<"Sorry, the correct answer is "<<dif2<<endl;
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
                cout<<"This program will multiply two numbers and pause for you to solve.",
                cout<<" Press ENTER to begin. "<<endl;        
                cin.get(ch);
                cout<<op1<<" * "<<op2<<" = "<<endl;
                cout<<"Please enter the answer."<<endl;
                cin>>prod1;
                if (prod1 == prod2) cout<<"You are correct, Congratulations!!!"<<endl;
                if (prod1>prod2&&prod1<prod2) cout<<"Sorry, the correct answer is "<<prod2<<endl;
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
                cout<<"This program will divide two numbers and pause for you to solve.",
                cout<<" Press ENTER to begin. "<<endl;        
                cin.get(ch);
                cout<<op1<<" / "<<op2<<" = "<<endl;
                cout<<"Please enter the answer."<<endl;
                cin>>quot1;
                if (quot1 == quot2) cout<<"You are correct, Congratulations!!!"<<endl;
                if (quot1>quot2&&quot1<quot2) cout<<"Sorry, the correct answer is "<<quot2<<endl;
                break;
            }
            default :{
                cout<<"Exit the program"<<endl;
            }
        }
        
    }while (choice>='1'&&choice<='4');
  
    //Exit stage right!
    return 0;
}

