/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 11th, 2016, 7:46 PM
 * Purpose:  Project 1: Tic-Tac-Toe Game
 */

/*
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 11th, 2016, 7:46 PM
 * Purpose:  Tic-Tac-Toe Game
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
    short win=0,loss=0,tie=0;

    //Input Data
    cout<<"Welcome to Tic-Tac-Toe Game!"<<endl;
    cout<<"What is your first Name?"<<endl;
    cin>>fName;
    cout<<"What is your last Name?"<<endl;
    cin>>lName;
    
    cout<<"Hi "<<fName<<", Choose An Option: \n"<<endl;
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
            
            //Game Loop
            do{
                //Setting Tic-Tac-Toe Game Board
                cout<<square1<<"|"<<square2<<"|"<<square3<<endl;
                cout<<"-+-+-"<<endl;
                cout<<square4<<"|"<<square5<<"|"<<square6<<endl;
                cout<<"-+-+-"<<endl;
                cout<<square7<<"|"<<square8<<"|"<<square9<<endl;
                
                //Assigning Player The Game Marker
                char mark;
                if(player==1){
                    mark='X';
                }else{
                    mark='O';
                }
                bool move;
                
                //Player's Move
                int next;
                if(player==1){
                    for(next=1;next<=9;next++){
                        cout<<"Your turn: "<<endl;
                        cin>>next;
                        move=true;
                        //Check for a valid move
                        if     (next==1&&square1=='1'){square1=mark;}
                        else if(next==2&&square2=='2'){square2=mark;}
                        else if(next==3&&square3=='3'){square3=mark;}
                        else if(next==4&&square4=='4'){square4=mark;}
                        else if(next==5&&square5=='5'){square5=mark;}
                        else if(next==6&&square6=='6'){square6=mark;}
                        else if(next==7&&square7=='7'){square7=mark;}
                        else if(next==8&&square8=='8'){square8=mark;}
                        else if(next==9&&square9=='9'){square9=mark;}
                        else{cout<<"Try different move."<< endl;
                            move=false;}
                     }while(!move);
                }
                //Computer's Move
                else if(player==2){
                    cout<<"Computer's turn:"<<endl;
        
                    //Check for a valid move
                        do{  
                            int random=49+(rand()%(57-49+1));
                            next=random;
                            move=true;
                        if     (next==1&&square1=='1'){square1=mark;}
                        else if(next==2&&square2=='2'){square2=mark;}
                        else if(next==3&&square3=='3'){square3=mark;}
                        else if(next==4&&square4=='4'){square4=mark;}
                        else if(next==5&&square5=='5'){square5=mark;}
                        else if(next==6&&square6=='6'){square6=mark;}
                        else if(next==7&&square7=='7'){square7=mark;}
                        else if(next==8&&square8=='8'){square8=mark;}
                        else if(next==9&&square9=='9'){square9=mark;}
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
                //Checking If The Game Board Is Full
                //Neither The Player Nor The Computer
                if(square1!='1'&&square2!='2'&&square3!='3'&&
                   square4!='4'&&square5!='5'&&square6!='6'&&
                   square7!='7'&&square8!='8'&&square9!='9'&&!over){
                    over=true;
                    win =false;
                }
                
                if(over){
                    if(win){
                        if(player==1)
                            cout<<fName<<" win!"<<endl;
                        else
                            cout<<"The computer wins!"<< endl;
                    }
        
                    if(win==false)
                        ++tie;
                    else if(player==1)
                        ++win;
                    else if(player==2)
                        ++loss;
                    
                    // Print ending board
                    char again;
                    cout<<square1<<"|"<<square2<<"|"<<square3<<endl;
                    cout<<"-+-+-"<<endl;
                    cout<<square4<<"|"<<square5<<"|"<<square6<<endl;
                    cout<<"-+-+-"<<endl;
                    cout<<square7<<"|"<<square8<<"|"<<square9<<endl;
                    
                    cout<<"G A M E O V E R"<<endl;
                    cout<<"Win: "<<win<<endl;
                    cout<<"Loss: "<<loss<<endl;
                    cout<<"Tie: "<<tie<<endl;
                    cout<<"Would you like to play again? Type (y/n)"<<endl;
                    cin>>again;
                    cout<<endl;
                    
                    if(again=='y'){
                        over=false;
                        //New Board
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
        default:cout<<"Not option in menu"<<endl;
    }
    
    //Output the processed Data
    out<<"Total Wins: "<<win<<endl;
    out<<"Total Losses: "<<loss<<endl;
    out<<"Total Ties: "<<tie<<endl;
    out.close();
    
    //Exit Stage Right!
    return 0;
}