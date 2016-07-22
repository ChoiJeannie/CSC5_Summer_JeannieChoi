/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 20th, 2016, 3:35 PM
 * Purpose:  Largest and Smallest Array Value
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    int min,max;
    const int SIZE=10;
    int n[SIZE];
    
    cout<<"Enter 10 values:"<<endl;
    
    for(int i=0;i<10;i++){
    cout<< "\nEnter value: ";
    cin>> n[i]; // puts values in array
    }

    min=n[0];
    max=n[0];
    
    for(int i=1;i<10;i++){
            if(min>n[i]){
               min=n[i];
            }
            else if(max<n[i]){
                   max=n[i];
            }
            }

    cout<<"Maximum number is: "<<max<<endl;
    cout<<"Minimum number is: "<<min<<endl;

return 0;
}