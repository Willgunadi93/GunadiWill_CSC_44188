/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on March 3rd, 2017, 11:32 AM
 * Purpose:  Square Display.
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
    int count,num;
    
    //Input data
    cout<<"Enter a positive integer from [1-15]"<<endl;
    cin>>count;
            
    //Initiate loop
    
    for (num=1; num<=count; num++)
        switch (count){
            
            case 1:{               
                cout<<"x"<<endl; break;
            }
            case 2:{                
                cout<<"xx"<<endl; break;
            }
            case 3:{
                cout<<"xxx"<<endl; break;
            }
            case 4:{
                cout<<"xxxx"<<endl; break;
            }
            case 5:{
                cout<<"xxxxx"<<endl; break;
            }
            case 6:{
                cout<<"xxxxxx"<<endl; break;
            }
            case 7:{
                cout<<"xxxxxxx"<<endl; break;
            }
            case 8:{
                cout<<"xxxxxxxx"<<endl; break;
            }
            case 9:{
                cout<<"xxxxxxxxx"<<endl; break;
            }
            case 10:{
                cout<<"xxxxxxxxxx"<<endl; break;
            }
            case 11:{
                cout<<"xxxxxxxxxxx"<<endl; break;
            }
            case 12:{
                cout<<"xxxxxxxxxxxx"<<endl; break;
            }
            case 13:{
                cout<<"xxxxxxxxxxxxx"<<endl; break;
            }
            case 14:{
                cout<<"xxxxxxxxxxxxx"<<endl; break;
            }
            case 15:{
                cout<<"xxxxxxxxxxxxxxx"<<endl; break;
            }
            
        }
            
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

