/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on march 31st, 2017, 11:32 AM
 * Purpose:  Calculate calories burned after x minutes on treadmill
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
    float calBurn=3.6;      //calories burned per min
    int minutes;
    
    //Initiate loop
    for(minutes=0; minutes<=30; minutes++)
    {
        if (minutes==5 || minutes==10 || minutes==15 || minutes==20 ||
                minutes==25 || minutes==30)
        {
            cout<<"calories burned after "<<
                    minutes<<" minutes = "<<calBurn*minutes<<endl;
        }
    }
    return 0;
}

