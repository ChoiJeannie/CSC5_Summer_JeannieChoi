/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 27, 2016, 1:30 PM
 * Purpose: Equal Monthly Payment
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format Library
#include <cmath>     //Math Library

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    float loanAmt, intRate, nPymnts;//Inputs to the problem
    float mPymnt, totPaid, intPaid; //Outputs to the problem
    
    //Input Data
    cout<<"Loan Calculator for Equal Monthly Payments"<<endl;
    cout<<"Input all 3 at once"<<endl;
    cout<<"Loan Amt &'s, Interest Rate %/month, Number of Monthly Payments"<<endl;
    cin>>loanAmt>>intRate>>nPymnts;
    
    //Process the Data
    //float temp=pow((1+intRate),nPymnts)
    float temp=exp(nPymnts*log(1+intRate));//Intermediate value
    mPymnt=intRate*temp*loanAmt/(temp-1);  //Equal Payment calculation
    totPaid=nPymnts*mPymnt;                //Total Paid with interest
    intPaid=totPaid-loanAmt;               //Financed opportunity cost
    
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<setw(10)<<showpoint<<endl;
    cout<<"Monthly Payment = $"<<setw(10)<<mPymnt<<endl;
    cout<<"Total Paid =      $"<<setw(10)<<totPaid<<endl;
    cout<<"Interest Paid =   $"<<setw(10)<<intPaid<<endl;
    
    //Exit Stage Right!
    return 0;
}