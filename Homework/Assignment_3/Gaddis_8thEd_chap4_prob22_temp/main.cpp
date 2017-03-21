/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on March 20, 2017, 11:32 AM
 * Purpose:  Temperature freezing point.
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
    signed int ethAl, merc, oxy, water;        //List of substances
    signed int temp;                           //Temperature
    
    cout<<"This program list all substance that\n"
        <<"freezes at inputted temperature."<<endl;
    cin>>temp;    
    
    
    if (temp<-173)
        cout<<"Ethyl Alcohol will freeze at this temperature"<<endl;
    else if (temp>172)
        cout<<"Ethyl Alcohol will boil at this temperature"<<endl;
    
    if (temp<-38)
        cout<<"Mercury will freeze at this temperature"<<endl;
    else if (temp>676)
        cout<<"Mercury will boil at this temperature"<<endl;
    
    if (temp<-362)
        cout<<"OxygenAlcohol will freeze at this temperature"<<endl;
    else if (temp>-308)
        cout<<"Oxygen will boil at this temperature"<<endl;
    
    if (temp<32)
        cout<<"Water will freeze at this temperature"<<endl;
    else if (temp>212)
        cout<<"Water will boil at this temperature"<<endl;
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

