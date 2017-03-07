/* 
 * File:   Savitch_9thEd_Chap1_ProgProj1_SumProd
 * Author: Xyril Celestino
 * Created on February 16 2017, 11:47 AM
 * Purpose:  Calculate the sum and product of 2 integers
 */

//System Libraries Here
#include <iostream> //Input - Output Library
#include <cstdlib> //Random Number Generator
#include <ctime> //Time Library to seed the random number generator
using namespace std;

//User Libraries

//Global Constants Only,

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Initialize the random number generator with time
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare variables
    short op1,op2,sum,prod;
    
    //initialize variables
    op1=rand()%90+10;//[10-99]
    op2=rand()%90+10;//[10-99]
    
    //Input data
    
    //Map inputs to outputs or process the data
    sum=op1+op2;
    prod=op1*op2;
    
    //Output the transformed data
    cout<<op1<<" + "<<op2<<" = "<<sum<<endl;
    cout<<op1<<" * "<<op2<<" = "<<prod<<endl;

    //Exit stage right!
    return 0;
}

