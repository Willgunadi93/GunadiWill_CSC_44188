/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on March 20, 2017, 11:32 AM
 * Purpose:  Running the race
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <string>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    string name1, name2, name3;
    float time1, time2, time3;
    
    //Input data
    cout<<"Enter name of runner 1"<<endl;
    getline(cin, name1);
    cout<<"Enter time of runner 1"<<endl;
    cin>>time1; 
    cin.ignore();
    
    cout<<"Enter name of runner 2"<<endl;
    getline(cin,name2);
    cout<<"Enter time of runner 2"<<endl;
    cin>>time2;
    cin.ignore();
    
    cout<<"Enter name of runner 3"<<endl;
    getline(cin,name3);
    cout<<"Enter time of runner 3"<<endl;
    cin>>time3;
    
    
    if (time1<time2 && time1<time3)              //Runner 1 is 1st
    {
        if(time2<time3) 
        { 
        cout<<"runner 1 = "<<name1<<endl;       //Runner 1 - Runner 2 - Runner 3
        cout<<"runner 2 = "<<name2<<endl;
        cout<<"runner 3 = "<<name3<<endl;
        }
        
        else if (time3<time2)
        {
        cout<<"runner 1 = "<<name1<<endl;
        cout<<"runner 2 = "<<name3<<endl;       //Runner 1 - Runner 3 - Runner 2
        cout<<"runner 3 = "<<name2<<endl;
        
        }
    }
    
    if (time2<time1 && time2<time3)        //Runner 2 is 1st
    
    {
        if(time1<time3) 
        { 
        cout<<"runner 1 = "<<name2<<endl;
        cout<<"runner 2 = "<<name1<<endl;     //Runner 2 - Runner 1 - Runner 3
        cout<<"runner 3 = "<<name3<<endl;
        }
        
        else if (time3<time1)
        {
        cout<<"runner 1 = "<<name2<<endl;
        cout<<"runner 2 = "<<name3<<endl;     //Runner 2 - Runner 3 - Runner 1
        cout<<"runner 3 = "<<name1<<endl;
        
        }
    }
    
    if (time3<time1 && time3<time2)     //Runner 3 is 1st
    
    {
        if(time1<time2) 
        { 
        cout<<"runner 1 = "<<name3<<endl;
        cout<<"runner 2 = "<<name1<<endl;     //Runner 3 - Runner 1 - Runner 2 
        cout<<"runner 3 = "<<name2<<endl;
        }
        
        else if (time2<time1)
        {
        cout<<"runner 1 = "<<name3<<endl;
        cout<<"runner 2 = "<<name2<<endl;     //Runner 3 - Runner 2 - Runner 1
        cout<<"runner 3 = "<<name1<<endl;
        
        }
    }
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

