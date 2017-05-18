/* 
 * File:   main.cpp
 * Author: Xyril Celestino
 * Created on May 16, 2017, 10:32 AM
 * Purpose:  Grading your DMV test
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <fstream>
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void rdFile(string,char [], int);  //Read the Answer key and Student Response
void rdFile(char,char [], int);
void wrtFile (string, int [], int); //Write the results
void wrtFile (char, int [], int);
void grade  (char [], char [],int [], int);//Compare and Grade
int  score  (int [], int);               //Numerical result

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const int SIZE = 20;
    char key[SIZE],stuResp[SIZE];
    int scr[SIZE] = {};
    string keyFn, stuRFn, scoreFn;
    
    //Initialize String Variables
    keyFn = "key.dat";
    char keyFnC[] = "key.dat";
    stuRFn = "answer.dat";
    scoreFn = "result.dat";
    
    //Input data
    rdFile(keyFnC,key,SIZE);
    rdFile(stuRFn,stuResp,SIZE);
    
    //Map inputs to outputs or process the data
    grade(key,stuResp,scr,SIZE);
    
    //Output the transformed data
    cout<<"Your Test result score was = "<<score(scr,SIZE)<<endl;
    wrtFile(scoreFn,scr,SIZE);
    
    //Exit stage right!
    return 0;
}
void rdFile(string fn,char a[], int n){
    //Declare File Variables
    ifstream in;
    int cnt = 0;
    //Open the File
    in.open(fn.c_str());
    //Read the Values
    while (in>>a[cnt++]&&cnt<n);
    //close the File
    in.close ();      
}

void wrtFile (string fn, int pts[], int n){
    //Declare File Variables
    ofstream out;
    int cnt = 0;
    //Open the File
    out.open(fn.c_str());
    //Read the Values
    for(int i=0;i<n;i++){
        out<<pts[i]<<endl;
    }
    //close the File
    out.close ();  
}

int  score  (int pts[], int n){
    int sum = 0;
    for (int i = 0; i<n; i++){
        sum+=pts[i];
    }
    return sum;
}

void grade  (char key[], char stu[],int pts[], int n){
    for (int i = 0; i<n; i++){
        if (key[i] == stu[i]) pts[i] = 1;
    }
}

