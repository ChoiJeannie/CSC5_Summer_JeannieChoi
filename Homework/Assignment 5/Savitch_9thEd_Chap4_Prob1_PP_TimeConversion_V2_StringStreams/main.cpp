/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 13th, 2016, 8:30 PM
 * Purpose:  Military Conversion
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format
#include <sstream>   //String Stream Library
#include <string>    //String Stream Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void input(int &,int &);
void cnvrt(int,int &,char &);
void output(int,int,char);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int milHr,hr,min;
    char ampm;
    
    //Input Data
    input(milHr,min);
    
    //Process the Data
    cnvrt(milHr,hr,ampm);
    
    //Output the processed Data
    output(hr,min,ampm);
    
    //Exit Stage Right!
    return 0;
}

void input(int &mhr,int &mmin){
    //Prompt for user input
    do{
        //Declare variables to hold the strings
        string hr,min;
        stringstream sshr,ssmin;
        //Examine the input
        cout<<"This program converts military to standard time"<<endl;
        cout<<"Type in the military time in hhmm hh>=0&&hh<=23 mm>=0&&mm<=59"<<endl;
        cin>>setw(2)>>hr>>setw(2)>>min;
        //Convert the strings to integers
        sshr<<hr;
        ssmin<<min;
        sshr>>mhr;
        ssmin>>mmin;
    }while(mhr>=24||mhr<0||mmin>59||mmin<0);
    if(mhr<10)cout<<'0'<<mhr;
    else cout<<mhr;
    if(mmin<10)cout<<'0'<<mmin;
    else cout<<mmin;
    cout<<" = ";
}

void cnvrt(int mhr,int &hr,char &ap){
    //Convert the hour
    hr=mhr;
    ap='A';
    if(hr>12){
        hr-=12;
        ap='P';
    }else if(hr==12)ap='P';
    else if(hr==0)hr=12;
}

void output(int hr,int min,char ap){
    //Output the result
    cout<<hr;
    cout<<":";
    if(min<10)cout<<'0'<<min;
    else cout<<min;
    cout<<" "<<ap<<"M"<<endl;
}