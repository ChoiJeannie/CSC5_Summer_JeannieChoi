/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 12:13 PM
 * Purpose:  Charge Account Validation
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int searchList(int[], int, int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int ACCTS=18;
    int list[ACCTS]={5658845,4520125,7895122,8777541,8451277,1302850,
                     8080152,4562555,5552012,5050552,7825877,1250255,
                     1005231,6545231,3852085,7576651,7881200,4581002};

	int acctNum,result;

	//Input
	cout<<"Enter your charge account number to determine if it is valid: ";
	cin >>acctNum;
        
        //Process
	result=searchList(list, ACCTS, acctNum);
	if(result==-1)
            cout<<"Account number "<<acctNum<<" is invalid.\n";
	else
            cout<<"Account number "<<list[result]<<" is valid\n";

    //Exit Stage Right!
    return 0;
}

int searchList(int list[], int size, int value){
	//Declare Variables
	int index=0,position=-1;
	bool found=false;

	while(!found&&index<size){
            if(list[index]==value){
		found=true;
		position=index;
		}
		index++;
	}
	return position;
}