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
#include <cmath>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;
    
    //Show menu and Loop
    do{
        //Display Menu
        cout<<"Input 1 for Hello, world!"<<endl;
        cout<<"Input 2 for Input and Output"<<endl;
        cout<<"Input 3 for Basic Data Types"<<endl;
        cout<<"Input 4 for Conditional Statements"<<endl;
        cout<<"Input 5 for For Loop"<<endl;
        cout<<"Input 6 for Functions"<<endl;
        
        //Input the Choice
        cin>>choice;
        
        //Place solutions to problem in switch statement
        switch (choice){
            case '1':{
                cout<<"Hello, World!"<<endl;
                break;
            }
            case '2':{
                int n1;
                int n2;
                int n3;
                float sum;
                cin>>n1>>n2>>n3;
                sum = n1 + n2+ n3;
                cout<<sum<<endl;
                break;   
            }
            case '3':{
                
            }
        }
    }
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

