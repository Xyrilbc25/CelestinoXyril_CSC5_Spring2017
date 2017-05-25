/* 
 * File:   main.cpp
 * Author: Xyril Celestino
 * Created on May 16, 2017, 10:32 AM
 * Purpose:  Grading your DMV test
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <fstream>  
#include <vector>   //STL Vector --> Dynamic array
#include <string>   //String library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void rdFile(char [],vector<char> &);   //Read the answer key
void wrtFile (string, vector<int> &); //Write the result
void grade  (vector<char> &, vector<char> &, vector<int> &);//Compare and Grade
int  score  (vector<int> &);               //Numerical result

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    const int SIZE = 20;
    vector<char> key(SIZE);
    vector<char> stuResp(SIZE);
    vector<int> scr(SIZE);
    string scoreFn;
    
    //Initialize String Variables
    char keyFnC[] = "key.dat";
    char stuRFnC[] = "answer.dat";
    scoreFn = "result.dat";
    
    //Input data
    rdFile(keyFnC,key);
    rdFile(stuRFnC,stuResp);
    
    //Map inputs to outputs or process the data
    grade(key,stuResp,scr);
    
    //Output the transformed data
    cout<<"Your Test result score was = "<<score(scr)<<endl;
    wrtFile(scoreFn,scr);
    
    //Exit stage right!
    return 0;
}

void wrtFile (string fn, vector<int> &pts){
    //Declare File Variables
    ofstream out;
    int cnt = 0;
    //Open the File
    out.open(fn.c_str());
    //Read the Values
    for(int i=0;i<pts.size();i++){
        out<<pts[i]<<endl;
    }
    //close the File
    out.close ();  
}

int  score  (vector<int> &pts){
    int sum = 0;
    for (int i = 0; i<pts.size(); i++){
        sum+=pts[i];
    }
    return sum;
}

void grade  (vector<char> &key, vector<char> &stu,vector<int> &pts){
    for (int i = 0; i<pts.size(); i++){
        if (key[i] == stu[i]) pts[i] = 1;
    }
}
void rdFile (char fn[],vector<char> &a){
        //Declare Variables
    ifstream in;
    int cnt = 0;
    //Open the file
    in.open(fn);
    while(in>>a[cnt++]&&cnt<a.size());
    //Close the File
    in.close();
    
}

