/* 
 * File:   Gaddis_8thEd_Chap3_Prob17_Tutor
 * Author: Xyril Celestino
 * Created on March 08, 2017, 5:53 PM
 * Purpose: Program that can be used as a math tutor
 *          for a young student.
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
    short op1,op2,sum;
    char ch;
    
    //Input data
    op1=rand()%90+10;//[10-99]
    op2=rand()%90+10;//[10-99]
    
    //Map inputs to outputs or process the data
    sum = op1+op2;
            
    //Output the transformed data
    cout<<"This program will add two numbers and pause for you to solve.",
    cout<<" Press ENTER to begin. "<<endl;        
    cin.get(ch);
    cout<<op1<<" + "<<op2<<" = "<<endl;
    cout<<"Please press ENTER to continue."<<endl;
    cin.get(ch);
    cout<<sum<<endl;
    
    
    //Exit stage right!
    return 0;
}

