/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 13th, 2016, 9:53 PM
 * Purpose:  Rock, Scissor, Paper
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random and Seed
#include <ctime>     //Time
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    char player, compter;
    int  win=0, loss=0, tie=0;
    
    //Play until user wants to stop
    do{

    //Input Data
        cout<<"RPS Game, What is your move R or P or S"<<endl;
        cin>>player;
        
    //Process the Data
        do{
        compter=rand()%4+80;//[P,Q,R,S]
        }while(compter=='Q');
        cout<<"Player = "<<player<<" : Computer = "<<compter<<endl;
        switch(compter){
            case 'P':{
                if(player=='P')cout<<"Tie so far = "<<++tie<<endl;
                else if(player=='R')cout<<"Loss so far = "<<++loss<<endl;
                else cout<<"Win so far = "<<++win<<endl;
                break;
            }
            case 'R':{
                if(player=='P')cout<<"Win so far = "<<++win<<endl;
                else if(player=='R')cout<<"Tie so far = "<<++tie<<endl;
                else cout<<"Loss so far = "<<++loss<<endl;
                break;
            }
            case 'S':{
                if(player=='P')cout<<"Loss so far = "<<++loss<<endl;
                else if(player=='R')cout<<"Win so far = "<<++win<<endl;
                else cout<<"Tie so far = "<<++tie<<endl;
            }
                
        }

        
    //Output the processed Data
    }while(player=='P'||player=='R'||player=='S');
    cout<<"Total Wins = "<<win<<endl;
    cout<<"Total Loss = "<<loss<<endl;
    cout<<"Total Ties = "<<tie<<endl;
    
    //Exit Stage Right!
    return 0;
}