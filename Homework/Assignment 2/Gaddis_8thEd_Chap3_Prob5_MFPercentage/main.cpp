/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 29, 2016, 3:10PM
 * Purpose:  Male and Female Percentages
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
    float pMale, pFemale;
    int nMale, nFemale, total;
    
    //Input Data
    cout<<"Enter the number of male students and female students ";
    cout<<"in a class, seperated by a space.";
    cin>>nMale>>nFemale;
	
    //Process the Data	
    total = nMale + nFemale;
    pMale = static_cast<float>(nMale)/total;
    pFemale = static_cast<float>(nFemale)/total;
	
    //Output the processed Data
    cout<<setprecision(2)<<fixed<<showpoint;
    cout<<"\nPercentage of Male students is "<<pMale*100<<"%."<<endl;
    cout<<"Percentage of Female students is "<<pFemale*100<<"%."<<endl;
    
    
    
    
    
    //Exit Stage Right!
    return 0;
}