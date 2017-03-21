/* 
 * File:   main.cpp
 * Author: Will Gunadi
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
    int num1;           //First number to compare
    int num2;           //Second number to compare
    int bignum;          //max number
    int minnum;          //min number
   
    
    //Input data
    cout<<"This program compares two number and determine";
    cout<<" which one is bigger"<<endl;
    cout<<"Enter First number"<<endl;
    cin>>num1;
    cout<<"Enter Second number"<<endl;
    cin>>num2;
    
    
    //Map inputs to outputs or process the data
    bignum=(num1>num2)? num1 :
        num2;
    
    //Output the transformed data
    cout<<"Bigger number = "<<bignum<<endl;
    //Exit stage right!
    return 0;
}

