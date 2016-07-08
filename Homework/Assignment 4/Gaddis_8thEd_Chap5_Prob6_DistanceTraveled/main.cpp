/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 7th, 2016, 5:34 PM
 * Purpose:  Distance Traveled
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
    
    //Exit Stage Right!
    return 0;
}