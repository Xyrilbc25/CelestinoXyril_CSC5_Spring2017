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
    int           numbr;  //integer to be converted
    char                   RomNum; //Roman Numeral conversion
    //Input data
    cout<<"This program converts any number into a Roman Numeral"<<endl;
    cout<<"The data type is an integer from [1-10]"<<endl;
    cout<<"Type in a number from 1 to 10"<<endl;
    cin>>numbr;
    if (!(numbr>=0&&numbr<=10)){
        cout<<"You failed to input a number between 0 and 10"<<endl;
        return 1;       //Use DeMorgans law to make clearer
    }   
    
    //Map inputs to outputs or process the data
    switch     (numbr)
    {  
        case  '10': RomNum = 'X';break;
        case   '9': RomNum = 'IX';break;
        case   '8': RomNum = 'VIII';break;
        case   '7': RomNum = 'VII';break;
        case   '6': RomNum = 'VI';break;
        case   '5': RomNum = 'V';break;
        case   '4': RomNum = 'IV';break;
        case   '3': RomNum = 'III';break;
        case   '2': RomNum = 'II';break;
        case   '1': RomNum = 'I';break;
    }
    
    //Output the transformed data
    cout<<"For a number, "<<numbr<<" the roman numeral is "<<RomNum<<"."<<endl;
    
    //Exit stage right!
    return 0;
}

