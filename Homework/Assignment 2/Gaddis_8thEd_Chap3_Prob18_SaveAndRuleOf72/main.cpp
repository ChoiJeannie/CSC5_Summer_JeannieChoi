/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 30, 2016, 5:00 PM
 * Purpose:  Savings and Rule of 72
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <cmath>     //Math Library for the Power function
#include <iomanip>   //Format Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float i,//Interest Rate %/yr
         pv,//Present Value in $'s
          n,//Number of compounding periods in yrs
         fv;//Future Value in $'s
    char choice;//Character 1 or 2
    
    //Input Data
    cout<<"Calculate the Future Value by approximation with the rule of 72"<<endl;
    cout<<"Type 1 to input the Present Value in $'s and the Interest Rate in %"<<endl;
    cout<<"Type 2 to input the Present Value in $'s and the Number of years"<<endl;
    cin>>choice;
    
    //Process the Data
    cout<<"Input the Present value in $'s";
    if(choice=='1'){
        cout<<" and the Interest Rate in %"<<endl;
        cin>>pv>>i;
        n=72/i;
    }else{
        cout<<" and the Number of Years"<<endl;
        cin>>pv>>n;
        i=72/n;    
    }
    fv=pv*pow((1+i/100),n);
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Compare the rule of 72 to the exact calculation"<<endl;
    cout<<"The Present Value = $ "<<pv<<endl;
    cout<<"The Interest Rate =   "<<i<<"%"<<endl;
    cout<<"The Number of Years = "<<n<<"(yrs)"<<endl;
    cout<<"$"<<2*pv<<" ~ $"<<fv<<endl;
    
    //Exit Stage Right!
    return 0;
}