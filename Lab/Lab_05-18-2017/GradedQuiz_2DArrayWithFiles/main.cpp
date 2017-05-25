/* 
 * File:   main.cpp
 * Author: Xyril Celestino
 * Created on May 18, 2017, 12:13 AM
 * Purpose:  Grading your DMV test
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <fstream>   //Reading/Writing to files

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int COLS = 3;

//Function Prototypes
void rdFile(char [], char[],char [][COLS], int);  //Read the Answer key and Student Response
void wrtFile (string, char [][COLS], int);      //Write the results
void grade  (char [][COLS], int);               //Compare and Grade
int  score  (char [][COLS], int);               //Numerical result

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const int SIZE = 20;
    char kyRspScr[SIZE][COLS] = {};
    string scoreFn;
    
    //Initialize String Variables
    char keyFnC[] = "key.dat";
    char stuRFnC[] = "answer.dat";
    scoreFn = "result.dat";
    
    //Input data
    rdFile(keyFnC,stuRFnC,kyRspScr,SIZE);
    
    //Map inputs to outputs or process the data
    grade(kyRspScr,SIZE);
    
    //Output the transformed data
    cout<<"Your Test result score was = "<<score(kyRspScr,SIZE)<<endl;
    wrtFile(scoreFn,kyRspScr,SIZE);
    
    //Exit stage right!
    return 0;
}

void rdFile(char fn1[],char fn2[], char krp[][COLS], int n){
    //Declare File Variables for the Key File
    ifstream in1;
    int cnt = 0;
    //Open the File
    in1.open(fn1);
    //Read the Values
    while (in1>>krp[cnt++][0]&&cnt<n);
    //close the File
    in1.close ();      
    //Declare File Variables for the response file
    ifstream in2;
    cnt = 0;
    //Open the File
    in2.open(fn2);
    //Read the Values
    while (in2>>krp[cnt++][1]&&cnt<n);
    //close the File
    in2.close ();  
}

void wrtFile (string fn, char krp[][COLS], int n){
    //Declare File Variables
    ofstream out;
    
    //Open the File
    out.open(fn.c_str());
    //Read the Values
    for(int i=0;i<n;i++){
        out<<static_cast<int>(krp[i][2])<<endl;
    }
    //close the File
    out.close ();  
}

int  score  (char krp[][COLS], int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum+=krp[i][2];
    }
    return sum;
}

void grade  (char krp[][COLS], int n){
    for (int i = 0; i<n; i++){
        if (krp[i][0] == krp[i][1]) krp[i][2] = 1;
    }
}

