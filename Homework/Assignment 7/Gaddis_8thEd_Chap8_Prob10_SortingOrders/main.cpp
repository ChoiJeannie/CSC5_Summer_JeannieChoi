/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 12:13 PM
 * Purpose:  Sorting Orders
 */

//System Libraries

#include <iostream> //Input/Output Library
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
void disArry(int [], int);
void bubSort(int [], int);
void selSort(int [], int);

//Execution Begins Here!

int main(int argc, char** argv) {
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
    
    
    return 0;
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

