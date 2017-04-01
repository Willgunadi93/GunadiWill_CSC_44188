/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on March 20, 2017, 11:32 AM
 * Purpose:  Mobile Service Provider.
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
    char pck;              //Represent Package A, B, C.
    int minutes;             //Minutes used/provided
    float totBill;            //Total amount due in $;s
    
    
    float totA=39.99f,       //Total Cost of package A per month
          totB=59.99f,       //Total Cost of package B per month 
          totC=69.99f;       //Total Cost of package C per month
    
    float addA=0.45f,        //Additional cost per min over the alloted time
          addB=0.40f,        //Additional cost per min over the alloted time
          addC=0.00f;        //Additional cost per min over the alloted time
    //Input data
    cout<<"This program calculates monthly bill based on\n"
          "mobile service package chosen"<<endl;
    cout<<"Enter Which package subscribed to: A, B, or C : "<<endl;
    cin>>pck;
    
    cout<<setprecision(2)<<fixed<<endl;     //Decimal 2 places
    
    switch(pck)
    {
        case 'a':
        case 'A':
            cout<<"how many minutes were used?"<<endl;
            cin>>minutes;            
            if(minutes<=450) totBill=totA;
            else if (minutes>40) totBill=totA+((minutes-450)*addA);
            cout<<"Your total bill is = "<<totBill<<endl;
            if (totBill>totB)
            {
                cout<<"you could save "<<totBill-totB<<" $'s"<<endl;
            }
            break;
            
        case 'b':
        case 'B':
            cout<<"how many minutes were used?"<<endl;
            cin>>minutes;
            if(minutes<=900) totBill=totB;
            else if (minutes>900) totBill=totB+((minutes-900)*addB);                       
            cout<<"Your total bill is = "<<totBill<<endl;
            if (totBill>totA)
            {
                cout<<"you could save "<<totBill-totA<<" $'s by";
                cout<<" choosing package A"<<endl;
            }
            break;
        
        case 'c':
        case 'C':
            cout<<"Your total bill is = "<<totC<<endl; 
           
    }       
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

