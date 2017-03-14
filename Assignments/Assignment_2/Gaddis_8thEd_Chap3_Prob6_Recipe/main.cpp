/* 
 * File:   Gaddis_8thEd_Chap3_Prob6_Recipe
 * Author: Xyril Celestino
 * Created on March 09, 2017, 12:00 PM
 * Purpose:  Program to calculate amount of ingredients needed to bake
 *           a desired amount of cookies.
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
    //Declare and Initialize variables
    short int rCkie;     //recipe required to bake cookies
    float nCkie,       //Number of Cookies desired
          sugr = 1.5,  //Cups of sugar needed to bake 48 cookies
          butr = 1,    //Cups of butter required to bake 48 cookies
          flr  = 2.75, //Cups of flour required to bake 48 cookies
          ttls,        //Total sugar needed
          ttlb,        //Total butter needed
          ttlf;        //Total flour needed
            
    //Input data
    cout<<"Input the amount of cookies you wish to bake."<<endl;
    cin>>nCkie;
    
    //Map inputs to outputs or process the data
    rCkie = nCkie/48;    //Calculates recipe for number of cookies desired
    ttls = 1.5*rCkie;    //Calculates total amount of sugar needed
    ttlb = 1*rCkie;      //Calculates total amount of butter needed
    ttlf = 2.75*rCkie;   //Calculates total amount of flour needed
    
    //Output the transformed data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"The amount of sugar, butter, and flour you need to bake "<<nCkie;
    cout<<" is "<<endl;
    cout<<ttls<<" cups of sugar"<<endl;
    cout<<ttlb<<" cups of butter"<<endl;
    cout<<ttlf<<" cups of flour"<<endl;
   
    //Exit stage right!
    return 0;
}

