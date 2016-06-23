/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 22, 2016, 4:45 PM
 * Purpose:  Energy Drink Consumption
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
    unsigned short customers = 16500; //number of total customers surveyed
    int purchased;         //approximate number of customers in the survey who purchase one or more energy drinks per week
    int citrus;            //approximate number of customers in the survey who prefer citrus-flavored energy drinks
    
    //Input Data
    
    //Process the Data
    purchased = 16500*0.15;
    citrus = purchased*0.58+0.5;        
    
    //Output the processed Data
    cout <<"The approximate number of customers in the survey who purchased one or more energy drinks per week is "<<purchased<<"."<<endl;
    cout <<"The approximate number of customers in the survey who prefer citrus-flavored energy drinks is "<<citrus<<"."<<endl;
    
    //Exit Stage Right!
    return 0;
}