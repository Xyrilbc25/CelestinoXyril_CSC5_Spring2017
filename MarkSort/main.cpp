/* 
 * File:   main.cpp
 * Author: Xyril Celestino
 * Created on May 11, 2017, 10:21 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cstdlib>   //Random Number Function
#include <ctime>     //Time to set the seed
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void filAry (int [],int);
void prntAry (int[],int,int);
void swap1(int&, int&);
void swap2(int &, int&);
void smlstVl (int[],int,int);
void mrkSort(int [],int);

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
    smlstVl (array,SIZE,0);
    smlstVl (array,SIZE,1);
    
    //Map inputs to outputs or process the data
    mrkSort(array,SIZE);
    //Output the transformed data
    prntAry(array,SIZE,10);
    
    //Exit stage right!
    return 0;
}

void mrkSort (int a[],int n){
    for(int indx = 0; indx<n-1;indx++){
        smlstVl(a,n,indx);
    }
}
void smlstVl (int a[],int n, int pos){
    for (int indx = pos; indx<n; indx){
        if(a[pos]>a[indx])swap1(a[pos],a[indx]);
    }
}

//Temporary variable intermediate swap
void swap1 (int &a, int &b){
    int temp;
    temp = a;
    a = b;
    b = temp;
}

void prntAry (int a[],int n, int perLine){
    for(int indx = 0; indx<n; indx++){
        cout<<a[indx]<<" ";
        if (indx%perLine==(perLine-1))cout<<endl;
}
}
            
void filAry (int a[],int n){
    for(int indx = 0; indx<n; indx++){
        a[indx] = rand()%90+10;     //Fill with random 2 digitnumbers
    }
}
