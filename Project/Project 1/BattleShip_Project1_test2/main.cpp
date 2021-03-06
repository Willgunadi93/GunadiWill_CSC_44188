/* 
 * File:   main.cpp
 * Author: William Gunadi
 * Created on March 13th, 2017, 
 * Purpose:  Simulate a battleship game.
 */

//System Libraries
#include <iostream>  //Input - Output Library
#include <ctime>     //to randomize ship locations
#include <string>
#include <iomanip>
using namespace std; //Name-space under which system libraries exist

//User Libraries

//Constants
const int row = 4;   
const int column = 4;
int board[row][column];

//Function Prototypes
void restart();
void myBoard();
bool guess(int x, int y);


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables   
    int maxShip = 2, shpCtr = 8;    //Max ship/Ship counter
    int shpDown = 0;
    int num1, num2;
    int counter = 0, hits = 0, misses = 0, guesses = 0;
    srand(time(0));             //Randomize location of ships
    char ans, stop;
    string name;
    float perHit, perMiss;
    
    cout << fixed << setprecision(2);           //Decimals 2 places
    
    //Input data
    cout << "Enter name:";
    cin >> name;
    cout << "Hello " << name << "!" << endl;
    cout << "This program simulates a battleship game!" << endl;

    cout << "---------------------" << endl;
    cout << "would you like to play?" << endl;
    cout << " Enter 'Y' or 'y' to play or anything else to quit" << endl;
    cin >> ans;
    
    myBoard();
    
    while (shpDown < maxShip)           //Set the ship's location
    {
        int x = rand() % row;       // Randomly place ship in rows
        int y = rand() % column;    // Randomly place ship in columns
        
        
        if (board[x][y] != 1)       //1 indicates there's a ship in the location
        {
            shpDown++;              //Increase ship until reaches maxShip
            board[x][y] = 1;       
        }
    }
    
    
    while( ans == 'y' || 'Y')       //Play again or not
    {                   
    cout << "Please enter two numbers [0-7] to guess location "
         << "of ships" << endl;
    cin >> num1;            //[0-7] # rows downward
    cin >> num2;            //[0-7] # column to the right
    
    
    
        if( guess(num1, num2))
        {
            cout << "Hit!" << endl;
            shpCtr--;
            hits++;         //counter for # of hits
            guesses++;      //counter for # of guesses
            cout << "number of ships left " << shpCtr << endl;
            
        }
        else 
        {       
            cout << "Miss! Try again!" << endl; 
            misses++;       //counter for # of misses
            guesses++;
            cout << "Number of ships left: " << shpCtr << endl;
            cout << "Stop playing? If yes, press 'Y' " << endl;
            cin >> stop;
            if (stop == 'Y' || stop == 'y')
            {
                break;
            }
        }
    
    }
    //Output the transformed data
    
    myBoard();              //Show board
    
    cout << "number of guesses: " << guesses << endl;
    cout << "number of hits: " << hits << endl;
    cout << "number of misses: " << misses << endl;
    cout << "Percentage of hits: "
         << static_cast<float>(hits)/guesses*100 << "%" << endl;
    cout << "Percentage of misses: " 
         << static_cast<float>(misses)/guesses*100 << "%" << endl;
    
    cout << misses/guesses << endl;
    
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
    int counter = 0;
    
    for (int a = 0; a < row; a++)
    {
        for( int b = 0; b < column; b++)
        {
            cout << "[" << board[a][b] << "]";
            
        }    
        cout << endl;           //Rows
    }        
}

bool guess(int x, int y)        // x's row y's column
{
    if(board[x][y] == 1)
    {
        board[x][y] = 2;
        return true;
    }
    return false;
}
