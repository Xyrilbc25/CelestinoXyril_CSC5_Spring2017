/* 
 * File:   Gaddis_8thEd_Chap3_Prob3_TestAvg
 * Author: Xyril Celestino
 * Created on March 08, 2017, 10:47 AM
 * Purpose:  Program that calculates the average of 5 test scores
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Libraries
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    int         t1,           //Test scores
                t2,
                t3,
                t4,
                t5;
    float    avg;             //Average of test scores
    //Input data
    cout<<"Input five test scores"<<endl;
    cin>>t1>>t2>>t3>>t4>>t5;
    
    //Map inputs to outputs or process the data
    avg = (t1+t2+t3+t4+t5)/5;
    
    //Output the transformed data
    cout<<"The average of these five test scores is = "<<avg<<endl;
    
    //Exit stage right!
    return 0;
}

