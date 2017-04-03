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
const float CalBrn = 3.9;    //Calories burned per minute

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
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
    
    //Exit stage right!
    return 0;
}

