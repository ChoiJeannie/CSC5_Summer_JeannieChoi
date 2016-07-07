/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 6th, 2016, 6:53 PM
 * Purpose:  Ocean Levels
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
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}