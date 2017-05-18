/* 
 * File:   main.cpp
 * Author: Xyril Celestino
 * Created on May 16, 2017, 12:05 PM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void fillAry    (int[],int,int);
void prntAry    (int[], int, int);
void allSrch    (int [], int);
int linSrch     (int [], int, int);
//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const int SIZE = 12;
    int array[SIZE] = {0,1,2,3,0,1,2,3,0,1,2,3};
    int value = 1;
    int position;
    
    //Initialize Variables
    linSrch (array, SIZE, value);
    
    //Exit stage right!
    return 0;
}

int linSrch(int array[], int SIZE, int value){
    for(int index = 0; index<SIZE;index++){
        if(array[index]==value){
            cout<<value<<" was found in position: "<<index + 1<<endl;
        }
    }
    //return position
}

void prntAry (int a[],int,int);