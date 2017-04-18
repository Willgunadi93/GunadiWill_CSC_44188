/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on March 14th, 2017, 11:32 AM
 * Purpose:  Template to be utilized in creating
 *           solutions to problems in our CSC/CIS 5 
 *           class.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes
void highNum();
//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int number, digit1, digit2, digit3;    

    //Input data
    cout << "Enter a number [0-999] desired baking"
         << "temperature\n";
    cin >> number;
    
    //Calculation for digits
    digit1 = number / 100;
    digit2 = (number / 10) % 10;
    digit3 = number % 10; 
    
    //First digit
    if (digit1 == 1 || digit1 == 4 || digit1 == 7)
    {
        digit2 = 0;
        digit3 = 0;
        digit1++;
    }
    
    //Second digit
    
    if(digit2 == 1 || digit2 == 4 || digit2 == 7)
    {    
        digit2++;
        digit3 = 0;
    }

    //Third digit
    
    else if(digit3 == 1 || digit3 == 4 || digit3 == 7)
    {
        digit3++;
    }

    //Output the transformed data
    cout << "Desired temperature: " << number << endl; 
    cout << "Next highest Temperature: " << digit1 << digit2
         << digit3 << " degrees" << endl;   
    //Exit stage right!
    return 0;
}

void highNum(){
    
}