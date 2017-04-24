/* 
 * File:   main.cpp
 * Author: Xyril Celestino
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    unsigned short num;    //Number inputted
    unsigned short x;
    
    //Input Data
    cout<<"Input a number 1-50"<<endl;
    cin>>num;
    
    //Map Inputs to Outputs and Process the Data
    if (num%2==1)
    {
        for (int i=1; i<=num; i++){
            x=num;
            cout<<setw(i)<<x<<setw(x)<<i<<endl;
            
        }
    }
    else
    {
        for (int i=1;i<=num; i++){
            x=num;
            cout<<setw(i)<<x<<setw(2*x)<<i<<endl;
            x--;
        }
    }

      
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

