/* 
 * File:   Gaddis_8thEd_Chap5_Prob4_CaloriesBurned
 * Author: Xyril Celestino
 * Created on April 2, 2017, 1:32 PM
 * Purpose:  Program that calculates calories burned per minute
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    //Make sure 0<=Time<=30
    int Time = 30, CalBrn = 3.6;
    
    //Map inputs to outputs or process the data
    for (int i = 1; i<=Time; i++5){
        CalBrn+=i;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

