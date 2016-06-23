/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 20, 2016, 9:00 PM
 * Purpose:  Free Fall Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float GRAVITY=32.174f;//Acceleration sea level ft/sec/sec

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float time;   //Time in seconds
    float dstance;//Distance in feet
    
    //Input Data
    cout<<"Input time for free-fall in seconds"<<endl;
    cin>>time;
    
    //Process the Data
    //dstance=1/2*GRAVITY*time*time;//gives 0 because of int/int division
    //dstance=GRAVITY*time*time/2;
    //dstance=1.0f/2*GRAVITY*time*time;
    dstance=1/2.0f*GRAVITY*time*time;
    
    //Output the processed Data
    cout<<"The distance dropped during "<<time<<"(secs) = ";
    cout<<dstance<<"(ft)"<<endl;
    
    //Exit Stage Right!
    return 0;
}