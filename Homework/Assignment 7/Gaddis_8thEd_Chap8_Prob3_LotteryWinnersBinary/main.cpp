/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 12:13 PM
 * Purpose:  Lottery Winners Binary
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
    int winNum[10]={13579,26791,26792,33445,55555,62483,77777,79422,85647,93121};
    int i;
    int num;
    int max=10,low=0,mid;

    //Input the Data
    
    cout<<"Please enter this week's 5-digit winning lottery number: ";
    cin>>num;
 
    //Process and Output the Data
    //Max
    while(low<=max)
    {
        mid=(low+max)/2;
        if(winNum[mid]<num)
             low = mid + 1;
        else
        {
            if(winNum[mid]>num)
            max = mid - 1;                   
            else
           {
            max=-1;
            }
        }
    }
    if(max<0)
        cout<<"Congratulations, You have a winning ticket!\n"; //Lets the user know the numbers are winners
    else
     cout<<"Sorry, You do not have a winning ticket.\n"; //Lets user know the numbers are not winners
    
    return 0;
}

