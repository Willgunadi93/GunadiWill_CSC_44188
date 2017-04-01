/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on March 20, 2017, 11:32 AM
 * Purpose:  Geometry Calculator
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <iomanip>
#include <cmath>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants

//Function Prototypes

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    char choice;       //Choice for menu
    float pi=3.14159f;          //Formula for pi
    float area,rad, lgth, wdth, base, hght;                 //Area 
    
    
    //Input data
    cout<<"\tGeometry Calculator"<<endl;
    cout<<"Choose one\n"<<endl;
    cout<<"  1. Calculate the area of a circle"<<endl;
    cout<<"  2. Calculate the area of a rectangle"<<endl;
    cout<<"  3. Calculate the area of a triangle"<<endl;
    cout<<"  4. Quit"<<endl;
    
    cin>>choice;
    cout<<setprecision(2)<<fixed<<endl;
    
    switch(choice)
    { 
            case '1':
                cout<<"What is the radius of the circle?"<<endl;
                cin>>rad;
                area=pi*pow(rad,2);
                cout<<"The area of the circle is = "<<area<<endl;               
                break;
            case '2':   
                cout<<"What is the length of the rectangle?"<<endl;
                cin>>lgth;
                cout<<"What is the width of the rectangle?"<<endl;
                cin>>wdth;
                area=lgth*wdth;
                cout<<"The area of the rectangle is = "<<area<<endl;
                break;
            case '3':
                cout<<"What is the length of triangle's base?"<<endl;
                cin>>base;
                cout<<"What is the height of the triangle?"<<endl;
                cin>>hght;
                area=base*hght*.5;
                cout<<"The area of the triangle is = "<<area<<endl; 
                break;
            case '4':    
                cout<<"Program is ending"<<endl;
                break;
            default: cout<<"Error: Must choose option 1-4 only"<<endl;  
    }        
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

