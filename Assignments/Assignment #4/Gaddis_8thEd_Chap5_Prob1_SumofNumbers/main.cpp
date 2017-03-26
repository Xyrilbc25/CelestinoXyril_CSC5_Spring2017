/* 
 * File:   Gaddis_8thEd_Chap5_Prob1_SumofNumbers
 * Author: Xyril Celestino
 * Created on March 25, 2017, 4:03 PM
 * Purpose:  Program that will find the sum of all numbers from 1
 *           the number inputted.
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
    //Make sure 0<n<50
    int n;
    int sum = 0;
    
    //Input data
    cout<<"This program retrieves the sum of all integers from ";
    cout<<"1 to the number entered."<<endl;
    cout<<"Please input a number from 1 to 50"<<endl;
    cin>>n;
    
    //Map inputs to outputs or process the data
    if (!(n>=1&&n<=50)){
        cout<<"You failed to input a number between 1 and 50"<<endl;
        return 1;
    }
    for (int i = 1; i<=n; i++){
        sum+=i;
    }
    
    //Output the transformed data
    cout<<"The computed sum of 1 to "<<n<<" = "<<sum<<endl;
    
    //Exit stage right!
    return 0;
}

