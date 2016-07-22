/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 20, 2016, 4:39 PM
 * Purpose:  Menu for Assignment 6
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Math Library
#include <ctime>     //Time Function
#include <cstdlib>   //Random Number and Seed
#include <fstream>   //File Streams
#include <vector>     //Vector

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const unsigned int MAXRND=pow(2,31)-1; //Max unsigned int value
const unsigned int  MXRND=  (1<<31)-1;   //Same max unsigned int

//Function Prototypes
void display(char [],int,int);
void display(char [],char [],int);
void read(char [],char [],int);
float grader(char [],char [],int);
float normal();
void  fillAry(vector<float> &,int);
void  maxmin(vector<float> &,int,float &, float &);
float mean(vector<float> &,int);
float stdDev(vector<float> &,int);
void element(int a[], int size, int num);
int total(int [], int);
int small(int [], int);
int large(int [], int);

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    cout<<"Menu Program for Assignment 6:"<<endl;
    cout<<"Choose one homework to view"<<endl<<endl;
    cout<<"Type 1 to view Chip and Salsa"<<endl;
    cout<<"Type 2 to view Grading The Test"<<endl;
    cout<<"Type 3 to view Rainfall Statistics"<<endl;
    cout<<"Type 4 to view Largest and Smallest Array Values"<<endl;
    cout<<"Type 5 to view Standard Deviation"<<endl;
    cout<<"Type 6 to view Larger Than N"<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case '1':{
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
            //Exit the switch
            break;
        }
        case '2':{
    //Declare Variables
            const int SIZE=20;
            char ans[SIZE]={};
            char key[SIZE]={};

            //Input Data
            read("answer.dat",ans,SIZE);
            read("key.dat",key,SIZE);

            //Output the processed Data
            display(ans,SIZE,1);
            display(key,SIZE,1);
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Your grade was = "<<grader(key,ans,SIZE)<<"%"<<endl;
            display(key,ans,SIZE);
    
            //Exit the switch
            break;            
        }
        case '3':{
            //Declare Variables
            const int SIZE=12;
            float rnfall[SIZE];
            float total=0;
            float avg=0;
            float maxRain=0;
            float minRain=0;
            float tmpRain=0;


            //Input Data

            //Process the Data
            for(int i=0;i<12;i++){
                cout<<"Input rainfall for month "<<i+1<<": "<<endl;
                cin>>rnfall[i];
                total+=rnfall[i];
            }

            avg=total/12;
            maxRain=rnfall[0];
            minRain=rnfall[0];

            for(int i=1;i<12;i++){
                tmpRain=rnfall[i];
                if(tmpRain<minRain)
                    minRain=tmpRain;
                if(tmpRain>maxRain)
                    maxRain=tmpRain;
            }
            //Output the processed Data
            cout<<fixed<<setprecision(2)<<showpoint;
            cout<<"Total rainfall was: "<<total<<endl;
            cout<<"Average rainfall was: "<<avg<<endl;
            cout<<"Highest rainfall was: "<<maxRain<<endl;
            cout<<"Lowest rainfall was: "<<minRain<<endl;
    
           
            //Exit the switch
            break;            
        }
        case '4':{
            //Declare Variables
            int min,max;
            const int SIZE=10;
            int n[SIZE];
            
            //Input
            cout<<"Enter 10 values:"<<endl;

            for(int i=0;i<10;i++){
            cout<<"\nEnter value: ";
            cin>>n[i]; // puts values in array
            }
            
            //Process and Output
            min=n[0];
            max=n[0];

            for(int i=1;i<10;i++){
                    if(min>n[i]){
                       min=n[i];
                    }
                    else if(max<n[i]){
                           max=n[i];
                    }
                    }

            cout<<"Maximum number is: "<<max<<endl;
            cout<<"Minimum number is: "<<min<<endl;

            //Exit the switch
            break;            
        }
        case '5':{
            //Set the random number seed
            srand(static_cast<unsigned int>(time(0)));

            //Variables
            const int SIZE=5000000;
            vector<float> x(SIZE);
            float min,max,avg,std;

            //Input Data
            fillAry(x,SIZE);

            //Process Data
            maxmin(x,SIZE,min,max);
            avg=mean(x,SIZE);
            std=stdDev(x,SIZE);

            //Output Data
            cout<<"Integer Maximum Random Number = "<<MAXRND<<endl;
            cout<<"Integer Maximum Random Number = "<<MXRND<<endl;
            cout<<"The Minimum Random Normal Number = "<<min<<endl;
            cout<<"The Maximum Random Normal Number = "<<max<<endl;
            cout<<"The Average Random Normal Value  = "<<avg<<endl;
            cout<<"The Std Dev Random Normal Value  = "<<std<<endl;
            //Exit the switch
            break;
        }
        case '6':{
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

            //Exit the switch
            break;
        }
       
        default:cout<<"Not option in menu"<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}

void display(char key[],char ans[],int n){
    //Output Right or Wrong
    cout<<"Key Ans   Grade"<<endl;
    for(int i=0;i<n;i++){
        cout<<setw(3)<<key[i]<<" "<<setw(3)<<ans[i]<<"   ";
        cout<<(key[i]==ans[i]?"Right":"Wrong")<<endl;
    }
}

float grader(char key[],char ans[],int n){
    //Declare variables
    int right=0;
    //Compare key with answers
    for(int i=0;i<n;i++){
        if(key[i]==ans[i])right++;
    }
    //return the grade
    return 100.0f*right/n;
}

void read(char fn[],char ans[],int n){
    //Declare the file
    ifstream in;
    //Open the file
    in.open(fn);
    //Send the array to the file
    for(int i=0;i<n;i++){
        in>>ans[i];
    }
    //Close the file
    in.close();
}

void display(char ans[],int n,int perLine){
    cout<<endl;
    for(int i=0;i<n;i++){
        cout<<ans[i]<<' ';
        if(i%perLine==(perLine-1))cout<<endl;
    }
    cout<<endl;
}

float stdDev(vector<float> &x,int n){
    float sum=0,avg=mean(x,n);
    for(int i=0;i<n;i++){
        sum+=((x[i]-avg)*(x[i]-avg));
    }
    return sqrt(sum/(n-1));
}

float mean(vector<float> &x,int n){
    float sum=0;
    for(int i=0;i<n;i++){
        sum+=x[i];
    }
    return sum/n;
}

void maxmin(vector<float> &x,int n,float &min,float &max){
    min=max=x[0];
    for(int i=1;i<n;i++){
        if(max<x[i])max=x[i];
        if(min>x[i])min=x[i];
    }
}

void fillAry(vector<float> &x,int n){
    for(int i=0;i<n;i++){
        x[i]=normal();
    }
}

float normal(){
    //Declare and Initialize
    float sum=0;
    //Add 12 uniformly distributed numbers
    for(int i=1;i<=12;i++){
        sum+=static_cast<float>(rand())/MAXRND;//[0,1]
    }
    //Scale a number [0,12]-6 = [-6,6]
    return (sum-6);
}

void element(int *a, int size, int num){
    cout<<"Elements that are larger than the number "<<num<<" are: "<<endl;
    for(int i=0;i<size; i++){
        if(a[i]>num)
        cout<<"["<<a[i]<<"] ";
    }
    cout<<endl;

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

