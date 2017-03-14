/* 
  File:  Gaddis_8thEd_Chap2_Prob6_AnnPay
  Author: Xyril Celestino
  Created on February 19, 2017, 8:26 PM
  Purpose:  Program that calculates an employee's annual pay
 */

//System Libraries
#include <iostream>
using namespace std;

//User Libraries

//Global Constants
//Such as PI, Vc, -> Math/Science values
//as well as conversions from system of units to 
//another

//Function Prototypes

//Executable code begins here!!!
int main(int argc, char** argv) {
    //Declare Variables
    int payAmt,payPer,AnnlPay;
    
    //Input values
    payAmt=2200;
    payPer=26;       
    
    //Process by mapping inputs to outputs
    AnnlPay=payAmt*payPer;        
    //Output values
    cout<<"An Employee's Annual Pay would equal " <<AnnlPay<<" if they had "
    <<payPer<< " pay periods in a year and were paid "<<payAmt<<
            " each pay period"<<endl;     
            
    //Exit stage right!
    return 0;
}