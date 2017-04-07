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
#include <ctime>
#include <cstdlib>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //establish random number seed generator
    srand(static_cast<unsigned int>(time(0)));
    
    //Declare and initialize variables
    int randNum=rand()%30+1;        //Random number between 1-30
    int guess;                      //User input guess between 1-30
        
    //Input data
    cout<<"Guess a number between 1-30!"<<endl<<endl;
    cin>>guess;
    
    //Loop
    while(guess>=1 && guess<=30)
    {
        if (guess<randNum)
        {
            cout<<"Too low! Try again."<<endl;
            cin>>guess;
        }
        else if (guess>randNum)
        {
            cout<<"Too high! Try again."<<endl;
            cin>>guess;
        }
        else 
        {
            cout<<"You've guessed the correct number!"<<endl;
            cout<<"Exit program"<<endl;
            return 0;
        }
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    cout<<randNum<<endl;
    //Exit stage right!
    return 0;
}

