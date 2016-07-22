/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 8:11 AM
 * Purpose:  Larger Than N 
 */

//System Libraries
#include <iostream>  //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void element(int a[], int size, int num);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    int a[50];
    int size;
    int num;

    //Input the Data
    cout<<"Enter the size of the array: ";
    cin>>size;
    cout<<endl;
    cout<<"Enter the elements into the array: "<<endl;
    for(int i=0;i<size;i++){
        cout<<"a["<<(i+1)<<"]: ";
        cin>>a[i];
        cout<<endl;
     }

    //print the elements to the console
    cout<<"The elements entered are: "<<endl;
    for(int i=0;i<size;i++){
        cout<<"["<<a[i]<<"] ";     
     }
    cout<<endl;

    //prompt the user to enter the number
    cout<<"To print the array elements larger than the "
         <<"given number you need to enter a number."<<endl;
    cout<<"Enter a number: ";
    cin>>num;

    //call the printLargerElements
    element(a, size, num);
    
    //Exit Stage Right!
    return 0;
}

void element(int *a, int size, int num){
    cout<<"Elements that are larger than the number "<<num<<" are: "<<endl;
    for(int i=0;i<size; i++){
        if(a[i]>num)
        cout<<"["<<a[i]<<"] ";
    }
    cout<<endl;

}


