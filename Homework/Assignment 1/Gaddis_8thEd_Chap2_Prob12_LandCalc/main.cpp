/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 23, 2016,10:42  PM
 * Purpose:  Land Conversion Problem
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float CNVFTAC=4.356e4f;//Conversion from Ft^2 to Acres
const float CNVMFT=1/5.28e3f;//Conversion from Miles to Ft

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float nAcres;//Number of Acres
    float nSqMls;//Number of Square Miles
    
    //Input Data
    cout<<"Enter the number of Acres to convert to Square Miles"<<endl;
    cin>>nAcres;
    
    //Process the Data
    nSqMls=nAcres*CNVFTAC*CNVMFT*CNVMFT;
    
    //Output the processed Data
    cout<<nAcres<<" acres = "<<nSqMls<<" miles^2"<<endl;
    
    //Exit Stage Right!
    return 0;
}