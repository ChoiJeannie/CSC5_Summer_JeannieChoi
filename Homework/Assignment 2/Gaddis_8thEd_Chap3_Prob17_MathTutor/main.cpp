/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 5, 2016, 3:23 PM
 * Purpose:  Math Tutor
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cstdlib>   //Random number library
#include <ctime>     //Time library to set the random number seed
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Set the random number seed
    srand(static_cast<unsigned int>(time(0)));
    //Declare Variables
    unsigned short random1,random2,result;
    unsigned short answer;
    
    //Input Data
    random1=rand()%900+100;//Random 3 digit number
    random2=rand()%900+100;//Random 3 digit number
    result=random1+random2;
    
    //Display the problem
    cout<<"Calculate the result of the following problem!"<<endl;
    cout<<"Line up and type the result"<<endl;
    cout<<"   "<<random1<<endl;
    cout<<" + "<<random2<<endl;
    cout<<"-------"<<endl;
    cin>>answer;
    
    //Output and Process the Data
    if(result-answer==0){
        cout<<endl<<"Your answer is correct!"<<endl;
    }else{
        cout<<endl<<"Wrong the answer was "<<result<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}