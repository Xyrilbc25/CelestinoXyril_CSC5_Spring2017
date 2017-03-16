/* 
 * File:   GradeDependentIf
 * Author: Xyril Celestino
 * Created on March 16, 2017, 11:24 AM
 * Purpose:  Program that calculates grades
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
    unsigned short score;   //Integer scores valid from 0 to 100
    char grade;
    
    //Input data
    cout<<"This program produces a grade from a score input"<<endl;
    cout<<"The data type used is an integer [0-100]"<<endl;
    cout<<"Type in the score"<<endl;
    cin>>score;
    if (!(score>=0&&score<=100)){
        cout<<"You failed to input a score between 0 and 100"<<endl;
        return 1;       //Use DeMorgans law to make clearer
    }   
    
    //Map inputs to outputs or process the data
    if      (score>=90)  grade = 'A';
    else if (score>=80)  grade = 'B';
    else if (score>=70)  grade = 'C';
    else if (score>=60)  grade = 'D';
    else                 grade = 'F';
    
    //Output the transformed data
    cout<<"For a score = "<<score<<" your grade is a(n) "<<grade<<"."<<endl;
    
    //Exit stage right!
    return 0;
}

