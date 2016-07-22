/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 20th, 2016, 12:54 PM
 * Purpose:  Falling Distance
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
float fallD(int t=0);

//Execution Begins Here!
int main(int argc, char** argv) {
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
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

float fallD(int t){
    float d=0;
    const float g=9.8;
    d=0.5*g*t*t;
    
    return d;
}