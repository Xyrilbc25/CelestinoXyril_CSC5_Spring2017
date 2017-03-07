/* 
 * File:   Savitch_9thEd_Chap1_ProgProj4_FreeFall
 * Author: Xyril Celestino
 * Created on February 16, 2017, 12:41 PM
 * Purpose:  Calculate distance of free fall per second
 */

//System Libraries Here
#include <iostream> //Input - output library
using namespace std; //Name-space under which system libraries exist

//User Libraries Here

//Global Constants
const float GRAVITY=32.174f;//Gravity on Earth Sea-Level ft/sec^2

//Function Prototypes

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    float time, distnce;
    
    //initialize variables
    time=1.0f;
    
    //Map inputs to outputs or process the data
            distnce=GRAVITY*time*time/2;//Result in ft
    
    //Output Located Here
    cout<<" Free fall of "<<time<<" secs = "<<distnce<<" ft "<<endl;

    //Exit stage right!
    return 0;
}

