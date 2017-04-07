/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on April 1st, 2017 7:58PM
 * Purpose:  Table to convert celcius to fahrenheit
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    
    int cels, minCel=0, maxcel=20;
    float CNVTCEFA;
    //Input data
    cout<<"Convert Celsius to Fahrenheit."<<endl;
    cout<<"-----------------------------------"<<endl;
    
    //Initialize for loop
    for (cels=minCel; cels<=maxcel; cels++)
    {
        cout<<fixed<<setprecision(2)<<endl;
        cout<<cels<<"\t\t"<<(cels*9/5)+32<<endl;
    }
    
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

