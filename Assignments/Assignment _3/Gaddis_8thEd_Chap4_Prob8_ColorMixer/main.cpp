/* 
 * File:   Gaddis_8thEd_Chap4_Prob8_ColorMixer
 * Author: Xyril Celestino
 * Created on March 19, 2017, 12:26 PM
 * Purpose:  Program that outputs the mixture of two primary colors
 *           between red, blue, and yellow.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int SECONDARYCOLOR = prmcol1+prmcol2;     //Secondary = two primary colors

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int prmcol1, prmcol2;         //Two Primary Colors
    char ;                //Secondary Color
   
    //Input data
    cout<<"This program tells the secondary color of two primary ";
    cout<<"colors that are mixed (red,blue,yellow)"<<endl;
    cout<<"please input two colors (red,yellow,green)"<<endl;
    cin>>color1>>color2;
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"For two primary colors, "<<color1<<" "<<color2<<"the secondary ";
    cout<<"color would be = "<<secCol<<endl;
    
    //Exit stage right!
    return 0;
}

