/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on June 28, 2016, 1:26 PM
 * Purpose:  Menu with 4 different
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
    char choice;
    
    //Input Data
    cout<<"Menu Program"<<endl;
    cout<<"Select which package you use"<<endl;
    cout<<"Type a)  $16.75 per month, 5 hours access.";
    cout<<"Additional hour are $0.75 up to 20 hours ";
    cout<<"then $1 for all additional hours."<<endl;
    cout<<"Type b)  $23.75 per month, 15 hours access.";
    cout<<"Additional hours are $0.55 up to 25 hours ";
    cout<<"then $0.70 for each hour above this limit."<<endl;
    cout<<"Type c)  $29.95 per month unlimited access"<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case 'a':{
            //Declare Variables


            //Input Data

            //Exit the switch
            break;  
        }
        case 'b':{
            //Declare Variables

            
            //Exit the ternary operator
            break;
            
        }
        case 'c':{
            //Declare Variables
 
            //Exit the independent if's
            break;
        }
 
          
        default:cout<<"Not option in menu!"<<endl;
             
    }
    
    //Exit Stage Right!
    return 0;
}