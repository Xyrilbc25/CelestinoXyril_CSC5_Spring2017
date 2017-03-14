/* 
 * File:   Gaddis_7thEd_Chap4_Prob7_TimeCalculator
 * Author: Xyril Celestino
 * Created on March 14, 2017, 11:26 AM
 * Purpose:  Time Calculator/Converter
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int MINUTE=60;      //How many seconds in a minute
const int HOUR=60*MINUTE; //How many seconds in an hour
const int DAY = 24*HOUR;  //How many seconds in a day
const int WEEK= 7*DAY;    //How many seconds in a week
const int YEAR= 52*WEEK;  //How many seconds in a year

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
    int nSecs;  //Number of seconds to convert
    int nYrs,nMnths, nWks, nDys, nHrs, nMin;
    
    //Input data
    cout<<"This program converts seconds to Years/Months/Days/Hours."<<endl;
    cout<<"Input the number of seconds for the conversion/equivalent."<<endl;
    cin>>nSecs;
    
    //Map inputs to outputs or process the data
    nYrs=nSecs/YEAR;              //Number of Years
    cout<<nYrs<<" Years (";
    nSecs-=nYrs*YEAR;             //Subtract the Yearly seconds from remaining
    
    nWks=nSecs/WEEK;              //Number of Weeks
    cout<<nWks<<" Weeks or ";
    nWks=nSecs/WEEK;              //Convert Number of Weeks
    nMnths=nWks*3/13;
    cout<<nMnths<<" Months) ";
    nSecs-=nWks*WEEK;             //Subtract weekly seconds from remaining
    nDys=nSecs/DAY;               //Number of Days
    cout<<nDys<<" Days ";
    nSecs-=nDys*DAY;              //Subtract the daily seconds from remaining
    nHrs=nSecs/HOUR;              //Number of Hours
    cout<<nHrs<<" Hours ";
    nSecs-=nHrs*HOUR;             //Subtract the hourly seconds from remaining
    nMin=nSecs/MINUTE;            //Number of Minutes
    cout<<nMin<<" Minutes ";
    nSecs-=nMin*MINUTE;           //Remaining Number of Seconds
    cout<<nSecs<<" Seconds ";
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

