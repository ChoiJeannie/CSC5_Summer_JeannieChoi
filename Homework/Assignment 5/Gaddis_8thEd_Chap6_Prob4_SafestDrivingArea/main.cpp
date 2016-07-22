/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 20th, 12:24 PM
 * Purpose:  Safest Driving Area
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //string object

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int nAccdnt(string);
void fLowest(int,int,int,int,int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int accN,accS,accE,accW,accC;
    //Input Data
    
    //Process the Data
    for (int i=0;i<5;i++){
        switch (i){
            case 0:accN=nAccdnt("North");break;
            case 1:accS=nAccdnt("South");break;
            case 2:accE=nAccdnt("East");break;
            case 3:accW=nAccdnt("West");break;
            default:accC=nAccdnt("Central");break;
        }
    }
            
    fLowest(accN,accS,accE,accW,accC);
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

int nAccdnt(string region){
    int accdnt=0;
    
    cout<<"Enter number of accidents for region "<<region<<" ";
    cin>>accdnt;
 
    while(accdnt<0){
        cout<<"Enter number of accidents for region ";
        cin>>accdnt;
    }
    
    return accdnt;
    
}

void fLowest(int r1, int r2, int r3, int r4, int r5){
    int lowest=0;
    string region="";
    
    if(r1<r2&&r1<r3&&r1<r4&&r1<r5){
        lowest=r1;
        region="North";
    }
    else if(r2<r1&&r2<r3&&r2<r4&&r2<r5){
        lowest=r2;
        region="South";
    }
    else if(r3<r1&&r3<r2&&r3<r4&&r3<r5){
        lowest=r3;
        region="East";
    }
    else if(r4<r1&&r4<r2&&r4<r3&&r4<r5){
        lowest=r4;
        region="West";
    }
    else {
        lowest=r5;
        region="Central";
    }
    
    cout<<"The region with lowest accidents is "<<region<<". Total number of accidents";
    cout<<"in that region was "<<lowest<<endl;
}
    