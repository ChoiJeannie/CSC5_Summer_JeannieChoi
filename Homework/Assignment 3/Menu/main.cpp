/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on June 28, 2016, 4:26 PM
 * Purpose:  Menu for Assignment 3
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <iomanip>   //Formatting Library
#include <cmath>     //Math Library
#include <string>    //String Objects

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI = 3.14159; 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    char choice;
    
    //Input Data
    cout<<"Menu Program for Assignment 3"<<endl;
    cout<<"Choose one homework to view"<<endl;
    cout<<"Type 1 to view Minimum/Maximum"<<endl;
    cout<<"Type 2 to view Geometry Calculator"<<endl;
    cout<<"Type 3 to view Color Mixer"<<endl;
    cout<<"Type 4 to view Candy Bar"<<endl;
    cout<<"Type 5 to view Square Root"<<endl;
    cout<<"Type 6 to view Sum 10"<<endl;
    cout<<"Type 7 to view Roman Numeral Conversion"<<endl;
    cout<<"Type 8 to view Black Jack Hand Value"<<endl;
    cout<<"Type 9 to view Fibonacci Crud"<<endl;
    cin>>choice;
    
    //Process the Data
    switch(choice){
        case '1':{
            //Declare Variables
            float number1, number2;

            cout << "Enter two numbers: ";
            cin >> number1 >> number2;

            if(number1 > number2)
                cout << "The larger number is: " << number1 << endl << endl;
            else
                cout << "The larger number is: " << number2 << endl << endl;
            //Exit the switch
            break;
        }
        case '2':{
            //Declare Variables
            const int circle = 1;
            const int rectangle = 2;
            const int triangle = 3;
            const int quit = 4;

            int choice;
            float radius; // Radius of a circle
            float length; // Length of a rectangle
            float width;  // Width of a rectangle
            float base;   // Base of a triangle
            float height; // Height of a triangle
            float area;   // Area of the geometry

            // Display the menu
            cout << "Geometry Calculator\n\n";
            cout << "   1. Calculate the area of a Circle\n";
            cout << "   2. Calculate the area of a Rectangle\n";
            cout << "   3. Calculate the area of a Triangle\n";
            cout << "   4. Quit\n\n";
            cout << "   Enter your choice (1-4): ";
            cin >> choice;
    
            // Respond to the user's menu selection.
            switch (choice)
            {
                case circle: 
                    cout << "\nEnter the circle's radius: ";
                    cin >> radius;
                    if (radius < 0)
                        cout << "\nThe radius can not be less than zero.\n";
                    else
                    {
                        area = PI*radius*radius;
                        cout << "\nThe area is " << area << endl;
                    }
                    break;

                case rectangle: 
                    cout << "\nEnter the rectangle's length: ";
                    cin >> length;
                    cout << "Enter the rectangle's width: ";
                    cin >> width;
                    if (length < 0 || width < 0)
                    {
                        cout << "\nOnly enter positive values for ";
                        cout << "length and width.\n";
                    }
                    else
                    {
                        area = length * width;
                        cout << "\nThe area is " << area << endl;
                    }
                    break;

                case triangle: 
                    cout << "Enter the length of the base: ";
                    cin >> base;
                    cout << "Enter the triangle's height: "; 
                    cin >> height;
                    if (base < 0 || height < 0)
                    {
                        cout << "\nOnly enter positive values for ";
                        cout << "base and height.\n";
                    }
                    else
                    {
                        area = base*height*0.5;
                        cout << "\nThe area is " << area << endl;
                    }
                    break;

                case quit: 
                    cout << "Program ending.\n";
                    break;

            default: 
            cout << "The valid choices are 1 through 4. Run the\n";
            cout << "program again and select one of those."<<endl;
            }
    
            //Exit the switch
            break;            
        }
        case '3':{
            //Declare Variables
            string color1, color2;

            //Input Data
            cout<<"Choose 2 primary colors. (red, blue, yellow)"<<endl;
            cout<<"Input color 1: ";
            cin>>color1;

            cout<<"Input color 2: ";
            cin>>color2;

            //Process and Output
            if (color1 == "red" && color2 == "blue")
                {
                        cout << "Those two colors make: purple" << endl;
                }
            else if (color1 == "blue" && color2 == "red")
                {
                        cout << "Those two colors make: purple" << endl;
                }
            else if (color1 == "red" && color2 == "yellow")
                {
                        cout << "Those two colors make: orange" << endl;
                }
            else if (color1 == "yellow" && color2 == "red")
                {
                        cout << "Those two colors make: orange" << endl;
                }
            else if (color1 == "yellow" && color2 == "blue")
                {
                        cout << "Those two colors make: green" << endl;
                }

            else if (color1 == "blue" && color2 == "yellow")
                {
                        cout << "Those two colors make: green" << endl;
                }
            else
                {
                        cout << "Invalid Input.";
                }

            //Exit the switch
            break;            
        }
        case '4':{
            //Declare Variables
            char mf;//Male-female calculation
            float lbs,inches,yrs;
            float BMR,chocBar=230.0f;
            int nBars;

            //Input Data
            cout<<"Candy bar calculation to maintain weight"<<endl;
            cout<<"Eat less than this to lose weight!"<<endl;
            cout<<"Input male or female with m or f"<<endl;
            cin>>mf;
            cout<<"Input weight(lbs), height(inches), age(yrs)"<<endl;
            cin>>lbs>>inches>>yrs;

            //Process the Data
            if(mf=='m'||mf=='M'){
                BMR=66+6.3*lbs+12.9*inches+6.8*yrs;
            }
            else{
                BMR=655+4.3*lbs+4.7*inches+4.7*yrs;
            }
            nBars=BMR/chocBar+1;

            //Output the processed Data
            cout<<"Eat less than "<<nBars<<" chocolate bars to lose weight"<<endl;

            //Exit the switch
            break;            
        }
        case '5':{
            //Declare Variables
            float n,guess,r;

            //Input Data
            cout<<"Program to calculate the square root"<<endl;
            cout<<"Input a number to see the repetitive approximation ";
            cout<<"of the square root"<<endl;
            cin>>n;

            //Process the Data - first pass
            guess=n/2;
            r=n/guess;
            guess=(guess+r)/2;

            //Output the processed Data
            cout<<fixed<<setprecision(4)<<showpoint;
            cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
            cout<<setw(10)<<sqrt(n)<<endl;

            //Process the Data - second pass
            r=n/guess;
            guess=(guess+r)/2;

            //Output the processed Data
            cout<<fixed<<setprecision(4)<<showpoint;
            cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
            cout<<setw(10)<<sqrt(n)<<endl;

            //Process the Data - third pass
            r=n/guess;
            guess=(guess+r)/2;

            //Output the processed Data
            cout<<fixed<<setprecision(4)<<showpoint;
            cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
            cout<<setw(10)<<sqrt(n)<<endl;

            //Process the Data - fourth pass
            r=n/guess;
            guess=(guess+r)/2;

            //Output the processed Data
            cout<<fixed<<setprecision(4)<<showpoint;
            cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
            cout<<setw(10)<<sqrt(n)<<endl;

            //Process the Data - fifth pass
            r=n/guess;
            guess=(guess+r)/2;

            //Output the processed Data
            cout<<fixed<<setprecision(4)<<showpoint;
            cout<<"r="<<setw(10)<<r<<" guess="<<setw(10)<<guess<<"      sqrt("<<n<<")=";
            cout<<setw(10)<<sqrt(n)<<endl;

            //Exit the switch
            break;
        }
        case '6':{
            //Declare Variables
            int x;//Number to input 10 times
            int sumAll=0,sumEven=0,sumOdd=0,sumPos=0,sumNeg=0;

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0) sumNeg +=x;//Independent if statement

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0) sumNeg +=x;//Independent if statement

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0) sumNeg +=x;//Independent if statement

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0) sumNeg +=x;//Independent if statement

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0) sumNeg +=x;//Independent if statement

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0) sumNeg +=x;//Independent if statement

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0) sumNeg +=x;//Independent if statement

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0) sumNeg +=x;//Independent if statement

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0)   sumNeg +=x;//Independent if statement    

            //Input Data
            cout<<"Input an integer"<<endl;
            cin>>x;

            //Process the Data
            sumAll+=x;
            if(x%2==0)sumEven+=x;//Block of code with else statement, dependent if
            else      sumOdd +=x;//Block of code with previous if statement
            sumPos +=  x>0? x: 0;//Ternary operator
            if(x<0) sumNeg +=x;//Independent if statement    


            //Output the processed Data
            cout<<"Sum All      = "<<setw(5)<<sumAll<<endl;
            cout<<"Sum Even     = "<<setw(5)<<sumEven<<endl;
            cout<<"Sum Odd      = "<<setw(5)<<sumOdd<<endl;
            cout<<"Sum Positive = "<<setw(5)<<sumPos<<endl;
            cout<<"Sum Negative = "<<setw(5)<<sumNeg<<endl;            
            //Exit the switch
            break;
        }
        case '7':{
            //Declare Variables
            unsigned short x;                   //Number to convert
            unsigned char n1000s,n100s,n10s,n1s;//strip off the digits

            //Input Data
            cout<<"Input a number from 1000 to 3000 to convert"<<endl;
            cout<<"to a Roman Numeral"<<endl;
            cin>>x;

            //Process the Data
            if(x<1000||x>3000)return 1;

            //Output the processed Data
            //Thousands Position
            n1000s=(x-x%1000)/1000;
            switch (n1000s){
                case 3:cout<<"M";
                case 2:cout<<"M";
                case 1:cout<<"M";
            }

            //Hundreds Position
            x-=n1000s*1000;
            n100s=(x-x%100)/100;
            switch (n100s){
                case 9:cout<<"CM";break;
                case 8:cout<<"DCCC";break;
                case 7:cout<<"DCC";break;
                case 6:cout<<"DC";break;
                case 5:cout<<"D";break;
                case 4:cout<<"CD";break;
                case 3:cout<<"C";
                case 2:cout<<"C";
                case 1:cout<<"C";
            }

            //Tens Position
            x-=n100s*100;
            n10s=(x-x%10)/10;
            switch (n10s){
                case 9:cout<<"XC";break;
                case 8:cout<<"LXXX";break;
                case 7:cout<<"LXX";break;
                case 6:cout<<"LX";break;
                case 5:cout<<"L";break;
                case 4:cout<<"XL";break;
                case 3:cout<<"X";
                case 2:cout<<"X";
                case 1:cout<<"X";
            }

            //Ones Position
            x-=n10s*10;
            n1s=(x-x%1)/1;
            switch (n10s){
                case 9:cout<<"IX";break;
                case 8:cout<<"VIII";break;
                case 7:cout<<"VII";break;
                case 6:cout<<"VI";break;
                case 5:cout<<"V";break;
                case 4:cout<<"IV";break;
                case 3:cout<<"I";
                case 2:cout<<"I";
                case 1:cout<<"I";
            }            
            //Exit the switch
            break;
        }
        case '8':{
            //Declare Variables
            char card;
            int value=0,excess=0;

            //Input Data
            cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
            cin>>card;


            //Evaluate the first card
            switch(card){
                case 'K':
                case 'Q':
                case 'J':
                case 'T':value+=10;break;
                case '9':
                case '8':
                case '7':
                case '6':
                case '5':
                case '4':
                case '3':
                case '2':value+=(card-48);break;
                case 'A':value+=11;excess=10;
            }


            //Output the value
            cout<<"The value of the hand at this point = "<<value<<endl;

            //Input Data for the second card
            cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
            cin>>card;

            //Evaluate the second card
            switch(card){
                case 'K':
                case 'Q':
                case 'J':
                case 'T':value+=10;break;
                case '9':
                case '8':
                case '7':
                case '6':
                case '5':
                case '4':
                case '3':
                case '2':value+=(card-48);break;
                case 'A':value+=11;excess=10;
            }
            if(value>21)value-=excess;


            //Output the value
            cout<<"The value of the hand at this point = "<<value<<endl;

            //Input Data for the Third card
            cout<<"Input a card A,T,J,Q,K,2-9"<<endl;
            cin>>card;

            //Evaluate the Third card
            switch(card){
                case 'K':
                case 'Q':
                case 'J':
                case 'T':value+=10;break;
                case '9':
                case '8':
                case '7':
                case '6':
                case '5':
                case '4':
                case '3':
                case '2':value+=(card-48);break;
                case 'A':value+=11;excess=10;
            }
            if(value>21)value-=excess;


            //Output the value
            cout<<"The value of the hand at this point = "<<value<<endl;


            //Exit the switch
            break;
        }
        case '9':{
            //Declare Variables
            float crudWt,curntWt;//Crud weight in lbs
            int fi=1,fip1=1,fip2;//Fibonacci sequence
            int days=0;//Number of Days

            //Input Data
            cout<<"How many lbs of crud do you have?"<<endl;
            cin>>crudWt;

            //Process the Data - Day 0
            curntWt=crudWt*=fi;//Crud Weight in lbs
            cout<<"  Fi Days Weight"<<endl;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process the Data - Day 5
            curntWt=crudWt*fip1;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process the Data - Day 10
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process the Data - Day 15
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process the Data - Day 20
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Process the Data - Day 25
            fip2=fip1;
            fip1=fi;
            fi=fip1+fip2;
            curntWt=crudWt*fi;
            days+=5;
            cout<<setw(4)<<fi<<setw(5)<<days<<setw(7)<<curntWt<<endl;

            //Output the processed Data 
            
            //Exit the switch
            break;
        }
        default:cout<<"Not option in menu"<<endl;
    }
    
    //Output the processed Data
    
    //Exit Stage Right!
    return 0;
}