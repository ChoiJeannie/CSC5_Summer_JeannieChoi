/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 30, 2016, 2:20 PM
 * Purpose:  Pizza Pi
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library for atan
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI=4*atan(1);//PI to 7 significant digits

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pizzaD;//diameter of pizza in inches
    int nSlices; //total number of slices for a pizza
    float area;  //the total area in inches of a pizza

    //Input Data
    cout << "Enter the diameter of the pizza in inches: "    ;
    cin >> pizzaD;

    //Process the Data
    area =PI*(pizzaD/2.0)*(pizzaD/2.0);
    nSlices = area/14.125;
    
    //Output the processed Data
    cout << nSlices << " slices ";
    
    //Exit Stage Right!
    return 0;
}