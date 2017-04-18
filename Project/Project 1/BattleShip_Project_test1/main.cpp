/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on March 13th, 2017, 
 * Purpose:  Simulate a battleship game.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //to randomize ship locations
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const int row = 8;   
const int column = 8;
int board[row][column];

//Function Prototypes
void restart();
void myBoard();
bool guess(int x, int y);
void ships();

//Execution begins here
int main(int argc, char** argv) {
    //Declare variables   
    int maxShip = 8;
    int shpDown = 0;
    int num1, num2;
    srand(time(0));        //Randomize location of ships
    char ans;
    
    
    //Output the transformed data
    
    
    ships();
    myBoard();
    cout << "------------------------" << endl;
    guess(7,0);
    myBoard();
   
    //Exit stage right!
    return 0;
}

void restart(){
    for (int a = 0; a < row; a++)
    {
        for( int b = 0; b < column; b++)
            board[a][b] = 0;
    }
}

void myBoard(){                 //Function to display board.
    for (int a = 0; a < row; a++)
    {
        for( int b = 0; b < column; b++)
        {
            cout << "[" << board[a][b] << "]";
            
        }    
        cout << endl;           //Rows
    }
    
        
}

void ships(){
    int maxShip = 8;
    int shpDown = 0;
    
    while (shpDown < maxShip)           //Set the ship's location
    {
        int x = rand() % row;
        int y = rand() % column;
        
        
        if (board[x][y] != 1)
        {
            shpDown++;
            board[x][y] = 1;
        
        }
    }
}

bool guess(int x, int y)
{
    if(board[x][y] == 1)
    {
        board[x][y] = 2;
        return true;
    }
    return false;
}