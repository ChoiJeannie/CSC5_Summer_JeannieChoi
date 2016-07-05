/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 27, 2016, 12:45 PM
 * Purpose:  Test Average
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
    float a,b,c,d,e; //Scores of test 1,2,3,4, and 5, respectively
    
    //Input Data
    cout<<"Type your test 1 score"<<endl;
    cin>>a;
    cout<<"Type your test 2 score"<<endl;
    cin>>b;
    cout<<"Type your test 3 score"<<endl;
    cin>>c;    
    cout<<"Type your test 4 score"<<endl;
    cin>>d;            
    cout<<"Type your test 5 score"<<endl;
    cin>>e;
            
    //Process the Data
    float avg=(a+b+c+d+e)/5;//Average of 5 test scores
            
    //Output the processed Data
    cout<<setprecision(1)<<fixed<<showpoint<<endl;
    cout<<"Test 1 Score = "<<setw(5)<<a<<endl;
    cout<<"Test 2 Score = "<<setw(5)<<b<<endl;
    cout<<"Test 3 Score = "<<setw(5)<<c<<endl;
    cout<<"Test 4 Score = "<<setw(5)<<d<<endl;
    cout<<"Test 5 Score = "<<setw(5)<<e<<endl;
    cout<<"\n"<<endl;
    cout<<"Your average test score is "<<avg<<endl;
    
    
    //Exit Stage Right!
    return 0;
}