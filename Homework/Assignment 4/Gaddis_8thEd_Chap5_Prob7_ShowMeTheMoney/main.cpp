/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 5th, 2016, 1:03 PM
 * Purpose:  How to double your money
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Output
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
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
    
    //Exit Stage Right!
    return 0;
}