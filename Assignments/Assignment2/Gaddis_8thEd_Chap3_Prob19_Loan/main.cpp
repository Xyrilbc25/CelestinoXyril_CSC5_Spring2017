/* 
 * File:   Gaddis_8thEd_Chap3_Prob18_Loan
 * Author: Xyril Celestino
 * Created on March 03, 2017, 11:51 AM
 * Purpose: Calculate Loan Parameters
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float PERCENT = 100.0f; //Percent Conversion
const float CNVYRMIN = 12.0f; //Year to Month Conversion

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    float consRec,  //What the consumer receives in $'s
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
    //As short as possible
    float n(nMonths);
    float i(consRec);
    mthPay=1*pow(1=i,n)*1/(pow(1+i,n)-1);
    
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Loan amount received = "<<consRec<<endl;
    cout<<"Number of monthly payments = "<<nMonths<<endl;
    cout<<"Interest rate = "<<intRate<<"%"<<endl;
    cout<<"Monthly Payment = $"<<mthPay<<endl;
    
    //Exit stage right!
    return 0;
}

