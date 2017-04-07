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
    int randNum;
    int max=0, min=0;
    //Input data
    
    cout<<"Enter random integers"<<endl;
    cin>>randNum;
    
    //Initialize loop
    
    while ( randNum != -99){
        cout<<"Enter integers"<<endl;
        cin>>randNum;
        
        if (randNum>max) max=randNum;
        if (randNum<min && randNum<max && randNum != -99) min=randNum;
    }
    
    cout<<"Largest number is "<<max<<endl;
    cout<<"smallest number is "<<min<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

