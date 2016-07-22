/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 7, 2016, 6:00 PM
 * Purpose:  Menu for Assignment 6
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Math Library
#include <string>    //String Objects
#include <ctime>     //Time Function
#include <cstdlib>   //Random Number and Seed
#include <fstream>   //File Streams

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const int MONTH=3;//0->June, 1->July, 2->August

//Function Prototypes
void display(char [][MONTH],int);
void read(char [],char [][MONTH],int);
void results(char [][MONTH],int);
void display(char [],int,int);
void display(char [],char [],int);
void read(char [],char [],int);
float grader(char [],char [],int);


//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    cout<<"Menu Program for Assignment 4:"<<endl;
    cout<<"Choose one homework to view"<<endl<<endl;
    cout<<"Type 1 to view Largest/Smallest Array Values"<<endl;
    cout<<"Type 2 to view Rainfall Statistics"<<endl;
    cout<<"Type 3 to view RCS"<<endl;
    cout<<"Type 4 to view Grading The Test"<<endl;
    cout<<"Type 5 to view "<<endl;
    cout<<"Type 6 to view "<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case '1':{
            //Declare Variables
            int min,max;
            const int SIZE=10;
            int n[SIZE];
            
            //Input
            cout<<"Enter 10 values:"<<endl;

            for(int i=0;i<10;i++){
            cout<<"\nEnter value: ";
            cin>>n[i];
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
        case '2':{
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
        case '3':{
            //Declare Variables
            const int DAYS=30;
            char weather[DAYS][MONTH];

            //Input Data
            read("weather.dat",weather,DAYS);

            //Output the processed Data
            display(weather,DAYS);
            results(weather,DAYS);
            //Exit the switch
            break;            
        }
        case '4':{
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
                    }
            //Exit the switch
            break;            
        }
        case '5':{
            

            //Exit the switch
            break;
        }
        case '6':{
           
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


void results(char rcs[][MONTH],int DAYS){
    //Declare an array to hold the results
    const int COLS=4;
    const int RCS=3;
    char weather[RCS]={'R','C','S'};
    int result[RCS][COLS]={};
    //Gather results for each type of weather per month
    for(int mon=0;mon<3;mon++){
        for(int day=0;day<DAYS;day++){
            if(rcs[day][mon]=='R')result[0][mon]++;//Rainy days / month
            if(rcs[day][mon]=='C')result[1][mon]++;//Cloudy days / month
            if(rcs[day][mon]=='S')result[2][mon]++;//Sunny days / month
        }   
    }
    //Create the total
    for(int row=0;row<RCS;row++){
        for(int col=0;col<RCS;col++){
            result[row][3]+=result[row][col];//Grand total for each weather type
        }
    }
    //Display the results
    cout<<endl;
    cout<<"Summarizing the Results"<<endl;
    cout<<"  June July  Aug Totl"<<endl;
    for(int row=0;row<RCS;row++){
        cout<<weather[row]<<" ";
        for(int col=0;col<COLS;col++){
            cout<<setw(4)<<result[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}

void read(char fn[],char rcs[][MONTH],int DAYS){
    //Declare the file
    ifstream in;
    //Open the file
    in.open(fn);
    //Send the array to the file
    for(int row=0;row<DAYS;row++){
        in>>rcs[row][0]>>rcs[row][1]>>rcs[row][2];
    }
    //Close the file
    in.close();
}

void display(char rcs[][MONTH],int DAYS){
    cout<<endl;
    cout<<"June July  Aug"<<endl;
    for(int row=0;row<DAYS;row++){
        for(int col=0;col<MONTH;col++){
            cout<<setw(4)<<rcs[row][col]<<" ";
        }
        cout<<endl;
    }
    cout<<endl;
}
