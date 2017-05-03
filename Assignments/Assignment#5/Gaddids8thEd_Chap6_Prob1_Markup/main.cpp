/* 
 * File:   Gaddis8thEd_Chap6_Prob1_Markup
 * Author: Xyril Celestino
 * Created on March 3, 2017 8:48 AM
 * Purpose:  Displays an item's retail price.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>   //Iomanip library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
float calcrtl(int,int);

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int wholecst;   //Wholesale cost
    int markup;     //Mark up percentage
    int rtlpric;    //Retail Price
    
    //Input data
    cout<<"This Program calculates the retail price of an item"<<endl;
    cout<<"Please input the wholesale cost of an item"<<endl;
    cin>>wholecst;
    if (!(wholecst>=0)){
    cout<<"The wholesale cost cannot be a negative number"<<endl;
    return 1;       //Use DeMorgans law to make clearer
    }
    cout<<"Please input the markup percentage"<<endl;
    cin>>markup;
    if (!(markup>=0)){
    cout<<"The markup percentage cannot be a negative number"<<endl;
    return 1;       //Use DeMorgans law to make clearer
    }
    //Output the transformed data
    cout<<"The retail price will be"<<endl;
    cout<<"$"<<fixed<<setprecision(2)<<calcrtl(wholecst,markup)<<endl;
    cout<<"I'm proud of you son"<<endl;
    //Exit stage right!
    return 0;
}
float calcrtl(int wholecst, int markup){
    float markupp;  //Markup percentage
    markupp = static_cast<float>(markup)/100;
    float rtlpric = wholecst + (wholecst*markupp);
    return rtlpric;
}

