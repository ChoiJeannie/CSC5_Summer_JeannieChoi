/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 7:50 PM
 * Purpose:  Coin Toss
 */

//System Libraries

#include <iostream> //Input/Output Library
#include <cstdlib>  //Random
#include <ctime>
#include <string>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int coinToss(void);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare Variables
    int times=0;
    int randNum=0;
    string HT= "";
    
    //Input Data
    cout<<"How many times to toss the coin?";
    cin>>times;
    
    srand((time(0))); //Seeding the random number generator 
    //Process the Data
    for (int i=1;i<=times;i++)
    {
        randNum=coinToss();
        if (randNum==1)
            HT="head";
        else 
            HT="tail";
        
        cout<<HT<<endl;
    }
    
    //Output the processed Data
 
    
    //Exit Stage Right!
     return 0;
}

int coinToss(void){
    int randNum;
    randNum=1+rand()%2;
    return randNum;
}




