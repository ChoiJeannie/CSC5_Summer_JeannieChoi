/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 7th, 2016, 5:49 PM
 * Purpose:  Celsius to Fahrenheit Table
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Output
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    cout<<"The Table of Celsius to Fahrenheit:"<<endl<<endl;
    cout<<" Celsius              Fahrenheit\n";
    cout<<"---------------------------------\n";
    for (int celsius=1;celsius<=20;celsius++){
        float frnheit=(celsius*9/5.0)+32;
        cout<<fixed<<setprecision(2)<<showpoint;
        cout<<setw(5)<<celsius<<setw(25)<<frnheit<<endl;
    }

    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}