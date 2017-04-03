/* 
 * File:   Gaddis_8thEd_Chap5_Prob12_Celsius2Fahrenheit
 * Author: Xyril Celestino
 * Created on April 3, 2017, 3:13 PM
 * Purpose:  Program that creates a table of Celsius to Fahrenheit
 *           conversion
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
    //Declare and initialize variables
    float F; //Fahrenheit
    int C;   //Celsius
    
    //Map inputs to outputs or process the data
    cout<<"This program creates a table that converts Celsius";
    cout<<" to Fahrenheit"<<endl;
    cout<<"Celsius                                  Fahrenheit"<<endl;
    cout<<"___________________________________________________"<<endl;
    
    //Loop calculations and output transformed data
    for (C==0;C<=20;C+=1)
    {
        F = (9/5)*C+32;   //Celsius to Fahrenheit conversion
        cout<<C<<" Celsius         =                "<<F<<" Fahrenheit"<<endl;
    }
    
    //Exit stage right!
    return 0;
}

