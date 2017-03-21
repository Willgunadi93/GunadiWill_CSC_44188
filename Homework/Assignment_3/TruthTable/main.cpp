/* 
 * File:   main.cpp
 * Author: Will Gunadi
 * Created on July 19, 2016, 9:07 AM
 * Purpose:  Truth Table
 */

//System Libraries Here
#include <iostream>
using namespace std;

//User Libraries Here

//Global Constants Only, No Global Variables
//Like PI, e, Gravity, or conversions

//Function Prototypes Here

//Program Execution Begins Here
int main(int argc, char** argv) {
    //Declare all Variables Here
    bool X,Y;
    //output table header
    cout<<"X Y !X !Y X||Y X&&Y X^Y X^Y^Y X^Y^X !(X||Y) !X&&!Y !(X&&Y) !X||!Y"<<endl;
    
    //Determine first row of table
    X=true; Y=false;
    cout<<(X? 'T':'F')<< " ";
    cout<<(Y? 'T':'F')<< "  ";
    cout<<(!X? 'T':'F')<< "  ";
    cout<<(!Y? 'T':'F')<< "   ";
    cout<<(X||Y? 'T':'F')<< "   ";
    cout<<(X&&Y? 'T':'F')<< "    ";
    cout<<(X^Y? 'T':'F')<< "    ";
    cout<<((X^Y)^Y? 'T':'F')<< "    ";
    cout<<(X^Y^X? 'T':'F')<< "       ";
    cout<<(!(X||Y)? 'T':'F')<< "       ";
    cout<<(!X&&!Y? 'T':'F')<< "        ";
    cout<<(!(X&&Y)? 'T':'F')<< "      ";
    cout<<(!X||!Y? 'T':'F')<< "        ";
    cout<<endl;
     //Determine second row of table
    X=true; Y=true;
    cout<<(X? 'T':'F')<< " ";
    cout<<(Y? 'T':'F')<< "  ";
    cout<<(!X? 'T':'F')<< "  ";
    cout<<(!Y? 'T':'F')<< "   ";
    cout<<(X||Y? 'T':'F')<< "   ";
    cout<<(X&&Y? 'T':'F')<< "    ";
    cout<<(X^Y? 'T':'F')<< "    ";
    cout<<((X^Y)^Y? 'T':'F')<< "    ";
    cout<<(X^Y^X? 'T':'F')<< "       ";
    cout<<(!(X||Y)? 'T':'F')<< "       ";
    cout<<(!X&&!Y? 'T':'F')<< "        ";
    cout<<(!(X&&Y)? 'T':'F')<< "      ";
    cout<<(!X||!Y? 'T':'F')<< "        ";
    cout<<endl;
     //Determine first row of table
    X=false; Y=true;
    cout<<(X? 'T':'F')<< " ";
    cout<<(Y? 'T':'F')<< "  ";
    cout<<(!X? 'T':'F')<< "  ";
    cout<<(!Y? 'T':'F')<< "   ";
    cout<<(X||Y? 'T':'F')<< "   ";
    cout<<(X&&Y? 'T':'F')<< "    ";
    cout<<(X^Y? 'T':'F')<< "    ";
    cout<<((X^Y)^Y? 'T':'F')<< "    ";
    cout<<(X^Y^X? 'T':'F')<< "       ";
    cout<<(!(X||Y)? 'T':'F')<< "       ";
    cout<<(!X&&!Y? 'T':'F')<< "        ";
    cout<<(!(X&&Y)? 'T':'F')<< "      ";
    cout<<(!X||!Y? 'T':'F')<< "        ";
    cout<<endl;
    
     //Determine first row of table
    X=false; Y=false;
    cout<<(X? 'T':'F')<< " ";
    cout<<(Y? 'T':'F')<< "  ";
    cout<<(!X? 'T':'F')<< "  ";
    cout<<(!Y? 'T':'F')<< "   ";
    cout<<(X||Y? 'T':'F')<< "   ";
    cout<<(X&&Y? 'T':'F')<< "    ";
    cout<<(X^Y? 'T':'F')<< "    ";
    cout<<((X^Y)^Y? 'T':'F')<< "    ";
    cout<<(X^Y^X? 'T':'F')<< "       ";
    cout<<(!(X||Y)? 'T':'F')<< "       ";
    cout<<(!X&&!Y? 'T':'F')<< "        ";
    cout<<(!(X&&Y)? 'T':'F')<< "      ";
    cout<<(!X||!Y? 'T':'F')<< "        ";
    cout<<endl;
    //Exit
    return 0;
}

