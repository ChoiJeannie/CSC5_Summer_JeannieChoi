/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21, 2016, 4:39 PM
 * Purpose:  Menu for Assignment 7
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <string>    //String Objects

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void selectionSort(string[],int);
void displayArray(string[],int);
void BinarySearch(int[],int,int,int&,int&);
void linearSearch(int[],int,int,int&,int&);
void SelectionSort(int[],int);
void display(int[],int);
int searchList(int[],int,int);
void disArry(int [], int);
void bubSort(int [], int);
void selSort(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    cout<<"Menu Program for Assignment 6:"<<endl;
    cout<<"Choose one homework to view"<<endl<<endl;
    cout<<"Type 1 to view String Selection Sort"<<endl;
    cout<<"Type 2 to view Sorting Benchmarks"<<endl;
    cout<<"Type 3 to view Charge Account Validation"<<endl;
    cout<<"Type 4 to view Lottery Winners"<<endl;
    cout<<"Type 5 to view Lottery Winners Binary"<<endl;
    cout<<"Type 6 to view Sorting Orders"<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case '1':{
            const int SIZE=20;
            string name[SIZE]={
            "Collins, Bill", "Smith, Bart", "Michalski, Joe", "Griffin, Jim",
            "Sanchez, Manny", "Rubin, Sarah", "Taylor, Tyrone", "Johnson, Jill",
            "Allison, Jeff", "Moreno, Juan", "Wolfe, Bill", "Whitman, Jean",
            "Moretti, Bella", "Wu, Hong", "Patel, Renee", "Harrison, Rose",
            "Smith, Cathy", "Conroy, Pat", "Kelly, Sean", "Holland, Beth"};

            selectionSort(name, SIZE);
            displayArray(name, SIZE);
            
            //Exit the switch
            break;
        }
        case '2':{
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

            //Exit the switch
            break;            
        }
        case '3':{
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

            //Exit the switch
            break;            
        }
        case '4':{
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


            //Exit the switch
            break;            
        }
        case '5':{
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

            //Exit the switch
            break;
        }
        case '6':{
            //Declare the variables
            const int SIZE=8;
            int array1[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};
            int array2[SIZE] = {25, 4, 60, 13, 90, 73, 84, 45};

            //Input the Data

            //Process and Output the Data
            cout << "\nContents of the first array.\n";
            disArry(array1, SIZE);

            cout << "\nBubble sort the first array in ascending order.\n";
            bubSort(array1, SIZE);

            cout << "\nContents of the second array.\n";
            disArry(array2, SIZE);

            cout << "\nSelection sort the second array in ascending order.\n";
            selSort(array2, SIZE);

            //Exit the switch
            break;         
        }
        
        default:cout<<"Not option in menu"<<endl;
    }
    
    //Output the processed Data
    
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

void disArry(int array[], int size){
    for(int i=0;i<size;i++)
    {
        cout<<array[i]<<" ";
    }
    cout<<endl;
}

void bubSort(int array[], int size){
    int temp;
    bool swap;
    do{
        swap = false;
	for (int count=0;count<(size-1);count++)
	{
            if(array[count]>array[count + 1])
            {
		temp=array[count];
		array[count]=array[count+1];
		array[count+1]=temp;
		swap=true;
            }
		disArry(array, size);
	}
	} while(swap);
}

void selSort(int array[], int size){
    int scan, minIndx, minVal;

    for (int scan=0;scan<(size-1);scan++)
	{
		minIndx = scan;
		minVal = array[scan];
		for (int index=scan+1;index<size;index++)
		{
			if (array[index]<minVal)
			{
				minVal=array[index];
				minIndx=index;
			}
		}
		array[minIndx] = array[scan];
		array[scan] = minVal;
		disArry(array, size);
	}
}

