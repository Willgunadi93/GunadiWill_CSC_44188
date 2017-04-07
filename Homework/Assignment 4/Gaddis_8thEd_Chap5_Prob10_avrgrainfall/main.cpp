/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on April 1st, 2017, 11:32 AM
 * Purpose:  Calculate Average rainfall.
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
    int years, rainfall,totRF=0;        //# 0f years and rainfall
    int cYears,mthlrnfll,nMonth;                 //Calculated number of years
    int totMnth=0;
    
    //Input data
    cout<<"This program calculates the average rainfall over n Years"<<endl;
    cout<<"Enter number of years for the data to collect"<<endl;
    cin>>years;
    
    if (years<1)
    {
        cout<<"Input Error! Atleast 1 year"<<endl;
        return 1;
    }
                
    //initiate outer loop
    for (cYears=1; cYears<=years; cYears++)
    {
        //Initiate inner loop
        for(nMonth=1; nMonth<=12; nMonth++)
        {
            cout<<"How many inches of rainfall this month?"<<endl;
            cin>>rainfall;
            totRF += rainfall;      //Accumulate total rainfall
            
        }
        totMnth += nMonth;      //Accumulate total months
    }
    
    //Output the transformed data
    cout<<"Total number of months     = "<<totMnth<<endl;
    cout<<"Total inches of rainfall   = "<<totRF<<endl;
    cout<<"Average rainfall per month = "<<static_cast<float>(totRF)/(nMonth*years)<<endl;
    //Exit stage right!
    return 0;
}

