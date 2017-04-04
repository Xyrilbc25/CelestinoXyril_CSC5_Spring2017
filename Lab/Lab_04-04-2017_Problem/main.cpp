/* 
 * File:   Lab_04-04-2017_Problem2
 * Author: Xyril Celestino
 * Created on April 04, 2017, 12:06 PM
 * Purpose:  Product of 1 to 1/n!
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <cmath>     //Math Libraries
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    
    //First Question
    int n, fact = 1;
    cout<<"First Question, Calculate N!"<<endl;
    cout<<"Input N"<<endl;
    cin>>n;
    for (int i=1;i<=n;i++){
        fact*=i;
    }
    cout<<n<<"! = "<<fact<<endl;
    
    //Second Question
    float x;
    cout<<endl<<"Second Question, calculate e^x"<<endl;
    cout<<"Input X"<<endl;
    cin>>x;
    float etox = 1;
    for(int n=1;n<=13;n++){
        int fact = 1;
        for(int i=1;i<=n;i++){
            fact*=i;
        }
        etox+=pow(x,n)/fact;
    }
    cout<<"e^"<<x<<" = "<<etox<<endl;
    
    //All in 1 working line of code
    cout<<endl<<"Third part, allin one line"<<endl;
    float ex = 1.0f, tol = 1e-7f;
    for (float i=1.0f, term = 1.0f; term>=tol; term*=(x/i), ex+=term,i++);
    cout<<"e^"<<x<<" = "<<ex<<endl;
   
    //Exit stage right!
    return 0;
}

