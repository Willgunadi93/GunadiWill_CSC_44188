/* 
 * File:   main.cpp
 * Author: Will Gunadi  
 * Created on March 04th 2017, 11:32 AM
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
    int astrk, sales, store;
    int sales1, sales2, sales3, sales4,sales5;
    
    //Initialize loop and input
    cout << "Enter today's sales for store 1" <<endl;
    cin >> sales1;
    cout << "Enter today's sales for store 2" <<endl;
    cin >> sales2;
    cout << "Enter today's sales for store 3" <<endl;
    cin >> sales3;
    cout << "Enter today's sales for store 4" <<endl;
    cin >> sales4;
    cout << "Enter today's sales for store 5" <<endl;
    cin >> sales5;
    
        
    //Sales Bar Chart
    cout << "Sales Bar Chart ------------------" << endl;
    cout << "(Each * = $100" << endl;
    
      cout << "Store 1" << " =";
      for(int i=1; i <= sales1/100; i++)
      {                   
          cout<< "*";
      }
      cout << endl;
      
      cout << "Store 2" << " =";
      for(int i=1; i <= sales2/100; i++)
      {                   
          cout<< "*";
      }
      cout << endl;
      
      cout << "Store 3" << " =";
      for(int i=1; i <= sales3/100; i++)
      {                   
          cout<< "*";
      }
      cout << endl;
      
      cout << "Store 4" << " =";
      for(int i=1; i <= sales4/100; i++)
      {                   
          cout<< "*";
      }
      cout << endl;
      
      cout << "Store 5" << " =";
      for(int i=1; i <= sales5/100; i++)
      {                   
          cout<< "*";
      }
      cout << endl;      
    
    
    
    //Exit stage right!
    return 0;
}

