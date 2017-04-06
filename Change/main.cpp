/* 
 * File:   Change
 * Author: Xyril Celestino
 * Created on April 6, 2017, 10:30 AM
 * Purpose:  Program that calculates change
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
    float price,tender;
    int iprice,itender,ichange;
    
    //Input data
    do{
        cout<<"This program gives you change"<<endl;
        cout<<"Input the price to pay and how much tendered"<<endl;
        cout<<"Tendered amount must be greater than price"<<endl;
        cout<<"Input the price"<<endl;
        cin>>price;
        cout<<"Input tendered amount"<<endl;
        cin>>tender;
    }while (tender<price);
    
    //Convert to pennies
    iprice  = (price+.005f)*100;    //converts float to proper integer
    itender = (tender+.005f)*100;  //converts float to proper integer
    
    //calculate the change
    ichange = itender - iprice;
    
    int hundred = ichange/10000;
    cout<<"Your change is "<<endl;
    cout<<hundred<<" Hundreds"<<endl;
    ichange -=hundred*10000;
    
    int twenty = ichange/2000;
    cout<<twenty<<" Twenties"<<endl;
    ichange -=twenty*2000;
    
    int tens = ichange/1000;
    cout<<tens<<" Tens"<<endl;
    ichange -=tens*1000;
    
    int fives = ichange/500;
    cout<<fives<<" Fives"<<endl;
    ichange -=fives*500;
    
    int ones = ichange/100;
    cout<<ones<<" Ones"<<endl;
    ichange -=ones*100;
    
    int half = ichange/50;
    cout<<half<<" Half Dollars"<<endl;
    ichange -=half*50;
    
    int quart = ichange/25;
    cout<<quart<<" Quarters"<<endl;
    ichange -=quart*25;
    
    int dime = ichange/10;
    cout<<dime<<" Dimes"<<endl;
    ichange -=dime*10;
    
    int nickl = ichange/5;
    cout<<nickl<<" Nickels"<<endl;
    ichange -=nickl*5;
    
    cout<<ichange<<" Penny(s)"<<endl;
    
    //Exit stage right!
    return 0;
}

