/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on March 30th, 2017, 11:32 AM
 * Purpose:  Display increase in ocean water level
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare and initialize variables
    int years=1;
    float increase=1.5;      //increase in ocean water level per year 
    
    
    //Input data
    for (years=1; years<=25; years++)
    {
        cout<<"Number of increased ocean water level after year "<<years<<
                " = "<<years*increase<<"mm"<<endl;
         
    }    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

