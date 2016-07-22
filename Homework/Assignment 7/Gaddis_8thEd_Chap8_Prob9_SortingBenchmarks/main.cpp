/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 12:13 PM
 * Purpose:  Sorting Benchmarks
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void BinarySearch(int[],int,int,int&,int&);
void linearSearch(int[],int,int,int&,int&);
void SelectionSort(int[],int);
void display(int[],int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    const int SIZE=20;
    int table[SIZE]={9,18,27,36,54,45,99,63,108,72,3,6,12,15,21,24,30,33,39,42};
    int num,countB,countL,bIndex,lIndex;
    cout<<" Enter Number : "<<"  ";
    cin>>num;
    cout<<"\n";

    //Linear Search Data
    cout<<" LINEAR SEARCH "<<endl;
    cout<<endl;
    linearSearch(table,SIZE,num,lIndex,countL);
    if(lIndex==-1){
    cout<<" Number Not Found "<<endl;
   }
    else{
    cout<<" Number is found in Index "<<lIndex<<endl;
    cout<<" Total Comparison to find the number "<<countL<<" times "<<endl;
   }

    cout<<" SELECTION SORT FIRST FOR BINARY SEARCH "<<endl;
    cout<<endl;
    
    //Sort
    SelectionSort(table,SIZE);
    cout<<" AFTER SORTING "<<endl;
    display(table,SIZE);

    cout<<" BINARY SEARCH "<<endl;
    cout<<endl;

    //Binary Search Data
    BinarySearch(table,SIZE,num,bIndex,countB);
    if(bIndex==-1){
    cout<<" Number Not Found "<<endl;
   }
    else{
    cout<<" Number is found in Index "<<bIndex<<endl;
    cout<<" Total Comparison to find the number "<<countB<<" times "<<endl;
   }

    //Exit Stage Right!
    return 0;
}
// Binary Search
void BinarySearch(int t[],int s,int n,int& indexB,int& b){
    int first=0,
        middle,
        last=s-1;
    int counter=0;
    bool flag=false;
    int checkMate=-1;
    int i=0;
    while(i<s&&!flag){
    middle=(first+last)/2;
    if(t[middle]==n){
    flag=true;
    checkMate=middle;
    }
    else if(t[middle]>n){
    last=middle-1;
    }
    else{
    first=middle+1;
    }
    counter++;
  }
    b=counter;
    indexB=checkMate;
}


//Linear Search
void linearSearch(int t[],int s,int n,int& indexL,int& l){
    int check=-1;
    bool flag=false;
    int index=0;
    int temp=0;
    while(index<s && !flag){
    if(t[index]==n){ 
    check=index;
    flag=true;
    }
    else{
    index++;
   }
    temp++;
 }
    l=temp;
    indexL=check;
}

// Selection Sort
void SelectionSort(int sSort[],int s){
    int scan,minVal,minIndx;
    for(int scan=0;scan<(s-1);scan++){
    minVal=sSort[scan];
    minIndx=scan;
    for(int index=(scan+1);index<s;index++){
    if(sSort[index]<minVal){
    minVal=sSort[index];
    minIndx=index;
       }
     }
    sSort[minIndx]=sSort[scan];
    sSort[scan]=minVal;
   }
}

void display(int t[],int s){
    for(int i=0;i<s;i++){
    cout<<setw(4)<<t[i];
   }
    cout<<endl;
 }

