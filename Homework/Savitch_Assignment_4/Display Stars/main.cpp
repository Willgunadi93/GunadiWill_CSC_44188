/* 
 * File:   main.cpp
 * Author: Dr. Mark E. Lehr
 * Created on February 14, 2017, 11:32 AM
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
    int count, num;

    // Initiate loop
    cout << "Enter integer from [1-10]: " << endl;
    cin >> num;
    
    for( count = 1; count <= num; count++)
    {
        for( int i = 1; i <= count; i++)
        {
            cout << "x";
        }
        cout << endl;
    }
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

