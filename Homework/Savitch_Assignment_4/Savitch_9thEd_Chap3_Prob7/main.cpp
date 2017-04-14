/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on March 12th, 2017, 11:32 AM
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

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int celc, fahrht;     // Celsius and Fahrenheit
    //Initialize variables
    celc = 100;
    //Initiate loop.
    
    while (celc != fahrht)
    {
        celc--;
        fahrht = ((9 * celc) / 5) + 32;
        cout << celc << "degree C = " << fahrht 
             << " degrees F" << endl;

    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

