/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 20, 2016, 1:07 PM
 * Purpose:  Menu for Assignment 5
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Math Library
#include <sstream>   //String Stream Library
#include <string>    //String Objects
#include <ctime>     //Time Function
#include <cstdlib>   //Random Number and Seed

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void gameRPS(char,char,int &,int &,int &);
void evalu8(char,char,int &,int &,int &);
void input(int &,int &);
void cnvrt(int,int &,char &);
void output(int,int,char);
void input(int &);
void cnvrt(int,int &,int &,int &,int &,int &);
void output(int,int,int,int,int);
int  subtrct(int,int,int&);
int nAccdnt(string);
void fLowest(int,int,int,int,int);
float fallD(int t=0);
int coinToss(void);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    cout<<"Menu Program for Assignment 4:"<<endl;
    cout<<"Choose one homework to view"<<endl<<endl;
    cout<<"Type 1 to view RPS"<<endl;
    cout<<"Type 2 to view Time Conversion"<<endl;
    cout<<"Type 3 to view Correct Change"<<endl;
    cout<<"Type 4 to view Safest Driving Area"<<endl;
    cout<<"Type 5 to view Falling Distance"<<endl;
    cout<<"Type 6 to view Coin Toss"<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case '1':{
            //set random number seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare Variables Here, NO DOUBLES
            char player,comp;
            int win=0,loss=0,tie=0;

            //Play the game
            //Input player and computer
            //Output the resulting wins,ties,and losses
            gameRPS(player,comp,win,tie,loss);

            //Output the Results
            cout<<"Total Wins = "<<win<<endl;
            cout<<"Total Ties = "<<tie<<endl;
            cout<<"Total Loss = "<<loss<<endl;
            
            //Exit the switch
            break;
        }
        case '2':{
            //Declare Variables
            int milHr,hr,min;
            char ampm;

            //Input Data
            input(milHr,min);

            //Process the Data
            cnvrt(milHr,hr,ampm);

            //Output the processed Data
            output(hr,min,ampm);
    
            //Exit the switch
            break;            
        }
        case '3':{
            //Declare Variables
            int change,nHalf,nQtr,nDimes,nNkls,nPen;

            //Input Data
            input(change);

            //Process the Data
            cnvrt(change,nHalf,nQtr,nDimes,nNkls,nPen);

            //Output the processed Data
            output(nHalf,nQtr,nDimes,nNkls,nPen);
    
           
            //Exit the switch
            break;            
        }
        case '4':{
            //Declare Variables
            int accN,accS,accE,accW,accC;
            //Input Data

            //Process the Data
            for (int i=0;i<5;i++){
                switch (i){
                    case 0:accN=nAccdnt("North");break;
                    case 1:accS=nAccdnt("South");break;
                    case 2:accE=nAccdnt("East");break;
                    case 3:accW=nAccdnt("West");break;
                    default:accC=nAccdnt("Central");break;
                }
            }

            fLowest(accN,accS,accE,accW,accC);
          
            //Exit the switch
            break;            
        }
        case '5':{
            //Declare Variables
            int t=0;
            float d=0;

            //Input Data
            cout<<"This program calculates the distance object is falling in 10 seconds\n"<<endl;

            //Process the Data
            for(int i=1;i<=10;i++){
                d=fallD(i);
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<setw(2)<<i<<" seconds: "<<setw(6)<<d<<" meters"<<endl;
            }
            //Exit the switch
            break;
        }
        case '6':{
            //Declare Variables
            int times=0;
            int randNum=0;
            string HT= "";

            //Input Data
            cout<<"How many times to toss the coin?";
            cin>>times;

            srand((time(0))); //Seeding the random number generator 
            //Process the Data
            for (int i=1;i<=times;i++)
            {
                randNum=coinToss();
                if (randNum==1)
                    HT="head";
                else 
                    HT="tail";

                cout<<HT<<endl;
            }

            //Output the processed Data


            //Exit the switch
            break;
        }
       
        default:cout<<"Not option in menu"<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}


void gameRPS(char player,char comp,int &win,int &tie,int &loss){
    //Play until user wants to stop.
    do{
    //Input Data
        cout<<"RPS Game, what is your move R,P, or S?"<<endl;
        cin>>player;
        
    //Process Data
        do{
            comp=rand()%4+80;//P,Q,R,S
        }while(comp=='Q');
        
        cout<<"Player = "<<player<<" : Computer = "<<comp<<endl;
        
        //Evaluate the winner or loser
        evalu8(player,comp,win,tie,loss);
    
    //Output Data
    }while(player=='P'||player=='R'||player=='S');
}

void evalu8(char player,char comp,int &win,int &tie,int &loss){
    //Determine winner, loser, or a tie
    switch(player){
        case'P':{
            if(comp=='P')cout<<"Ties so far = "<<++tie<<endl;
            else if(comp=='R')cout<<"Wins so far = "<<++win<<endl;
            else cout<<"Loss so far = "<<++loss<<endl;
            break;
        }
        case'R':{
            if(comp=='P')cout<<"Loss so far = "<<++loss<<endl;
            else if(comp=='R')cout<<"Ties so far = "<<++tie<<endl;
            else cout<<"Wins so far = "<<++win<<endl;
            break;
        }
        case'S':{
            if(comp=='P')cout<<"Wins so far = "<<++win<<endl;
            else if(comp=='R')cout<<"Loss so far = "<<++loss<<endl;
            else cout<<"Ties so far = "<<++tie<<endl;
            break;
        }
        default:  cout<<"You are Quitting with "<<player<<endl;
    }
}

void input(int &mhr,int &mmin){
    //Prompt for user input
    do{
        //Declare variables to hold the strings
        string hr,min;
        stringstream sshr,ssmin;
        //Examine the input
        cout<<"This program converts military to standard time"<<endl;
        cout<<"Type in the military time in hhmm hh>=0&&hh<=23 mm>=0&&mm<=59"<<endl;
        cin>>setw(2)>>hr>>setw(2)>>min;
        //Convert the strings to integers
        sshr<<hr;
        ssmin<<min;
        sshr>>mhr;
        ssmin>>mmin;
    }while(mhr>=24||mhr<0||mmin>59||mmin<0);
    if(mhr<10)cout<<'0'<<mhr;
    else cout<<mhr;
    if(mmin<10)cout<<'0'<<mmin;
    else cout<<mmin;
    cout<<" = ";
}

void cnvrt(int mhr,int &hr,char &ap){
    //Convert the hour
    hr=mhr;
    ap='A';
    if(hr>12){
        hr-=12;
        ap='P';
    }else if(hr==12)ap='P';
    else if(hr==0)hr=12;
}

void output(int hr,int min,char ap){
    //Output the result
    cout<<hr;
    cout<<":";
    if(min<10)cout<<'0'<<min;
    else cout<<min;
    cout<<" "<<ap<<"M"<<endl;
}

int  subtrct(int change,int val,int &number){
    number=(change-change%val)/val;
    change-=number*val;
    return change;
}

void input(int &change){
    //Prompt for user input
    do{
        cout<<"This program converts Pennies into Change"<<endl;
        cout<<"Type in the number of Pennies 1 and 99"<<endl;
        cin>>change;
    }while(change<=0||change>99);
    cout<<change<<" pennies = ";
}

void cnvrt(int change,int &nHalf,int &nQtr,int &nDimes,int &nNkls,int &nPen){
    //Convert to coins
    change=subtrct(change,50,nHalf);
    change=subtrct(change,25,nQtr);
    change=subtrct(change,10,nDimes);
    change=subtrct(change, 5,nNkls);
           subtrct(change, 1,nPen);//change should = 0 at this point 
}

void output(int nHalf,int nQtr,int nDimes,int nNkls,int nPen){
    //Output the result
    cout<<nHalf<<"->$0.50 ";
    cout<<nQtr<<"->$0.25 ";
    cout<<nDimes<<"->$0.10 ";
    cout<<nNkls<<"->$0.05 ";
    cout<<nPen<<"->$0.01"<<endl;
}

int nAccdnt(string region){
    int accdnt=0;
    
    cout<<"Enter number of accidents for region "<<region<<" ";
    cin>>accdnt;
 
    while(accdnt<0){
        cout<<"Enter number of accidents for region ";
        cin>>accdnt;
    }
    
    return accdnt;
    
}

void fLowest(int r1, int r2, int r3, int r4, int r5){
    int lowest=0;
    string region="";
    
    if(r1<r2&&r1<r3&&r1<r4&&r1<r5){
        lowest=r1;
        region="North";
    }
    else if(r2<r1&&r2<r3&&r2<r4&&r2<r5){
        lowest=r2;
        region="South";
    }
    else if(r3<r1&&r3<r2&&r3<r4&&r3<r5){
        lowest=r3;
        region="East";
    }
    else if(r4<r1&&r4<r2&&r4<r3&&r4<r5){
        lowest=r4;
        region="West";
    }
    else {
        lowest=r5;
        region="Central";
    }
    
    cout<<"The region with lowest accidents is "<<region<<". Total number of accidents";
    cout<<" in that region was "<<lowest<<"."<<endl;
} 

float fallD(int t){
    float d=0;
    const float g=9.8;
    d=0.5*g*t*t;
    
    return d;
}

int coinToss(void){
    int randNum;
    randNum=1+rand()%2;
    return randNum;
}