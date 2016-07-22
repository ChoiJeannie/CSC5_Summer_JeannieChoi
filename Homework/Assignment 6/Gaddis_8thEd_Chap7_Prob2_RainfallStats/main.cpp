/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 20th, 2016, 1:27 PM
 * Purpose:  Rainfall Statistics
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=12;
    float rnfall[SIZE];
    float total=0;
    float avg=0;
    float maxRain=0;
    float minRain=0;
    float tmpRain=0;
          
    
    //Input Data
    
    //Process the Data
    for(int i=0;i<12;i++){
        cout<<"Input rainfall for month "<<i+1<<": "<<endl;
        cin>>rnfall[i];
        total+=rnfall[i];
    }
    
    avg=total/12;
    maxRain=rnfall[0];
    minRain=rnfall[0];
    
    for(int i=1;i<12;i++){
        tmpRain=rnfall[i];
        if(tmpRain<minRain)
            minRain=tmpRain;
        if(tmpRain>maxRain)
            maxRain=tmpRain;
    }
    //Output the processed Data
    cout<<fixed<<setprecision(2)<<showpoint;
    cout<<"Total rainfall was: "<<total<<endl;
    cout<<"Average rainfall was: "<<avg<<endl;
    cout<<"Highest rainfall was: "<<maxRain<<endl;
    cout<<"Lowest rainfall was: "<<minRain<<endl;
    
    //Exit Stage Right!
    return 0;
}