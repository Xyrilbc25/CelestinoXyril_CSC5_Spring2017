/* 
 * File:   Gaddis8thEd_Chap6_Prob4_DrivingArea
 * Author: Xyril Celestino
 * Created on May 3, 10:35 AM
 * Purpose:  Determines which geographic region has fewer
 *           Accidents
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
int getacc (int);      //Gets number of accidents
void findlow();    //Determines which city has the lowest accidents

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int n;   //Number of accidents in North City
    int s;   //Number of accidents in South City
    int e;   //Number of accidents in East City
    int w;   //Number of accidents in West City
    int c;   //Number of accidents in Central City
    
    //Input data
    cout<<"This program calculates the # of accidents in 5 regions"<<endl;
    getacc(n);
    getacc(s);
    getacc(e);
    getacc(w);
    getacc(c);
    
    //Output the transformed data
    void findlow();
    //Exit stage right!
    return 0;
}
int getacc(int n){
    cout<<"Input the number of accidents in North City :";
    cin>>n;
    if (!(n>=0)){
    cout<<"The number of accidents cannot be less than 0"<<endl;
    return 1; 
    }
}
int getacc(int s){
    cout<<"Input the number of accidents in South City :";
    cin>>s;
    if (!(s>=0)){
    cout<<"The number of accidents cannot be less than 0"<<endl;
    return 1; 
    }
}
int getacc(int e){
    cout<<"Input the number of accidents in East City :";
    cin>>e;
    if (!(e>=0)){
    cout<<"The number of accidents cannot be less than 0"<<endl;
    return 1; 
    }
}
int getacc(int w){
    cout<<"Input the number of accidents in West City :";
    cin>>w;
    if (!(w>=0)){
    cout<<"The number of accidents cannot be less than 0"<<endl;
    return 1; 
    }
}
int getacc(int c){
    cout<<"Input the number of accidents in CentralCity :";
    cin>>c;
    if (!(c>=0)){
    cout<<"The number of accidents cannot be less than 0"<<endl;
    return 1; 
    }
}
void findlow(int n, int s, int e, int w, int c){
    if(n<s&&n<e&&n<w&&n<c){
        cout<<"North city has the least amount of accidents"<<endl;
    }
    if(s<n&&s<e&&s<w&&s<c){
        cout<<"South city has the least amount of accidents"<<endl;
    }
    if(e<s&&e<n&&e<w&&e<c){
        cout<<"East city has the least amount of accidents"<<endl;
    }
    if(w<s&&w<e&&w<n&&w<c){
        cout<<"West city has the least amount of accidents"<<endl;
    }
    if(c<s&&c<e&&c<w&&c<n){
        cout<<"Central city has the least amount of accidents"<<endl;
    }
}


