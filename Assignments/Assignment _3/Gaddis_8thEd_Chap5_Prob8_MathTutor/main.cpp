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
    short op1,op2,sum1,sum2;
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
    
    
    //Exit stage right!
    return 0;
}

