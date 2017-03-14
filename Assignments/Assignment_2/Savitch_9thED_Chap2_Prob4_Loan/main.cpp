/* 
 * File:   Savitch_9thED_Chap2_Prob4_Loan
 * Author: Xyril Celestino
 * Created on March 03, 2017, 11:51 AM
 * Purpose: Calculate Loan Parameters
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT = 100.0f; //Percent Conversion
const float CNVYRMIN = 12.0f; //Year to Month Conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float faceVal,  //Loan Face Value in $'s
          consRec,  //What the consumer receives in $'s
          mthPay;   //Monthly Payment in $'s
    int   intRate,  //Yearly Percentage Interest Rate
          nMonths;  //Number of Months in the Loan
    
    //Input data
    cout<<"This program calculates Loan Parameters"<<endl;
    cout<<"Input the loan amount to be received $";
    cin>>consRec;
    cout<<"Number of months in the loan ";
    cin>>nMonths;
    cout<<"Interest Rate % = ";
    cin>>intRate;
    
    //Map inputs to outputs or process the data
    faceVal = consRec/(1-intRate/PERCENT/CNVYRMIN*nMonths);
    mthPay  = faceVal/nMonths;
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = "<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Face Value of the Loan = $"<<faceVal<<endl;
    cout<<"Monthly Payment = $"<<mthPay<<endl;
    
    //Exit stage right!
    return 0;
}

