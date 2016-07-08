/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 7th, 2016, 2:41 PM
 * Purpose:  Template
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Loop and Output the Data
    cout<<"The Characters for the ASCII Codes 0 through 127: "<<endl;
    for (int code=0;code<=127;code++){
        cout<<(char)code<<" ";
        if(code%16==0)
        cout<<endl;
    }
    
    //Exit Stage Right!
    return 0;
}