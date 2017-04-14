/* 
 * File:   main.cpp
 * Author: Will Gunadi  
 * Created on March 11th, 2017, 11:32 AM
 * Purpose:  Print Prime Numbers
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
    int fstNum, lastNum;
    
    //Input data
    cout << "Enter First Number:\n";
    cin >> fstNum;
    cout << "Enter Last Number:\n";
    cin >> lastNum;
    
    //Initiate loop
    bool prime = true;
    for(int num = fstNum; num <= lastNum; num++)
    {
        for(int test = 2; test < num - 1; test++)
            {               
                if(num % test == 0)                                
                {
                    prime = false;
                }    
        if(prime)
            cout << num << endl;    
        }
        
    }
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

