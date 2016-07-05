/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 29, 2016, 1:35 PM
 * Purpose:  Math Tutor
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random number function
#include <ctime>     //Time function
#include <iomanip>   //Format output

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned short randOne;//random number 1
    unsigned short randTwo;//random number 2
    unsigned short sum;    //Sum of two random numbers
    char ch;               //any key
    
    //Input Data
    srand(static_cast<unsigned int>(time(0)));
    
    //Process the Data
    randOne=rand()%1000+1;//random number [1,1000]
    randTwo=rand()%1000+1;//random number [1,1000]
    sum= randOne+randTwo; //sum [2,2000]
    
    //Output the processed Data
    cout<<"Solve the following:\n\n";
    cout<<setw(4)<<randOne<<endl;
    cout<<setw(1)<<"+"<<randTwo<<endl;
    cout<<"------\n\n";
    cout<<"Press ENTER to check the answer\n";
    ch = cin.get();       
    cout<<sum<<endl;        
    
    
    //Exit Stage Right!
    return 0;
}