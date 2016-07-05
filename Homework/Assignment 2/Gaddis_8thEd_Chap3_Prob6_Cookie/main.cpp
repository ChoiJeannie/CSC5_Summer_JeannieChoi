/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 28, 2016, 3:28 PM
 * Purpose:  Cookie Ingredient Adjuster
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float sugar=1.5; //1.5 cups of sugar for 48 cookies
    float butter=1;  //1 cup of butter for 48 cookies
    float flour=2.75;//2.75 cups of flour for 48 cookies
    short int cookies;
    
    //Input Data
    cout<<"This program will let you know ";
    cout<<"how much ingredients are needed to make a desired number of cookies : ";
    cout<<endl;
    cout<<"How many cookies do you want to make?"<<endl;
    cin>>cookies;
    
    //Process the Data
    float sNeed=cookies/1.5f; //Amount of sugar needed to make # of cookies
    float bNeed=cookies/1.0f; //Amount of butter needed to make # of cookies
    float fNeed=cookies/2.75f;//Amount of flour needed to make # of cookies
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    cout<<"Amount of each ingredient needed to make ";
    cout<<cookies<<" cookies is the following: "<<endl;
    cout<<"Sugar  = "<<setw(5)<<sNeed<<" cups"<<endl;
    cout<<"Butter = "<<setw(5)<<bNeed<<" cups"<<endl;
    cout<<"Flour  = "<<setw(5)<<fNeed<<" cups"<<endl;
            
    
    //Exit Stage Right!
    return 0;
}