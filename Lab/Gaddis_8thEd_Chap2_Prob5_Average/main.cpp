/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 21, 2016, 1:33 PM
 * Purpose:  Average
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables and Initialize
    int x1=28,x2=32,x3=37,x4=24,x5=33;//Values to average
    float avg;
    
    //Input Data
    
    //Process the Data
    avg=(x1+x2+x3+x4+x5)/5;
    
    //Output the processed Data
    cout<<"The average = "<<avg<<endl;
    
    //Exit Stage Right!
    return 0;
}