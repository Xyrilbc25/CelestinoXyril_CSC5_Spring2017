/* 
 * File:   Gaddis_8thEd_Chap3_Prob12_Temperature
 * Author: Xyril Celestino
 * Created on March 7, 2017, 1:05 PM
 * Purpose:  Program that converts Celsius to Fahrenheit
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Library
#include <iomanip>   //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize Variables
    float F; //Fahrenheit
    int C;   //Celsius
    
   //Input data
    cout<<"Input the Temperature in degrees Celsius"<<endl;
    cin>>C;
    
    //Map inputs to outputs or process the data
    F = (9/5)*C+32;
    
    //Output the transformed data
    cout<<"The Temperature converted into Degrees Fahrenheit would be = "<<endl;
    cout<<F<<endl;
    
    //Exit stage right!
    return 0;
}

