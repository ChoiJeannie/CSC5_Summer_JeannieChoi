/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 22, 2016, 1:45 PM
 * Purpose:  Size of all the data types
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
    char a;
    unsigned char b;
    short c;
    unsigned short d;
    int e;
    unsigned int f;
    bool g;
    float h;
    double i;//This just gave you an FFFFFFF
    long double j;//This is even a bigger F, special place for you!!!!
    long k;
    unsigned long l;
    
    //Input Data
    
    //Process the Data
    
    //Output the processed Data
    cout<<"Character has          "<<sizeof(a)<<" bytes"<<endl;
    cout<<"Unsigned Character has "<<sizeof(b)<<" bytes"<<endl;
    cout<<"Short has              "<<sizeof(c)<<" bytes"<<endl;
    cout<<"Unsigned Short has     "<<sizeof(d)<<" bytes"<<endl;
    cout<<"Integer has            "<<sizeof(e)<<" bytes"<<endl;
    cout<<"Unsigned Integer has   "<<sizeof(f)<<" bytes"<<endl;
    cout<<"Boolean has            "<<sizeof(g)<<" bytes"<<endl;
    cout<<"Float has              "<<sizeof(h)<<" bytes"<<endl;
    cout<<"Double has             "<<sizeof(i)<<" bytes"<<endl;
    cout<<"Long Double has        "<<sizeof(j)<<" bytes"<<endl;
    cout<<"Long has               "<<sizeof(k)<<" bytes"<<endl;
    cout<<"Unsigned Long has      "<<sizeof(l)<<" bytes"<<endl;
    
    //Exit Stage Right!
    return 0;
}