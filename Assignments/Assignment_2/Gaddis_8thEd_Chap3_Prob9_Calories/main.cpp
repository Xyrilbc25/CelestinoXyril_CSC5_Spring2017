/* 
 * File:   Gaddis_8thEd_Chap3_Prob9_calories
 * Author: Xyril Celestino
 * Created on March 08, 2017, 5:24 PM
 * Purpose:  Program to calculate how many calories user consumed
 *           
 * 
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
    int ckieCal;                 // Cookie Calories
    int nCkies;                  //Number of cookies consumed
    int ttlCal;                  //Total calories consumed
    
    //Input data
    cout<<"This program calculates the number of";
    cout<<" calories based on how many cookies you've eaten"<<endl;
    cout<<"Type the number of cookies you've eaten"<<endl;
    cin>>nCkies;
    
    //Map inputs to outputs or process the data
    ckieCal = 300;
    ttlCal = nCkies*ckieCal;
    
    //Output the transformed data
    cout<<"The total calories you've consumed is = ";
    cout<<ttlCal;
    
    //Exit stage right!
    return 0;
}

