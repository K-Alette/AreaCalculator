// This program calculates the area of objects based on user input.
// Kodi Lein
#include <iostream>
#include <math.h>
using namespace std;

//function prototypes
void displayMenu();
int getChoice(int, int);
double findSqRecArea();
double findCircleArea();
double findTriangleArea();

//definition of pi
const double pi = 3.14159;

//******* MAIN ********
int main()
{
    int choice, input, min = 1, max = 4; //define number user chooses
    do
    {
        displayMenu();
        choice = getChoice(1, 4); //number user chooses

        if (choice == 1)
        {
            cout << "Area = " << findSqRecArea() << endl; //print function for finding area of square
            cout << "------------------------------------------------------------" << endl << endl;
        }
        else if (choice == 2)
        {
            cout << "Area = " << findCircleArea() << endl; //print function for finding area of circle
            cout << "------------------------------------------------------------" << endl << endl;
        }
        else if (choice == 3)
        {
            cout << "Area = " << findTriangleArea() << endl; //print function for finding area of triangle
            cout << "------------------------------------------------------------" << endl << endl;
        }

    } while (choice != 4); //menu only repeats if user does not choose 4
    if (choice == 4)
        cout << "The program has ended." << endl;

    return 0;
}

//********** FUNCTIONS ****************
//Display Menu
void displayMenu()
{
    cout << "To find the area of an object, choose corresponding number: \n\n";
    cout << "\t1 -- Square or Rectangle\n \t2 -- Circle\n \t3 -- Right Triangle\n \t4 -- Quit\n";
}
//Get Choice
int getChoice(int min, int max)
{
    int input;

    // Get and validate the input
    cin >> input;
    while (input < min || input > max)
    {
        cout << "Invalid input. Enter an integer between 1 and 4: ";
        cin >> input;
    }
    return input;
}
//Area of Square
double findSqRecArea()
{
    double sqLength, sqWidth;

    cout << "Enter the length and width separated by a space: ";
    cin >> sqLength >> sqWidth;

    return sqLength * sqWidth;

}
//Area of Circle
double findCircleArea()
{
    double radius;

    cout << "Enter the radius of the circle: ";
    cin >> radius;

    return pi * radius * radius;
}

//Area of Triangle
double findTriangleArea()
{
    double sideA, sideB;

    cout << "Enter length of side A: ";
    cin >> sideA;
    cout << "Enter length of side B: ";
    cin >> sideB;

    return (sideA * sideB) / 2;
}



