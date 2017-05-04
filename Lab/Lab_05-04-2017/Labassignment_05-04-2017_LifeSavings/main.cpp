/* 
 * File:   Lab_05-04-2017_LifeSavings
 * Author: Xyril Celestino
 * Created on May, 04, 2017, 11:32 AM
 * Purpose:  Program that outputs life savings
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Format Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int inBal = 0;      //Initial Balance
    float inRate = 5;     //Interest Rate
    float Sal = 100000;        //Salary
    int perCent = 20;    //Per Cent Salary to save for retirement/year
    float Save = 2000000;       //Savings needed to retire
    int YrsWrk;     //Number of Years worked
    int retire;     //Retirement
    float inPaid;     //Interest Paid Per Year
    int year = 2022;       //Years
    //Input data
    cout<<"this program calculates your retirement savings"<<endl;
//    cout<<"Please input your Initial Balance = ";
//    cin>>inBal;
//    cout<<"Please input your Interest Rate = ";
//    cin>>inRate;
//    cout<<"Please input your Salary = ";
//    cin>>Sal;
//    cout<<"Please input your Per Cent Salary to save = ";
//    cin>>perCent;
    cout<<"Please input years worked = ";
    cin>>YrsWrk;
    
    //Map inputs to outputs or process the data
    inRate = inRate/100.0f;
    perCent = perCent/100.0f;
    Save = inBal;
    inPaid = Save*inRate;
    retire = Sal*perCent;
    //Output the transformed data
    cout<<"Years Working    |   Year    |   Savings Balance     |   ";
    cout<<"Interest Paid Per Year   |   Yearly Deposit"<<endl;
    
    int i = 0;
    cout<<fixed<<setprecision(2);
    cout<<setw(7)<<i<<setw(13)<<year++<<setw(16)<<Save<<setw(16)<<inPaid;
    cout<<setw(16)<<retire<<endl;
    
    for (i = 1;i<=YrsWrk;i++){
        Save = Save+inPaid+retire;
        inPaid = Save*inRate;
        cout<<setw(7)<<i<<setw(13)<<year++<<setw(16)<<Save<<setw(18);
        cout<<inPaid<<setw(22)<<retire<<endl;
    }
    
    //Exit stage right!
    return 0;
}

