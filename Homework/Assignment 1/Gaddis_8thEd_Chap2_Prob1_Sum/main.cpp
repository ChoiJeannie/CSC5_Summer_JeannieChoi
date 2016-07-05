/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 22, 2016, 3:04 PM
 * Purpose:  Finding the sum of two numbers
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
    int a=50;//The value of a is 50
    int b=100;//The value of b is 100
    int total;//The sum of a and b
    
    //Input Data
    
    //Process the Data
    total=a+b;
    
    //Output the processed Data
    cout <<"The variable a = "<<a<<endl;
    cout <<"The variable b = "<<b<<endl;
    cout <<"The sum of these two variables is total = "<<total<<endl;
    
    //Exit Stage Right!
    return 0;
}