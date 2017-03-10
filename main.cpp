/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on February 14, 2017, 11:32 AM
 * Purpose:  Calculate how much annual property tax a senior homeowner
 * would have to pay and its quarterly tax bill.
 */

//System Libraries
#include <iostream>  //Input - Output Library
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float assmPer = .60f;      //Assesment value percentage of real value
//Function Prototypes

//Execution begins here
int main(int argc, char** argv) 
{
    //Declare variables
   long int  landVal;      //Land Value
    float taxVal, assmVal, propTax=2.64,taxbrk=5000.0f;      //Property tax per 100
    float qrttax;
    //Initialize variables
    
    //Input data
    cout<<"Enter property value"<<endl;
    cin>>landVal;
    //Map inputs to outputs or process the data
    assmVal=landVal*assmPer;
    taxVal=((assmVal-taxbrk)/100)*propTax;
    qrttax=taxVal/4;
    //output Data
    
    cout<<"Assesment value = "<<assmVal<<endl;
    cout<<"Property Tax = "<<taxVal<<endl;
    cout<<"Quarterly Tax Bill"<<qrttax<<endl;
    
}