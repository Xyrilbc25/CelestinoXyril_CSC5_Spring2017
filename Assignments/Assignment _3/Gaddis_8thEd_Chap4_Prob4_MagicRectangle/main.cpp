/* 
 * File:   Gaddis_8thEd_chap4_Prob4_AreaRectangle
 * Author: Xyril Celestino
 * Created on March 21, 2017, 11:25 AM
 * Purpose:  Program that calculates the areas of two rectangles 
 *           and decides which rectangle has the greater area.
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
    int l1,w1;                  //Length and Width of first rectangle
    int l2,w2;                  //Length and width of second rectangle
    char  a1;       //Area of rectangle 1
    char  a2;       //Area of rectangle 2
    
    //Input data
    cout<<"This program calculates the area of two rectangles and decides ";
    cout<<"Which rectangle has the greater area, or if they are even"<<endl;
    cout<<"please input the length and width of the first rectangle, ";
    cout<<"and then the length and width of the second rectangle."<<endl;
    cin>>l1>>w1>>l2>>w2;
    
    //Map inputs to outputs or process the data
    a1 = l1*w1;
    a2 = l2*w2;
    
    if (a1 >= a2)
        cout<<"The Area of Rectangle 1 is greater than Rectangle 2"<<endl;
    if (a1 <= a2)
        cout<<"The Area of Rectangle 2 is greater than Rectangle 1"<<endl;
    if (a1 == a2)
        cout<<"Both rectangles have equal areas"<<endl;
    
    //Exit stage right!
    return 0;
}

