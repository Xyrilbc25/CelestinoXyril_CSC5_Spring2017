/* 
 * File:   SumErrorFloat
 * Author: Xyril Celestino
 * Created on March 23, 2017, 11:46 AM
 * Purpose:  SumErrorFloat
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
    int nLoop = 10000000;
    float sum = 0.0f, frac = 0.1f;
    
    
    //Map inputs to outputs or process the data
    for (int i = 1;i<=nLoop;i++){
        sum+=frac;
    }
    //Output the transformed data
    cout<<"The computed sum of "
            <<frac<<"->"<<nLoop<<" times = "<<sum<<endl;
    cout<<"Simple multiplication of "
            <<frac<<"x"<<nLoop<<" = "<<frac*nLoop<<endl;
    cout<<"Error = "<<(frac*nLoop-sum)/(frac*nLoop)*100
            <<"%"<<endl;
    
    
    //Exit stage right!
    return 0;
}

