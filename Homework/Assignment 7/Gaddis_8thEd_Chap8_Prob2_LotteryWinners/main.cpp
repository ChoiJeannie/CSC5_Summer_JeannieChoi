/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 12:13 PM
 * Purpose:  Lottery Winners
 */

//System Libraries

#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare the variables
    int num[10]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    int i;
    int win=-1;
    int n;

    //Input the Data
    cout<<"Please enter this week's 5-digit winning lottery number: ";
    cin>>n;
    
    //Process and Output the Data
    for(i=0;i<10;i++)
        if (n==num[i]){
            cout<<"You have a winning ticket.\n";
            win=i;
        }
        if(win<0){
                cout<<"You do not have a winning ticket.\n";
        }
    
    
    return 0;
}
