/* 
 * File:   PaycheckDependent
 * Author: Xyril Celestino
 * Created on March 16, 2017, 12:30 PM
 * Purpose:  Program that outputs paycheck if you work over or under 
 *           40 hours
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    unsigned short HrsWrk;       //Hours Worked
    char           PayChk;       //Paycheck
    float          Payrt = 10;   //PayRate
    
    //Input data
    cout<<"This Program calculates your paycheck based on how many hours";
    cout<<" worked"<<endl;
    cout<<"Type in the amount of hours worked"<<endl;
    cin>>HrsWrk;
    
    //Map inputs to outputs or process the data
    if      (HrsWrk<=40) PayChk = 10*HrsWrk;
    else                 PayChk = 10*HrsWrk+10(HrsWrk-40);
    
    //Output the transformed data
    cout<<"For "<<HrsWrk<<" hours worked, your paycheck is = $"<<PayChk<<endl;
    
    
    //Exit stage right!
    return 0;
}

