/* 
 * File:   Project1_Connect4
 * Author: Xyril Celestino
 * Created on April 16, 2017, 11:01 PM
 * Purpose:  Connect 4 game.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
//Execution begins here
void display();
bool check(int a, int b);
int  drop(int b,char player);
char place[6][7];

int main(int argc, char** argv) {
    for (int a=0;a<=5;a++){
        for (int b=0;b<=6;b++)
            place[a][b] = ' ';
    }
    display();
    int hold;
    int hold2    = 0;
    int PcPlace  = 0;
    bool gamewin = false;
    char player  = 15;
    while(!gamewin){
        if(hold2 != -1){
            if(player == 15){
                cout<<"Player 1 choose where to drop piece";
                player = 254;
            }
            else{
                cout<<"Player 2 choose where to drop piece";
                player = 15;
            }
        }
        while(true){
            if(PcPlace == 42) break;
            cin>>hold;
            hold--;
            if(hold <=6 && hold>= 0) break;
            else cout<<"please enter a value between 1 and 7 = ";
            if (cin.fail())
            {
                cin.clear();
                char c;
                cin>>c;
            }
        }
        if (PcPlace == 42) break;
        hold2 = drop (hold, player);
        if (hold2 == -1) cout<<"Coulumn is full,",
                "please input number between 1 and 7 = ";
        else{
            gamewin = check(hold2,hold);
            PcPlace ++;
            system("cls");
            display();
        }
    }
    system("cls");
    if (PcPlace == 42){
        cout<<"Draw! No one wins!"<<endl;
        system("pause");
        return 0;
    }
    if(player == 15)
        cout<<"The Winner is...Player 2!"<<endl;
    else cout<<"The Winner is...Player 1!"<<endl;
    system("pause");
    return 0;
}
void display(){
    cout<<"1    2   3   4   5   6   7"<<endl;
    for(int a = 0; a<= 5; a++)
    {
        for(int b=0; b <=6; b++)
            cout<<char(218)<<char(196)<<char(191)<<" ";
        cout<<endl;
        for(int b=0; b <=6; b++)
            cout<<char(179)<<place[a][b]<<char(179)<<" ";
        cout<<endl;
        for(int b=0; b <=6; b++)
            cout<<char(192)<<char(196)<<char(217)<<" ";
        cout<<endl;
    }
}
bool check(int a, int b){
    int vertical   = 1;
    int horizontal = 1;
    int diagonal1  = 1;
    int diagonal2  = 1;
    char player    = place[a][b];
    int i;
    int ii;
    for(i=a +1;place[i][b] == player && i <=5;i++,vertical++);
    for(i=a +1;place[i][b] == player && i >=0;i--,vertical++);
    if (vertical >= 4) return true;
    for(ii=b -1;place[a][ii] == player && ii >=0;ii--,horizontal++);
    for(ii=b +1;place[a][ii] == player && ii <=6;ii++,horizontal++);
    if (horizontal >= 4) return true;
    for(i = a -1, ii= b -1;place[i][ii] == player && i>=0 && ii >=0; diagonal1 ++, i --, ii --);
    for(i = a +1, ii = b+1;place[i][ii] == player && i<=5 && ii <=6;diagonal1 ++, i ++, ii ++);
    if(diagonal1 >= 4) return true;
    for(i = a -1, ii= b +1;place[i][ii] == player && i>=0 && ii <= 6; diagonal2 ++, i --, ii ++);
    for(i = a +1, ii= b -1;place[i][ii] == player && i<=5 && ii >=0; diagonal2 ++, i ++, ii --);
    if(diagonal2 >= 4) return true;
    return false;
}
int drop(int b, char player){
    if(b >= 0 && b <= 6)
    {
        if(place[0][b] == ' '){
            int i;
            for(i = 0; place[i][b] == ' '; i++)
                if(i == 5){place[i][b] = player;
            return i;}
            i--;
            place[i][b] = player;
            return i;
            
        }
        else{
            return -1;
        }
    }
    else{
        return -1;
    }
    
}

