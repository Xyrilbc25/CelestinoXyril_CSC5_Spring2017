/* 
 * File:   Gaddis_8thEd_Chap4_Prob8_ColorMixer
 * Author: Xyril Celestino
 * Created on March 19, 2017, 12:26 PM
 * Purpose:  Program that outputs the mixture of two primary colors
 *           between red, blue, and yellow.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>    //string library
#include <cctype>    //toupper, tolower
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    string col1, col2;         //The 2 Primary colors inputted
    
    //Input variables
    cout<<"This program combines 2 primary colors into a secondary color"<<endl;
    cout<<"Please input 2 primary colors (Red, Blue, Yellow)"<<endl;
    cin>>col1>>col2;
    //Test for correctness
    if (!(col1 == "Red"||col1 == "Blue"||col1 == "Yellow")){
        cout<<"Sorry, input primary colors only (red, blue, yellow)"<<endl;
        return 1;   //Exit Program
    }
    if (!(col2 == "Red"||col2 == "Blue"||col2 == "Yellow")){
        cout<<"Sorry, input primary colors only (Red, Blue, Yellow)"<<endl;
        return 1;   //Exit Program
    }
    if (col1 == col2){
        cout<<"Same colors, input two different primaries"<<endl;
    }
   
    //Map inputs to outputs or process the data
    cout<<col1<<" and "<<col2<<" result in the following"<<endl;
    if ((col1 =="Red"&& col2 =="Blue")||(col2 =="Red"&& col1 =="Blue"))
        cout<<"The mixture of those two colors is Purple"<<endl;
    if ((col1 =="Red"&& col2 =="Yellow")||(col2 =="Red"&& col1 =="Yellow"))
        cout<<"The mixture of those two colors is Orange"<<endl;
    if ((col1 =="Yellow"&& col2 =="Blue")||(col2 =="Yellow"&& col1 =="Blue"))
        cout<<"The mixture of those two colors is Green"<<endl;
    
    
    //Exit stage right!
    return 0;
}

