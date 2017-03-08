/* 
 * File:   Gaddis_8thEd_Chap3_Prob1_MilesPerGal
 * Author: Xyril Celestino
 * Created on March 08, 2017, 10:20 AM
 * Purpose:  Program that calculates a car's gas mileage
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Mathematics Library

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    float mpg;  //Miles per Gallon of Gas
    int fllmil; //Number of miles car can be driven with full tank
    int gas;    //Gallons of gas a car can hold
    
    //Input data
    cout<<"Input the amount of gasoline your car can hold "<<endl;
    cin>>gas;
    cout<<"input the number your car can be driven with a full tank "<<endl;
    cin>>fllmil;
    
    //Map inputs to outputs or process the data
    mpg = fllmil/gas;
    
    //Output the transformed data
    cout<<"Your car's gas mileage is = "<<endl;
    cout<<mpg<<endl;
    //Exit stage right!
    return 0;
}

