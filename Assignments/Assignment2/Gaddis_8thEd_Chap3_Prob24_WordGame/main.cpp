/* 
 * File:   Gaddis_8thEd_Chap3_Prob24_WordGame
 * Author: Xyril Celestino
 * Created on March 08, 2017, 12:12 PM
 * Purpose:  Program that plays a word game with
 *           the user
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and Initialize variables
     unsigned short     name,    //User's name
                        age,     //User's age
                        city,    //Name of City
                        college, //Name of College
                        prof,    //Profession
                        anml,    //Type of Animal
                        pname;   //Pet's name
    
    
    //Input data
    cout<<"We're going to play a word game."<<endl;
    cout<<"Please input your name = ";
    cin>>name;
    cout<<"Please input your age = ";
    cin>>age;
    cout<<"Please input the name of a city = ";
    cin>>city;
    cout<<"Please input the name of a college = ";
    cin>>college;
    cout<<"Please input a profession = ";
    cin>>prof;
    cout<<"Please input a type of animal = ";
    cin>>anml;
    cout<<"Please input the pet name = ";
    cin>>pname;
           
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<"There once was a person named "<<name<<" who ",
    cout<<"lived in "<<city<<". At the age of "<<endl;
    cout<<age<<", "<<name<<" went to college at "<<college<<". ",
    cout<<name<<" graduated and went to work"<<endl;
    cout<<"as a "<<prof<<". Then, "<<name<<" adopted a(n) ",
    cout<<anml<<" named "<<pname<<". They "<<endl;
    cout<<" both lived happily ever after!"<<endl;
    
    //Exit stage right!
    return 0;
}

