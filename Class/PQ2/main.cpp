/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 11th, 2016, 9:53 PM
 * Purpose:  Pop Quiz
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int sum(int);

//Execution Begins Here!
int main(int argc, char** argv) {
    int sum=1;
    //Input Data
    
    //Process the Data
    for(int x=1;x<=10;x++){
        sum+=x;
        cout<<sum<<endl;

    }
   return 0;
}

int sum(int N) {  
    int add=0;        
    for(int x=1;x<=10;x++){
    add+=x;
    cout<<add<<endl;
    }
    return add;  
    }    