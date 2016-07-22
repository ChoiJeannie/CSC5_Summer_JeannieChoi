/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 21th, 2016, 7:50 PM
 * Purpose:  Chip and Salsa
 */

//System Libraries

#include <iostream> //Input/Output Library
#include <iomanip>  //Formatting Library
#include <string>
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes
int total(int [], int);
int small(int [], int);
int large(int [], int);

//Execution Begins Here!

int main(int argc, char** argv) {
    //Declare the variables
    const int NUM_TYP=5;
    int sales[NUM_TYP];
    string name[NUM_TYP]={"Mild","Medium","Sweet","Hot","Zesty"};
    int totSold;
    int hiSales;
    int loSales;

     //Input the Data
     for(int type=0;type<NUM_TYP;type++){
          cout<<"Jars sold last month of "<<name[type]<<":";
          cin>>sales[type];
     }

    //Process the Data
    totSold=total(sales, NUM_TYP);
    loSales=small(sales, NUM_TYP);
    hiSales=large(sales, NUM_TYP);
    //Output the Data
    cout<<endl;
    cout<<"    Salsa Sales Report\n";
    cout<<"Name                 Jars Sold\n";
    cout<<"______________________________\n";
    cout<<name[0]<<"                  "<<sales[0]<<"\n";
    cout<<name[1]<<"                "<<sales[1]<<"\n";
    cout<<name[2]<<"                 "<<sales[2]<<"\n";
    cout<<name[3]<<"                   "<<sales[3]<<"\n";
    cout<<name[4]<<"                 "<<sales[4]<<"\n";
    
    
        cout<<"Total Sales:"<<setw(13)<<totSold<<endl;
        cout<<"High Seller: "<<name[hiSales]<<endl;
        cout<<"Low Seller: "<<name[loSales]<<endl;
    
    return 0;
}

int total(int array[], int numElts){
    int tot=0;
    for(int type=0;type<numElts;type++)
        tot+=array[type];
    return tot;
}

int large(int array[], int numElts){
    int indexLg=0;
    for(int pos=1;pos<numElts;pos++)
    {
        if(array[pos]>array[indexLg])
            indexLg=pos;
    }
    return indexLg;
}

int small(int array[], int numElts){
    int indexSm=0;
    for(int pos=1;pos<numElts;pos++){
        if (array[pos]<array[indexSm])
            indexSm=pos;
    }
    return indexSm;
}