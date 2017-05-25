/* 
 * File:   GameOfCraps_V4
 * Author: Xyril Celestino
 * Created on May 25, 2017, 11:24 AM
 * Purpose:  Project 2 - Simulate a Craps Game using arrays and pointers
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //Time for rand
#include <cstdlib>   //Srand to set the seed
#include <fstream>   //File I/O
#include <iomanip>   //Format the output
#include <string>    //Strings
#include <iomanip>   //Math Functions
using namespace std; //Name-space under which system libraries exist

//Global Constants
const float PERCENT = 100.0f;   //Conversion to percent

//Function Prototypes
char rollDie(int);                                          //Roll the Dice
void fileDesp(ofstream &out,int [], int[],int,int,int,int); //File Display
void scrnDesp(int [], int[],int,int,int,int);               //Screen Display
void crpGame(int [], int[],int,int &,int &,int &);          //Craps Game

//Execution begins here
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    ifstream in;
    ofstream out;
    int nGames;
    int mxThrw = 0;
    int numThrw = 0;
    int lmGames = 100000000;
    const int SIZE = 13;
    int wins[SIZE];
    int losses [SIZE];
    
    //Initialize Variables
    string inName = "GameInfo.dat";
    char outName[] = "GameStats.dat";
    in.open (inName.c_str());
    out.open(outName);
    while(in>>nGames); //Last Value becomes number of games
    nGames=nGames>lmGames?lmGames:nGames;
    
    //Play the Game
    int beg=time (0);
    void crpGame(wins,losses,SIZE,nGames,numThrw,mxThrw);
    int end = time(0);
    
    //Output the transformed data to the screen
    cout<<"Total time to play these games in integer = "<<endl;
    void scrnDesp (wins,losses,SIZE,nGames,numThrw,mxThrw);
    
    //Output the Transformed Data into a file
    void fileDesp(ofstream &out, int wins[],int losses[],int SIZE,int nGames,int numThrw,int mxThrw);
     
    //Exit stage right!
    in.close();
    out.close();
    return 0;
}
void crpGame(int wins[], int losses[],int SIZE,int &nGames,int &numThrw,int &mxThrw){
    for(int game = 1;game<=nGames;game++){
        //Throw Dice and Sum
        int gmThrw = 1;
        char die1 = rand() %6+1;    //[1,6]
        char die2 = rand() %6+1;    //[1,6]
        char sum1 = die1+die2;
        
        //Determine Wins and Losses
        switch (sum1){
            case 7:
            case 11:wins[sum1]++;break;
            case 2:
            case 3:
            case 12: losses[sum1]++;break;
            default:{
                //Loop until a 7 or previous sum is thrown
                bool thrwAgn = true;
                do{
                    //Throw the Dice Again
                    char sum2 = rollDie(6);
                    gmThrw++;
                    if(sum2==7){
                        losses[sum1]++;
                        thrwAgn = false;
                    } else if (sum1==sum2){
                        wins[sum1]++;
                        thrwAgn=false;
                    }
                }while(thrwAgn);    //do-while
            }
        }
        numThrw+=gmThrw;
        if(mxThrw<gmThrw)mxThrw=gmThrw;
    }
}
void fileDesp(ofstream &out,int wins[], int losses[],int SIZE,int nGames,int numThrw,int mxThrw){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Roll Wins Losses"<<endl;
    int sWins=0,sLosses=0;
    for(int sum = 2; sum<SIZE; sum++){
        sWins +- wins[sum];
        sLosses +- losses[sum];
        cout<<setw(4)<<sum<<setw(10)<<wins[sum]<<setw(10)<<losses[sum]<<endl;
    }
    cout<<"Number of games won   = "<<sWins<<endl;
    cout<<"number of games lost  = "<<sLosses<<endl;
    cout<<"Total wins and losses = "<<sWins + sLosses<<endl;
    cout<<"Percentage wins       = "
            <<static_cast<float>(sWins)/nGames*PERCENT<<endl;
     cout<<"Percentage losses       = "
            <<static_cast<float>(sLosses)/nGames*PERCENT<<endl;
     cout<<"Maximum number of throws in a game = "<<mxThrw<<endl;
     cout<<"Average throw per game = "<<static_cast<float>(numThrw)/nGames<<endl;
    
}

void scrnDesp(int wins[], int losses[],int SIZE,int nGames,int numThrw,int mxThrw){
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total number of Games = "<<nGames<<endl;
    cout<<"Roll Wins Losses"<<endl;
    int sWins=0,sLosses=0;
    for(int sum = 2; sum<SIZE; sum++){
        sWins +- wins[sum];
        sLosses +- losses[sum];
        cout<<setw(4)<<sum<<setw(10)<<wins[sum]<<setw(10)<<losses[sum]<<endl;
    }
    cout<<"Number of games won   = "<<sWins<<endl;
    cout<<"number of games lost  = "<<sLosses<<endl;
    cout<<"Total wins and losses = "<<sWins + sLosses<<endl;
    cout<<"Percentage wins       = "
            <<static_cast<float>(sWins)/nGames*PERCENT<<endl;
     cout<<"Percentage losses       = "
            <<static_cast<float>(sLosses)/nGames*PERCENT<<endl;
     cout<<"Maximum number of throws in a game = "<<mxThrw<<endl;
     cout<<"Average throw per game = "<<static_cast<float>(numThrw)/nGames<<endl;
    
}
char rollDie(int side){
        char die1 = rand() %side+1;    //[1,number of sides]
        char die2 = rand() %side+1;    //[1,number of sides]
        char sum1 = die1+die2;
        return sum1;
}
