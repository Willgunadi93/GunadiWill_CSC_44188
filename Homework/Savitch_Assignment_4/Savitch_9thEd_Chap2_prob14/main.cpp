/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on March 10th, 2017, 11:32 AM
 * Purpose: Calculate total grade for n Classroom exercises as percentage
 * 
 *           
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
    int nProb, score, maxPts;        //# of problems, points scored, total pts
    float totScore = 0, totPts = 0;
    float percPts;
    //Input data
    cout << "Enter number of classroom exercise: ";
    cin >> nProb;
    
    //Initiate loop
    for (int i = 1; i <= nProb; i++)
    {
       cout << "Enter points scored for " << i << " exercise." << endl;
       cin >> score;
       totScore += score;
       
       cout << "Enter total points possible for exercise: " << endl;
       cin >> maxPts;
       totPts += maxPts;
       
       percPts = (totScore/totPts);
    
    }
    
  
    
    //Map inputs to outputs or process the data
  
    //Output the transformed data
        cout << "your total is " << totScore << " out of \n"
         << totPts << " points, or " << percPts*100 << "%" << endl;  
    //Exit stage right!
    return 0;
}
