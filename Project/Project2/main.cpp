/*
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 7:46 PM
 * Purpose:  Project 2: Tic-Tac-Toe Game (modified)
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <ctime>     //Time for random seed
#include <cstdlib>   //Random number seed
#include <fstream>   //File I/O
#include <string>    //String Object

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void prntBrd(char[],const int);
void chkMove(char,bool &,char,char[],const int);
void chkOver(char[],int const,bool &,bool &);
void sortBrd(char[],int);

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
    const int SIZE=9;
    char square[SIZE]={'1','2','3','4','5','6','7','8','9'};
    /*char square1('1'),square2('2'),square3('3'),square4('4'),square5('5'),
    square6('6'),square7('7'),square8('8'),square9('9');*/
    char mark;
    bool over(true);
    bool win=true;
    int winNum;
    int loss;
    int tie;
    
    
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
            int player=1;
            
            // Main game loop
            do{
                prntBrd(square,SIZE);
                
                //Assigning Player The Game Marker
                
                if(player==1){
                    mark='X';
                }else{
                    mark='O';
                }
                bool move;
                
                //Player's Move
                char next;
                if(player==1){
                    
                    //Loop until valid move
                    
                    do{
                        cout<<"Your turn:"<<endl;
                        cin>>next;
                        move=true;
                        
                        //Check for a valid move
                        chkMove(next,move,mark,square,SIZE);
                        if(!move){
                            cout<<"Invalid Move. Try again."<<endl;
                        }
                    }while(!move);
                }
                else if(player==2){
                    cout<<"Computer's turn:"<<endl;
                    
                    //Computer's Move
                    do{
                        
                        int random=49+(rand()%(57-49+1));
                        next=random;
                        move=true;
                        
                        //Check for a valid move
                        chkMove(next,move,mark,square,SIZE);
                        
                    }while(!move);
                }
                
                
                
                over=false;
                
                //Checking Game Over Conditions
                chkOver(square,SIZE,win,over);
                
                if(over){
                    if(win){
                        if(player==1){
                            cout<<"You win!"<<endl;
                            winNum++;
                        }
                        else{
                            cout<<"The computer wins!"<<endl;
                            loss++;
                        }
                    }
                    else if(over==true&&win==false){
                            tie++;}
                    
                    //Print the board again when the game is over
                    //Display the number of wins, losses, and ties
                    prntBrd(square, SIZE);
                    
                    cout<<"G A M E O V E R"<<endl;
                    cout<<"Win: "<<winNum<<endl;
                    cout<<"Loss: "<<loss<<endl;
                    cout<<"Tie: "<<tie<<endl;
                    cout<<"Would you like to play again? Type (y/n)"<<endl;
                    char again;
                    cin>>again;
                    
                    //Replay
                    if(again=='y'){
                        over=false;
                        
                        //New Board
                        square[0]='9';
                        square[1]='8';
                        square[2]='7';
                        square[3]='6';
                        square[4]='5';
                        square[5]='4';
                        square[6]='3';
                        square[7]='2';
                        square[8]='1';
                        
                        //Will call a function that sorts the numbers on board
                        
                        /*square[0]='1';
                         square[1]='2';
                         square[2]='3';
                         square[3]='4';
                         square[4]='5';
                         square[5]='6';
                         square[6]='7';
                         square[7]='8';
                         square[8]='9';*/
                        
                    }
                    player=1;
                }else{
                    //Alternate turns
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
    
    
    //Output stats of the player
    out<<"Win: "<<winNum<<endl;
    out<<"Loss: "<<loss<<endl;
    out<<"Tie: "<<tie<<endl;
 
    
    //Output the processed Data
    out.close();
    
    //Exit Stage Right!
    return 0;
}

void prntBrd(char square[],const int SIZE){    
    //Setting Tic-Tac-Toe Game Board with 2-D array
    char line[3][4]={{'+','-'},
                     {'+','-'},
                     {'+','-'}};
    
    cout<<"|"<<square[0]<<"|"<<square[1]<<"|"<<square[2]<<"|"<<endl;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=3;j++)
           cout<<line[i][j];
    
    }
    cout<<"+"<<endl;
    /*for(int i=0;i<=4;i++)
     cout<<"+-";
     cout<<"+"<<endl;*/
    //cout<<"+-+-+-+"<<endl;
    cout<<"|"<<square[3]<<"|"<<square[4]<<"|"<<square[5]<<"|"<<endl;
    for(int i=0;i<=2;i++){
        for(int j=0;j<=3;j++)
            cout<<line[i][j];
    }
    cout<<"+"<<endl;
    /*for(int i=1;i<=3;i++)
     cout<<"+-";
     cout<<"+"<<endl;*/
    //cout<<"+-+-+-+"<<endl;
    cout<<"|"<<square[6]<<"|"<<square[7]<<"|"<<square[8]<<"|"<<endl;
}

void chkMove(char next,bool &move,char mark,char square[],const int SIZE ){
    //Searching
    bool found=false;
    for(int i=0;i<9;i++){
        if(next==square[i]){
            square[i]=mark;
            found=true;
        }
        if((i==8)&&(found==false))
            move=false;
    }
    
    /*if    (next=='1'&&square[0]=='1'){square[0]=mark;}
     else if(next=='2'&&square[1]=='2'){square[1]=mark;}
     else if(next=='3'&&square[2]=='3'){square[2]=mark;}
     else if(next=='4'&&square[3]=='4'){square[3]=mark;}
     else if(next=='5'&&square[4]=='5'){square[4]=mark;}
     else if(next=='6'&&square[5]=='6'){square[5]=mark;}
     else if(next=='7'&&square[6]=='7'){square[6]=mark;}
     else if(next=='8'&&square[7]=='8'){square[7]=mark;}
     else if(next=='9'&&square[8]=='9'){square[8]=mark;}
     else {move=false;}*/
}

void chkOver(char square[],const int SIZE,bool &win,bool &over){
    if(square[0]!='1'){
        if(square[1]==square[0]&&square[2]==square[0]){
            over=true;
        }
        if(square[3]==square[0]&&square[6]==square[0]){
            over=true;
        }
    }
    if(square[4]!='5'){
        if(square[0]==square[4]&&square[8]==square[4]){
            over=true;
        }
        if(square[1]==square[4]&&square[7]==square[4]){
            over=true;
        }
        if(square[3]==square[4]&&square[5]==square[4]){
            over=true;
        }
        if(square[2]==square[4]&&square[6]==square[4]){
            over = true;
        }
    }
    if(square[8]!='9'){
        if(square[2]==square[8]&&square[5]==square[8]){
            over=true;
        }
        if(square[6]==square[8]&&square[7]==square[8]){
            over=true;
        }
    }
    
    //No-win condition
    if(square[0]!='1'&&square[1]!='2'&&square[2]!='3'&&
       square[3]!='4'&&square[4]!='5'&&square[5]!='6'&&
       square[6]!='7'&&square[7]!='8'&&square[8]!='9'&&!over){
        over=true;
        win=false;
    }
}

void sortBrd(char num[],int SIZE){
    //Declare Variables

    
}
