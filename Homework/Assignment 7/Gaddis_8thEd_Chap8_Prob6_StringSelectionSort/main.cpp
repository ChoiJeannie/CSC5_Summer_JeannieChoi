/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 12:13 PM
 * Purpose:  String Selection Sort
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String objects
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void selectionSort(string[], int);
void displayArray(string[], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    const int SIZE=20;
    string name[SIZE]={
    "Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
    "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
    "Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
    "Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
    "Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};

    selectionSort(name, SIZE);
    displayArray(name, SIZE);
  
    //Exit Stage Right!
    return 0;
}

void selectionSort(string array[], int size){
    int scan, minIndx;
    string minVal;

    for (int scan=0;scan<(size-1);scan++){
            minIndx=scan;
            minVal=array[scan];
            for(int index=scan+1;index<size;index++){
                    if(array[index]<minVal){
                            minVal=array[index];
                            minIndx=index;
                    }
            }
            array[minIndx]=array[scan];
            array[scan]=minVal;
    }
}

void displayArray(string name[],int size){
    for(int i=0;i<size;i++){
        cout<<name[i]<<endl;
    }
}