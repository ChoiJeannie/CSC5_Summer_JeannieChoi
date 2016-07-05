/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 27, 2016, 12:31 PM
 * Purpose:  Miles per Gallon
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //For setprecision
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float gallons; //# of gallons of gas one's car can hold
    float miles;   //# of miles the car can be driven on a full tank
    float mpg;     //# of miles that the car may be driven per gallon of gas
    
    //Input Data
    cout<<"type the number of gallons of gas your car can hold ";
    cin>>gallons;
    cout<<"type the number of miles your car can be driven on a full tank ";
    cin>>miles;
    
    //Process the Data
    mpg=miles/gallons;
    cout<<setprecision(2)<<fixed<<showpoint<<endl;
    cout<<"The number of miles that your car may be driven per gallon of gas is ";
    cout<<mpg<<"."<<endl;
    
    //Output the processed Data
    
    
    //Exit Stage Right!
    return 0;
}