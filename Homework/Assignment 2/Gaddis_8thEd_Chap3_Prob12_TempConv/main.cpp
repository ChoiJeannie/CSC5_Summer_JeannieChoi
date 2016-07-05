/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 28, 2016, 2:03 PM
 * Purpose:  Conversion with an equation vs. interpolation
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
    float ceq,cintrp,f;
    float f1=32.0f,f2=212.0f,c1=0.0f,c2=100.0f;
    
    //Input Data
    cout<<"Input the temperature in degree fahrenheit ";
    cout<<"for conversion to celsius"<<endl;
    cin>>f;
    
    //Process the Data
    ceq=(f-32)*5/9;//Linear equation y=mx+b
    cintrp=c1+(c2-c1)*(f-f1)/(f2-f1);//Similar triangles or linear interpolation
    
    //Output the processed Data
    cout<<f<<" deg fahreheit = "<<ceq<<" deg centigrade"<<endl;
    cout<<f<<" deg fahreheit = "<<cintrp<<" deg centigrade"<<endl;
    
    //Exit Stage Right!
    return 0;
}