/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on April 1st, 2017, 11:32 AM
 * Purpose:  Calculate budget.
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
    float budget, mnthExp, tMnthEx=0;
    int numExp;             //number of expenses    
   
    //Input data
    cout<<"Enter amount that you've budgeted for the month:"<<endl;
    cin>>budget;
    cout<<"Enter number of expenses for the month:"<<endl;
    cin>>numExp;
    
    cout<<fixed<<setprecision(2)<<showpoint<<endl;
    //initiate loop
    for(int i=1; i<=numExp; i++)        //i=expenses
    {
      cout<<"Enter expenses"<<endl;
      cin>>mnthExp;
      tMnthEx += mnthExp;
    }
    //Output the transformed data
    if (tMnthEx>budget)
    {
        cout<<"You are over the budget by $"<<tMnthEx-budget<<endl;
    }
    if (tMnthEx<budget)
    {
        cout<<"you are under the budget by $"<<budget-tMnthEx<<endl;
    }
    //Exit stage right!
    return 0;
}

