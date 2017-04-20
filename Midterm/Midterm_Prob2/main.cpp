/* 
 * File:   Midterm_Prob2
 * Author: Xyril Celestino
 * Created on April 20, 2017, 10:30 AM
 * Purpose:  Create stars based on number inputted
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    char a,b,c,d;
    
    cin>>a>>b>>c>>d;
    
    //Check if d 1-9
    if(!(d>=48&&d<=57))
    {
        cout<<"?";
    }
    else
    {
    cout<<d;
    for (d;d>=49;d--)
    {
        cout<<" * ";
    }
    }
    
    //Check if c is 1-9
    if(!(c>=48&&c<=57))
    {
        cout<<endl<<"?";
    }
    else
    {
    cout<<endl<<c;
    for (c;c>=49;c--)
    {
        cout<<" * ";
    }
    }
    //Check if b is 1-9
    if(!(b>=48&&b<=57))
    {
        cout<<endl<<"?";
    }
    else
    {
    cout<<endl<<b;
    for (b;b>=49;b--)
    {
        cout<<" * ";
    }
    }
    //Check if a is 1-9
    if(!(a>=48&&a<=57))
    {
        cout<<endl<<"?";
    }
    else
    {
    cout<<endl<<a;
    for (a;a>=49;a--)
    {
        cout<<" * ";
    }
    }
    //Exit stage right!
    return 0;
}

