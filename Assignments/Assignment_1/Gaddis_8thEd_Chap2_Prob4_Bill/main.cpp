/* 
  File:  Gaddis_8thEd_Chap2_Prob4_Bill
  Author: Xyril Celestino
  Created on February 19, 2017, 9:38 PM
  Purpose:  Calculate meal cost, tax amount, tip amount, and total bill on
            screen
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
    int MlCst,TxAmt,TpAmt,TTlBl;
    
    //Input values
    MlCst; //Meal Cost
    TxAmt; //Tax Amount
    TpAmt; //Tip Amount
    TTlBl; //Total Bill
    
    
    //Process by mapping inputs to outputs
    MlCst = 88.67;
    TxAmt = MlCst * 0.0675;
    TpAmt = TxAmt+MlCst * 0.20;
    TTlBl = TpAmt + TxAmt + MlCst;
    
    //Output values
    cout<<"Cost of meal: $"<<MlCst<<endl;
    cout<<"Tax Amount: $"<<TxAmt<<endl;
    cout<<"Tip Amount: $"<<TpAmt<<endl;
    cout<<"Total Bill: $"<<TTlBl<<endl;

    //Exit stage right!
    return 0;
}