/* 
 * File:   Gaddis_8thEd_Chap5_Prob6_Distance
 * Author: Xyril Celestino
 * Created on April 3, 2:53 PM
 * Purpose:  Program that calculates distance a vehicle travels each hour
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
    
    //Exit stage right!
    return 0;
}

