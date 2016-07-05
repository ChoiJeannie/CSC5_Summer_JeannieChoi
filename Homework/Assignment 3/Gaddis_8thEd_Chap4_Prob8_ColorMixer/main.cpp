/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 3, 2016, 12:14 PM
 * Purpose:  Color Mixer
 */

//System Libraries
#include <iostream>  //Input/Output Library
#include <string>    //String Objects
using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
    //Declare Variables
    string color1, color2;
    
    //Input Data
    cout<<"Choose 2 primary colors. (red, blue, yellow)"<<endl;
    cout<<"Input color 1: ";
    cin >>color1;

    cout<<"Input color 2: ";
    cin >>color2;

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
    
    //Exit Stage Right!
    return 0;
}