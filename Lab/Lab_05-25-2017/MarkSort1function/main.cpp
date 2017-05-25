/* 
 * File:   main.cpp
 * Author: Xyril Celestino
 * Created on May 25, 2017, 11:21 AM
 * Purpose:  Mark Sort 1 Function pointer notation
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Number Function
#include <ctime>     //Time to set the seed
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void filAry  (int *,int);
void prntAry (int *,int,int);
void mrkSort (int *,int);

//Execution begins here
int main(int argc, char** argv) {
    //set the random number seed
    srand(static_cast<unsigned int>(time(0)));

    //Declare and initialize variables
    const int SIZE = 100;
    int array[SIZE] = {};
    
    //Input Data
    filAry (array,SIZE);
    prntAry (array,SIZE,10);
    
    //Map inputs to outputs or process the data
    mrkSort(array,SIZE);
    
    //Output the transformed data
    prntAry(array,SIZE,10);
    
    //Exit stage right!
    return 0;
}

void mrkSort(int *a,int n){
    for(int pos = 0;pos<n-1;pos++){
        for(int indx = pos+1;indx<n;indx++){
            if(*(a+pos)>*(a+indx)){
                int temp = *(a+pos);
                *(a+pos) = *(a+indx);
                *(a+indx) = temp;
            }
        }
    }
}
void prntAry (int *a,int n, int perLine){
    cout<<endl;
    for(int indx = 0; indx<n; indx++){
        cout<<*(a+indx)<<" ";
        if (indx%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}
            
void filAry (int *a,int n){
    for(int indx = 0; indx<n; indx++){
        *(a+indx) = rand()%90+10;     //Fill with random 2 digit numbers
    }
}
