/* 
 * File:   GameOfCraps_V1
 * Author: Xyril Celestino
 * Created on March 28, 2017, 11:40 AM
 * Purpose:  Simulate a Craps Game
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    int nGames, wins = 0, losses = 0;
    nGames = 10000;
    
    //Play the Game
    for(int game = 1;game<=nGames;game++){
        //Throw Dice and Sum
        char die1 = rand() %6+1;    //[1,6]
        char die2 = rand() %6+1;    //[1,6]
        char sum1 = die1+die2;
        
        //Determine Wins and Losses
        if (sum1==7||sum1==11)wins++;
        else if (sum1==2||sum1==3||sum1==12)losses++;
        else{
            //Loop until a 7 or previous sum is thrown
            bool thrwAgn = true;
            do{
                //Throw the Dice Again
                char die1 = rand() %6+1;    //[1,6]
                char die2 = rand() %6+1;    //[1,6]
                char sum2 = die1+die2;
                if(sum2==7){
                    losses++;
                    thrwAgn = false;
                } else if (sum1==sum2){
                    wins++;
                    thrwAgn=false;
                }
            }while(thrwAgn);
        }
    }

    //Output the transformed data
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Number of games won = "<<wins<<endl;
    cout<<"number of games lost = "<<losses<<endl;
    cout<<"Total wins and losses = "<<wins + losses<<endl;
    //Exit stage right!
    return 0;
}

