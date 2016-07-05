/* 
 * File:   main.cpp
 * Author: Jeannie Choi
 * Created on July 3, 2016, 2:07 PM
 * Purpose:  Geometry Calculator
 */

//System Libraries
#include <iostream>  //Input/Output Library

using namespace std; //Namespace of the System Libraries

//User Libraries

//Global Constants
const float PI = 3.14159; 

//Function Prototypes

//Execution Begins Here!
int main(int argc, char** argv) {
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
    cout << "1. Calculate the area of a Circle\n";
    cout << "2. Calculate the area of a Rectangle\n";
    cout << "3. Calculate the area of a Triangle\n";
    cout << "4. Quit\n\n";
    cout << "Enter your choice (1-4): ";
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
    
    //Exit Stage Right!
    return 0;
}