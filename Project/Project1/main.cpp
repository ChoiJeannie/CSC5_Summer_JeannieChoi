/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 11th, 2016, 7:46 PM
 * Purpose:  Project 1: Tic-Tac-Toe
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
    //Open files and Input Data
    ofstream out;
    out.open("stats.dat");
    
    //Declare Variables
    char choice;
    char fName, lName;
    
    //Input Data
    cout<<"Welcome to Tic-Tac-Toe!"<<endl;
    cout<<"What is your first Name?"<<endl;
    cin>>fName;
    cout<<"What is your last Name?"<<endl;
    cin>>lName;
    
    
    cout<<"Hi "<<fName<<", Choose An Option: \n"<<endl;
    cout<<"Type 1 to be player 1"<<endl;
    cout<<"Type 2 to be player 2"<<endl;
    cout<<"Type 3 to quit"<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case '1':{
            //Exit the switch
            break;
        }
        case '2':{
            //Declare Variables
           
            //Exit the switch
            break;            
        }
        case '3':{
            return 0;
            //Exit the switch
            break;            
        }
        default:cout<<"Not option in menu"<<endl;
    }

    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    out.close();
        
    //Exit Stage Right!
    return 0;
}