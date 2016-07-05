/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 30, 2016, 3:45 PM
 * Purpose:  Property Tax
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format output
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float pValue, pTax, pAssess;
    
    //Input Data
    cout<<"Enter the actual value of the property in $.\n ";
    cin>>pValue;

    //Process the Data
    pAssess = pValue*0.60;    //assessment value of property, 60% of property's actual value
    pTax = (pAssess/100)*0.75;//the property tax is 75 cent for each $100 of pAssess 

    //Output the processed Data
    cout<< setprecision(2)<<fixed<<showpoint;
    cout<<"The assessment value is: $"<<pAssess<<endl;
    cout<< "The property tax is: $"<<pTax<<endl;

    //Exit Stage Right!
    return 0;
}