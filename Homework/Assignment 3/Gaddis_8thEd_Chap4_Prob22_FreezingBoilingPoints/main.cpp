/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 3, 2016, 12:20 PM
 * Purpose:  Freezing and Boiling Points
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
    float temperature;

    //Input Data 
    cout << "Enter a temperature in Fahrenheit: ";
    cin >> temperature;

    //Process and Output
    cout << "\nSubstances that will freeze: \n";
    
    if(temperature <= -173)
    cout << "Ethyl Alcohol \n";
    
    else if(temperature <= -38)
    cout << "Mercury \n";
    
    else if(temperature <= -362)
    cout << "Oxygen \n";
    
    else if(temperature <= 32)
    cout << "Water \n";
    
    else cout << "None" <<endl;
    
    cout << "\nSubstances that will boil: \n";
    
    if(temperature >= 172)
    cout << "Ethyl Alcohol \n";
    
    else if(temperature >= 676)
    cout << "Mercury \n";
    
    else if(temperature >= -306)
    cout << "Oxygen \n";
    
    else if(temperature >= 212)
    cout << "Water \n";
    
    else cout << "None" <<endl;
    
    //Exit Stage Right!
    return 0;
}