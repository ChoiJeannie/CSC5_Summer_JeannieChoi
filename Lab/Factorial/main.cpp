/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 6th, 2016, 12:45 PM
 * Purpose:  Factorial
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    unsigned int fact=1,n;
    
    //Input Data
    cout<<"This program calculates the factorial"<<endl;
    cout<<"Input the n which will then output n!"<<endl;
    cin>>n;
    
    //Process the Data
    for(int i=1;i<=n;i++){
        fact*=i;
    }
    
    //Output the processed Data
    cout<<n<<"!="<<fact<<endl;
    
    //Exit Stage Right!
    return 0;
}