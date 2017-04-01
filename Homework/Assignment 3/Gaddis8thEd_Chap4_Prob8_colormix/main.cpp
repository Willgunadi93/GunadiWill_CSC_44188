/* 
 * File:   main.cpp
 * Author: will gunadi
 * Created on March 20, 2017, 11:32 AM
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
    char r,b,y;
    char red,blue,yellow;           //Primary colors
    char purple, orange, green;     //Secondary Colors
    char fstClr,secClr,mixClr;             //First and second inputted colors
    //Input data
    
    //Get first and second color to mix
    
    cout<<"This program mixes two primary colors to get a secondary"
        <<"color"<<endl;
    cout<<"Type r for red, b for Blue, y for yellow"<<endl;
    cout<<"Enter First color"<<endl;        //First color
    cin>>fstClr;
    cout<<"Enter Second color"<<endl;       //Second color
    cin>>secClr;
    
    if (fstClr=='y' && secClr=='b');
    {
       cout<<"You've mixed green"<<endl; 
    }
    
    if(fstClr=='b' && secClr=='r');
    {
       cout<<"You've mixed purple"<<endl; 
    }
    
    if (fstClr=='r' && secClr=='y');
    {
       cout<<"You've mixed orange"<<endl; 
    }
      
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

