/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 3, 2016, 2:07 PM
 * Purpose:  Minimum/Maximum
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
    float number1, number2;

    cout << "Enter two numbers: ";
    cin >> number1 >> number2;

    if(number1 > number2)
        cout << "The larger number is: " << number1 << endl << endl;
    else
        cout << "The larger number is: " << number2 << endl << endl;
    
    //Exit Stage Right!
    return 0;
}