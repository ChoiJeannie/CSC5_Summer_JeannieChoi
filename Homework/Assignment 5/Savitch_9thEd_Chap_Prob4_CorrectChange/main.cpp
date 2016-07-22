/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 13th, 2016, 9:30 PM
 * Purpose:  Correct Change
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Format
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void input(int &);
void cnvrt(int,int &,int &,int &,int &,int &);
void output(int,int,int,int,int);
int  subtrct(int,int,int&);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int change,nHalf,nQtr,nDimes,nNkls,nPen;
    
    //Input Data
    input(change);
    
    //Process the Data
    cnvrt(change,nHalf,nQtr,nDimes,nNkls,nPen);
    
    //Output the processed Data
    output(nHalf,nQtr,nDimes,nNkls,nPen);
    
    //Exit Stage Right!
    return 0;
}

int  subtrct(int change,int val,int &number){
    number=(change-change%val)/val;
    change-=number*val;
    return change;
}

void input(int &change){
    //Prompt for user input
    do{
        cout<<"This program converts Pennies into Change"<<endl;
        cout<<"Type in the number of Pennies 1 and 99"<<endl;
        cin>>change;
    }while(change<=0||change>99);
    cout<<change<<" pennies = ";
}

void cnvrt(int change,int &nHalf,int &nQtr,int &nDimes,int &nNkls,int &nPen){
    //Convert to coins
    change=subtrct(change,50,nHalf);
    change=subtrct(change,25,nQtr);
    change=subtrct(change,10,nDimes);
    change=subtrct(change, 5,nNkls);
           subtrct(change, 1,nPen);//change should = 0 at this point 
}

void output(int nHalf,int nQtr,int nDimes,int nNkls,int nPen){
    //Output the result
    cout<<nHalf<<"->$0.50 ";
    cout<<nQtr<<"->$0.25 ";
    cout<<nDimes<<"->$0.10 ";
    cout<<nNkls<<"->$0.05 ";
    cout<<nPen<<"->$0.01"<<endl;
}