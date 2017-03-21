/* 
 * File:   main.cpp
 * Author: Dr. Will Gunadi
 * Created on March 14, 2017 9:07 AM
 * Purpose:  Hello World Template
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
const int MIN=60;          //Seconds in a minute
const int HOUR=60*MIN;    //How many hours in an hour
const int DAY=24*HOUR;    //HOw many seconds in a day
const int WEEK=DAY*7;     //How many seconds in a week
const int YEAR=52*WEEK;   //How many seconds in a year
const int MNTH=YEAR/12;    //How many seconds in a month
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    int nSec;                      //Number of seconds to convert 
    int nYears, nMnths, nWeeks, nDay, nHr, nMin;
    //Input or initialize values Here
    cout<<"This program converts seconds to years, days hours, month week"<<endl;;
    cout<<"Input number of seconds to convert = "<<endl;
    cin>>nSec;
    //Process/Calculations Here
    nYears=nSec/YEAR;
    cout<<nSec/YEAR<<" Years";
    nSec-=nYears*YEAR;
    nMnths=nYears/12;
    
    cout<<nWeeks<<" Weeks";
    nSec-=nWeeks*WEEK;
    
    cout<<nMnths<<" Months";
    nWeeks=nSec/WEEK;
    
    nDay=nSec/DAY;   
    cout<<nDay<<" Days";
    nSec-=nDay*DAY;
    
    nHr=nSec/HOUR;
    cout<<nHr<<" Hours";
    nSec-=nHr*HOUR;
    
    nMin=nSec*MIN;
    cout<<nMin<<" Minutes";
    
            
            
    //Output Located Here
   

    //Exit
    return 0;
}

