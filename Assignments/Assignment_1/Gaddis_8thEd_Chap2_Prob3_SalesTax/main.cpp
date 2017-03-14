/* 
  File:  Gaddis_8thEd_Chap2_Prob3_SalesTax
  Author: Xyril Celestino
  Created on February 19, 2017, 10:13 PM
  Purpose:  Calculate total tax on a purchase.
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
    int Prch,StTx,CntyTx,GndTtl;
    
    //Input values
    Prch; //Purchase amount
    StTx;//State Tax
    CntyTx; //County Tax
    GndTtl; //Grand Total
    
    //Process by mapping inputs to outputs
    Prch = 95;
    StTx = Prch * 0.04;
    CntyTx = Prch * 0.02;
    GndTtl = Prch + StTx + CntyTx;
    //Output values
    cout<<"Purchase Amount: $"<<Prch<<endl;
    cout<<"State Tax: $"<<StTx<<endl;
    cout<<"County Tax: $"<<CntyTx<<endl;
    cout<<"Grand Total: $"<<GndTtl<<endl;

    //Exit stage right!
    return 0;
}