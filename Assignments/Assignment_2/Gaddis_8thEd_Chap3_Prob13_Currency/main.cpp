/* 
 * File:   Gaddis_8thEd_Chap3_Prob13_Currency
 * Author: Xyril Celestino
 * Created on March 08, 2017, 11:45 AM
 * Purpose:  Program that converts U.S. Dollars to Yen and Euros
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float YEN_PER_DOLLAR  = 114.44/1;
const float EUR_PER_DOLLAR  = 0.95/1;

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int   dlr;        //U.S. Dollars
    float yen,      //Japanese Yen
          euro;     //European Euros
    
    //Input data
    cout<<"This Program converts U.S. Dollars into";
    cout<<"Japanese Yen and European Euros"<<endl;
    cout<<"Please enter the amount of Dollars you ";
    cout<<"wish to convert"<<endl;
    cin>>dlr;
    
    //Map inputs to outputs or process the data
    yen  = dlr*114.44;
    euro = dlr*0.95;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The amount in Japanese Yen would be ¥"<<yen<<endl;
    cout<<"The amount in European Euro would be €"<<euro<<endl;
    
    //Exit stage right!
    return 0;
}

