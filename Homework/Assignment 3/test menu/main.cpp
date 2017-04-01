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

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char menu;
    
    do
    {
     cout<<"Homework problem menu."<<endl;
     cout<<"Enter number to display homework assignment"<<endl<<endl;
     cout<<"Type 1 for Ocean water level problem"<<endl;
     cout<<"type 2 Calories burned problem"<<endl;
     cout<<"Type 3 for problem 3"<<endl;
     cout<<"type 4 for problem 4"<<endl;
     cout<<"Type 5 for problem 5"<<endl;
     cout<<"type 6 for problem 6"<<endl;
     cout<<"Type 7 for problem 7"<<endl;
     cout<<"type 8 for problem 8"<<endl;
     cout<<"Type 9 for problem 9"<<endl;
     cout<<"Type 0 to exit program"<<endl<<endl;
     cout<<"------------------------------------"<<endl;
     
     cout<<"Enter problem number"<<endl;
     cin>>menu;
     
     switch(menu)
     {
             case '1': 
             {
                {
                //Declare and initialize variables
                int years=1;
                float increase=1.5;     //increase in ocean water level per year 


                //Input data
                for (years=1; years<=25; years++)
                {
                    cout<<"Number of increased ocean water level after year "
                            <<years<<" = "<<years*increase<<"mm"<<endl;                            

                }    

                //Exit stage right!
                return 0;
                }
                 break;
             }
             case '2':
             {
                {
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
                 break;
                }
             case '3':
             {
                 cout<<"problem 3"<<endl<<endl<<endl;
                 break;
             }
             case '4':
             {
                 cout<<"problem 4"<<endl;
                 break;
             }
             case '5':
             {
                 cout<<"problem 5"<<endl;
                 break;
             }
             case '6':
             {
                 cout<<"problem 6"<<endl;
                 break;
             }
             case '7':
             {
                 cout<<"problem 7"<<endl;
                 break;
             }
             case '8':
             {
                 cout<<"problem 8"<<endl;
                 break;
             }
             case '9':
             {
                 cout<<"problem 9"<<endl;
                 break;
             }
             case 'T':
             {
                 cout<<"problem 10"<<endl;
                 break;
             }
         default:{ cout<<"Exit program!"<<endl;
         break;
         }
     }
             
    }
    while(menu>='1' && menu<='9');
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

