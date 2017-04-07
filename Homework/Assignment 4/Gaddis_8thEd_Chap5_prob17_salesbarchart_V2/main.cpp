/* 
 * File:   main.cpp
 * Author: Will Gunadi  
 * Created on March 04th 2017, 11:32 AM
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
    int astrk, sales, store;
    int sales1, sales2, sales3, sales4,sales5;
    
    //Initialize loop and input
    for(store=1; store<=5; store++)
    {
        cout << "Enter today's sales for store " << store << endl;
        cin >> sales;
        cout << "Store " << store << " = ";
        for (int i=1; i <= sales/100; i++)
        {
            cout<<"*";
        }
        cout << endl;
    }
    
    
    //Exit stage right!
    return 0;
}

