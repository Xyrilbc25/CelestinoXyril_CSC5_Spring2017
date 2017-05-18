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
#include <algorithm>    //Sor
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int a;
    int b;
    int c;
    
    //Input Data
    cin>>a>>b>>c;
    
    //Map inputs to outputs or process the data
    if (a>b>c){
        cout<<c<<b<<a<<endl;
    }
    else if (a>c>b){
        cout<<b<<c<<a<<endl;
    }
    else if (b>a>c){
        cout<<c<<a<<b<<endl;
    }
    else if (b>c>a){
        cout<<a<<c<<b<<endl;
    }
    else if (c>a>b){
        cout<<b<<a<<c<<endl;
    }
    else if (c>b>a){
        cout<<a<<b<<c<<endl;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

