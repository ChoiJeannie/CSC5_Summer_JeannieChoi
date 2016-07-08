/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 7, 2016, 6:00 PM
 * Purpose:  Menu for Assignment 4
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Math Library
#include <string>    //String Objects
#include <ctime>     //Time Function
#include <cstdlib>   //Random Number and Seed

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    cout<<"Menu Program for Assignment 4"<<endl;
    cout<<"Choose one homework to view"<<endl<<endl;
    cout<<"Type 1 to view Celsius to Fahrenheit Table"<<endl;
    cout<<"Type 2 to view Characters of ASCII Codes"<<endl;
    cout<<"Type 3 to view Ocean Levels"<<endl;
    cout<<"Type 4 to view Distance Traveled"<<endl;
    cout<<"Type 5 to view Show Me The Money"<<endl;
    cout<<"Type 6 to view e^x"<<endl;
    cout<<"Type 7 to view PI With Infinite Series"<<endl;
    cout<<"Type 8 to view Monty Hall"<<endl;
    cout<<"Type 9 to view 99 Bottles of Beer"<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case '1':{
            //Process and Output the Data
            cout<<"The Table of Celsius to Fahrenheit:"<<endl<<endl;
            cout<<" Celsius              Fahrenheit\n";
            cout<<"---------------------------------\n";
            for (int celsius=1;celsius<=20;celsius++){
                float frnheit=(celsius*9/5.0)+32;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<setw(5)<<celsius<<setw(25)<<frnheit<<endl;
            }

            //Exit the switch
            break;
        }
        case '2':{
            //Loop and Output the Data
            cout<<"The Characters for the ASCII Codes 0 through 127: "<<endl;
            for (int code=0;code<=127;code++){
                cout<<(char)code<<" ";
                if(code%16==0)
                cout<<endl;
            }
            //Exit the switch
            break;            
        }
        case '3':{
            //Declare Variables
            float oLevel=0;
            unsigned short years=25;

            //Input Data

            //Process the Data
            cout<<"Years       Ocean Levels (mm)"<<endl;
            cout<<"-----------------------------"<<endl;
            for(int x=1;x<=years;x++){
                oLevel+=1.5;
                cout<<setw(3)<<x<<setw(20)<<oLevel<<endl;
            }
            //Exit the switch
            break;            
        }
        case '4':{
            //Declare Variables
            float speed, hours;

            //Input Data
            cout<<"What is the speed of the vehicle in mph?"<<endl;
            cin>>speed;
            cout<<"How many hours has it traveled?"<<endl;
            cin>>hours;

            //Process the Data and Output
            cout<<" Hour     Miles Traveled"<<endl;
            cout<<"-------------------------"<<endl;
            for(int hr=1;hr<=hours;hr++){
                float distance=hr*speed;
                cout<<setw(4)<<hr<<setw(14)<<distance<<endl;
            }
            //Exit the switch
            break;            
        }
        case '5':{
            //Declare Variables
            int pennies=1;//Initial pay per day
            int payDay=0; //Pay at the end of the month

            //Process the Data and output simultaneously
            for(int day=1;day<=30;day++){
                payDay+=pennies;
                cout<<fixed<<setprecision(2)<<showpoint;
                cout<<"Day "<<setw(2)<<day<<" Pay rate = $"<<setw(10)<<pennies/100.0f;
                cout<<" Pay earned $"<<setw(11)<<payDay/100.0f<<endl;
                pennies*=2;
            }
            //Exit the switch
            break;
        }
        case '6':{
            //Declare Variables
            float apprxEx=1,term=1,tol=1e-6f,x;

            //Input Data
            cout<<"This program calculates the e^x"<<endl;
            cout<<"Input the x which will then output e^x"<<endl;
            cin>>x;

            //Process the Data
            for(int n=1;term>tol;n++){
                term*=x/n;
                apprxEx+=term;
            }

            //Output the processed Data
            cout<<"Exact       e^"<<x<<"="<<exp(x)<<endl;
            cout<<"Approximate e^"<<x<<"="<<apprxEx<<endl;

            //Exit the switch
            break;
        }
        case '7':{
            //Declare Variables
            float apprxPI=0,tol;

            //Input Data
            cout<<"Tolerance of the approximate PI to a power of 10^-"<<endl;
            cin>>tol;
            tol=pow(10,-tol);
            cout<<"The tolerance = "<<tol<<endl;

            //Process the Data
            float sumTerm=1;
            int nTerm=0;
            for(int denom=1;sumTerm>tol;nTerm+=2,denom+=4){
                sumTerm=1.0f/denom-1.0f/(denom+2);
                apprxPI+=sumTerm;
            }
            apprxPI*=4;

            //Output the processed Data
            cout<<PI<<" is approximated by "<<apprxPI<<" with "<<nTerm<<" terms"<<endl;
            
            //Exit the switch
            break;
        }
        case '8':{
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));

            //Declare Variables
            int nPlays,nWins=0,nLose=0;

            //Input Data
            cout<<"How many Price is Right games to play?"<<endl;
            cin>>nPlays;

            //Process the Data
            for(int game=1;game<=nPlays;game++){
                int przDoor=rand()%3+1;//[1,2,3]
                int ourDoor=rand()%3+1;//[1,2,3]
                int opnDoor;
                do{
                    opnDoor=rand()%3+1;//[1,2,3]
                }while(opnDoor==przDoor||opnDoor==ourDoor);
                if(przDoor==ourDoor)nWins++;
                else nLose++;
            }

            //Output the processed Data
            cout<<"By Staying  I win "<<100.0f*nWins/nPlays<<"%"<<endl;
            cout<<"By Changing I win "<<100.0f*nLose/nPlays<<"%"<<endl;
    
            //Exit the switch
            break;
        }
        case '9':{
            //Declare Variables

            //Input Data

            //Process the Data and output
            for(int bottles=99;bottles>=1;bottles--){
                //Calculate tens and ones
                int nTens=(bottles-bottles%10)/10;//Number of 10's
                int nOnes=bottles-nTens*10;//Number of 1's
                for(int times=1;times<=3;times++){
                    if(times==3){
                        int temp=bottles-1;
                        nTens=(temp-temp%10)/10;//Number of 10's
                        nOnes=temp-nTens*10;//Number of 1's
                    }
                    switch(nTens){
                        case 9:cout<<"Ninety ";break;
                        case 8:cout<<"Eighty ";break;
                        case 7:cout<<"Seventy ";break;
                        case 6:cout<<"Sixty ";break;
                        case 5:cout<<"Fifty ";break;
                        case 4:cout<<"Forty ";break;
                        case 3:cout<<"Thirty ";break;
                        case 2:cout<<"Twenty ";break;
                        case 1:{
                            switch(nOnes){
                                case 0:cout<<"Ten ";break;
                                case 1:cout<<"Eleven ";break;
                                case 2:cout<<"Twelve ";break;
                                case 3:cout<<"Thirteen ";break;
                                case 4:cout<<"Fourteen ";break;
                                case 5:cout<<"Fifteen ";break;
                                case 6:cout<<"Sixteen ";break;
                                case 7:cout<<"Seventeen ";break;
                                case 8:cout<<"Eighteen ";break;
                                case 9:cout<<"Nineteen ";break;
                            }
                        }
                    }
                    if(nTens!=1){
                        switch(nOnes){
                            case 0:if(nTens==0)cout<<"Zero ";break;
                            case 1:cout<<"One ";break;
                            case 2:cout<<"Two ";break;
                            case 3:cout<<"Three ";break;
                            case 4:cout<<"Four ";break;
                            case 5:cout<<"Five ";break;
                            case 6:cout<<"Six ";break;
                            case 7:cout<<"Seven ";break;
                            case 8:cout<<"Eight ";break;
                            case 9:cout<<"Nine ";break;
                        }
                    }
                    if(times==1||times==3)cout<<" bottles of beer on the wall "<<endl;
                    else if(times==2){
                        cout<<" bottles of beer."<<endl;
                        cout<<" You take one down and pass it around "<<endl;
                    }
                }   
                cout<<endl;
            }
            //Exit the switch
            break;
        }
        default:cout<<"Not option in menu"<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}