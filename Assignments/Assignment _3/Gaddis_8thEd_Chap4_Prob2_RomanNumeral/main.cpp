/* 
 * File:   Gaddis_8thEd_Chap4_Prob2_RomanNumeral
 * Author: Xyril Celestino
 * Created on March 19, 2017, 11:32 AM
 * Purpose:  Program that converts any number (1-10) into Roman
 *           Numerals
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
    char           numbr;  //Roman Numeral conversion
    
    //Input data
    cout<<"This program converts any number into a Roman Numeral"<<endl;
    cout<<"The data type is an integer from [1-10]"<<endl;
    cout<<"Type in a number from 1 to 10"<<endl;
    cin>>numbr;
    if (!(numbr>=0&&numbr<=10)){
        cout<<"You failed to input a score between 0 and 10"<<endl;
        return 1;       //Use DeMorgans law to make clearer
    }   
    
    //Map inputs to outputs or process the data
    switch     (numbr)
    {  
        case  '10': cout<<"X"<<endl;
                    break;
        case  '9': cout<<"IX"<<endl;
                    break;
        case  '8': cout<<"VIII"<<endl;
                    break;
        case  '7': cout<<"VII"<<endl;
                    break;
        case  '6': cout<<"VI"<<endl;
                    break;
        case  '5': cout<<"V"<<endl;
                    break;
        case  '4': cout<<"IV"<<endl;
                    break;
        case  '3': cout<<"III"<<endl;
                    break;
        case  '2': cout<<"II"<<endl;
                    break;
        case  '1': cout<<"I"<<endl;
                    break;
    }
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

