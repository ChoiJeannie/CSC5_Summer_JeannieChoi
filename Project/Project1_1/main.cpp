/*
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 11th, 2016, 7:46 PM
 * Purpose: Project 1: Tic-Tac-Toe Game
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>     //Time for random seed
#include <cstdlib>   //Random number seed
#include <iomanip>   //Formatting
#include <cmath>     //Math Library
#include <fstream>   //File I/O
#include <string>    //String Object
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    
    //Open files and Input Data
    ofstream out;
    out.open("stats.dat");
    
    //Declare Variables
    char choice;
    string fName,lName;
    unsigned short winNum,loss,tie;
    
    //Input Data
    cout<<"Welcome to Tic-Tac-Toe Game!"<<endl;
    cout<<"What is your first Name?"<<endl;
    cin>>fName;
    cout<<"What is your last Name?"<<endl;
    cin>>lName;
    
    cout<<"Hello "<<fName<<" "<<lName<<", Choose An Option: \n"<<endl;
    cout<<"Type 1 to PLAY"<<endl;
    cout<<"Type 2 to QUIT"<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case '1':{
            //Declare Variables
            char square1('1'),square2('2'),square3('3'),square4('4'),square5('5'),
                 square6('6'),square7('7'),square8('8'),square9('9');
            int  player=1;
            bool over(true);
            
            //Game loop
            do{
                //Setting Tic-Tac-Toe Game Board
                cout<<"|"<<square1<<"|"<<square2<<"|"<<square3<<"|"<<endl;
                for(int i=1;i<=3;i++)//cout<<"+-+-+-+"<<endl;
                cout<<"+-";
                cout<<"+"<<endl;
                cout<<"|"<<square4<<"|"<<square5<<"|"<<square6<<"|"<<endl;
                for(int i=1;i<=3;i++)//cout<<"+-+-+-+"<<endl;
                cout<<"+-";
                cout<<"+"<<endl;
                cout<<"|"<<square7<<"|"<<square8<<"|"<<square9<<"|"<<endl;
                
                //Assigning Player The Game Marker
                char mark;
                if(player==1){
                    mark='X';
                }else{
                    mark='O';
                }
                
                //Player's Move 
                bool move;
                char next;
                if(player==1){
                    do{
                        cout<<"Your turn: "<<endl;
                        cin>>next;
                        move=true;
                        
                        //Check if the move is valid
                        if     (next=='1'&&square1=='1'){square1=mark;}
                        else if(next=='2'&&square2=='2'){square2=mark;}
                        else if(next=='3'&&square3=='3'){square3=mark;}
                        else if(next=='4'&&square4=='4'){square4=mark;}
                        else if(next=='5'&&square5=='5'){square5=mark;}
                        else if(next=='6'&&square6=='6'){square6=mark;}
                        else if(next=='7'&&square7=='7'){square7=mark;}
                        else if(next=='8'&&square8=='8'){square8=mark;}
                        else if(next=='9'&&square9=='9'){square9=mark;}
                        else{cout<<"Try again."<< endl;
                            move=false;}
                     }while(!move);
                }
                //Computer's Move
                else if(player==2){
                    cout<<"Computer's turn: "<<endl;
                    //Check if the move is valid
                        do {
                            int random=49+(rand()%(57-49+1));
                            next=random;
                            move=true;
                        if     (next=='1'&&square1=='1'){square1=mark;}
                        else if(next=='2'&&square2=='2'){square2=mark;}
                        else if(next=='3'&&square3=='3'){square3=mark;}
                        else if(next=='4'&&square4=='4'){square4=mark;}
                        else if(next=='5'&&square5=='5'){square5=mark;}
                        else if(next=='6'&&square6=='6'){square6=mark;}
                        else if(next=='7'&&square7=='7'){square7=mark;}
                        else if(next=='8'&&square8=='8'){square8=mark;}
                        else if(next=='9'&&square9=='9'){square9=mark;}
                        else{move=false;}
                        }while(!move);
                }
                  
                over    =false;
                bool win=true;
                
                //Checking Game Over Conditions
                if(square1!='1'){
                    if(square2==square1&&square3==square1){
                        over=true;
                    }
                    if(square4==square1&&square7==square1){
                        over=true;
                    }
                }
                if(square5!='5'){
                    if(square1==square5&&square9==square5){
                        over=true;
                    }
                    if(square2==square5&&square8==square5){
                        over=true;
                    }
                    if(square4==square5&&square6==square5){
                        over=true;
                    }
                    if(square3==square5&&square7==square5){
                        over=true;
                    }
                }
                if(square9!='9'){
                    if(square3==square9&&square6==square9){
                        over=true;
                    }
                    if(square7==square9&&square8==square9){
                        over=true;
                    }
                }
                //Neither the player nor the computer wins
                if(square1!='1'&&square2!='2'&&square3!='3'&&
                   square4!='4'&&square5!='5'&&square6!='6'&&
                   square7!='7'&&square8!='8'&&square9!='9'&&!over){
                    over=true;
                    win=false;
                }
                
                //Game Over
                char again;
                if(over){
                    if(win){
                        if(player==1)
                            cout<<fName<<"'s win!"<<endl;
                        else cout<<"The computer wins!"<<endl;
                    }
                    if(win==false)
                        tie++;
                    else if(player==1)
                        winNum++;
                    else if(player==2)
                        loss++;
                    
                    cout<<"|"<<square1<<"|"<<square2<<"|"<<square3<<"|"<<endl;
                    for(int i=1;i<=3;i++)//cout<<"+-+-+-+"<<endl;
                        cout<<"+-";
                    cout<<"+"<<endl;
                    cout<<"|"<<square4<<"|"<<square5<<"|"<<square6<<"|"<<endl;
                    for(int i=1;i<=3;i++)//cout<<"+-+-+-+"<<endl;
                        cout<<"+-";
                    cout<<"+"<<endl;
                    cout<<"|"<<square7<<"|"<<square8<<"|"<<square9<<"|"<<endl;
                    
                    cout<<"G A M E O V E R"<<endl;
                    cout<<"Win:"<<setw(3)<<winNum<<endl;
                    cout<<"Loss:"<<setw(2)<<loss<<endl;
                    cout<<"Tie:"<<setw(3)<<tie<<endl;
                    cout<<"Would you like to play again? Type (y/n)"<<endl;
                    cin>>again;
                    
                    if(again=='y'){
                        over=false;
                        //Setting new board
                        square1='1';
                        square2='2';
                        square3='3';
                        square4='4';
                        square5='5';
                        square6='6';
                        square7='7';
                        square8='8';
                        square9='9';
                    }
                    player=1;
                }else{
                    //Alternate player turns
                    if(player==1){
                        player=2;
                    }else{
                        player=1;
                    }
                }
            }while(!over);
            
            //Exit the switch
            break;
        }
        case '2':{
            return 0;
            //Exit the switch
            break;            
        }
        default:cout<<"Not option in menu."<<endl;
    }
    
    //Output the processed Data
    out.close();
    out<<"Win:"<<setw(3)<<winNum<<endl;
    out<<"Loss:"<<setw(2)<<loss<<endl;
    out<<"Tie:"<<setw(3)<<tie<<endl;
    
    //Exit Stage Right!
    return 0;
}