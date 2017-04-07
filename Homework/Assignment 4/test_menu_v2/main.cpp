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
#include <ctime>
#include <iomanip>

using namespace std; //Name-space under which system libraries exist

//User Libraries

//Global Constants
const float MSSERTH=5.972e27f;  //Mass of earth in grams
const float GCONST=6.673E-8f;   //Gravitational Constant cm^3/gm sec^2
const float CNVFTCM=1.0f/30.48f;//Conversion from ft to cm
const float CNVMFT=5280.0f;     //Conversion from miles to feet
const float RADERTH=3959;       //Radius of the Earth in miles
//Function Prototypes
void themenu(void);
void prob1(void);
void prob2(void);
void prob3(void);
void prob4(void);
void prob5(void);
void prob6(void);
void prob7(void);
void prob8(void);
void prob9(void);
void prob10(void);
void prob11(void);
void prob12(void);


//Execution begins here
int main(int argc, char** argv) {
    //Declare variables
    int menu;
    
    //Menu
    
    
    do                  
    {
     //display menu
        themenu();
     
     cout<<"Enter problem number"<<endl;
     cin >> menu;
     
     switch (menu)
     {
        case 1: prob1(); break;             
        case 2: prob2(); break;               
        case 3: prob3(); break;
        case 4: prob4(); break;
        case 5: prob5(); break;
        case 6: prob6(); break;
        case 7: prob7(); break;
        case 8: prob8(); break;
        case 9: prob9(); break;
        case 10:prob10(); break;
        case 11: prob11(); break;
        case 12: prob12(); break;
        default:{ cout<<"Exit program!"<<endl; break;
         }
     }
             
    }
    while(menu>=1 && menu<=12);
    
    //Initialize variables
    
    //Input data
    
    //Map inputs to outputs or process the data
    
    //Output the transformed data
    
    //Exit stage right!
    return 0;
}

void themenu(void)
{
    cout<<"Homework problem menu."<<endl;
     cout<<"Enter number to display homework assignment"<<endl<<endl;
     cout<<"Type anything else to exit program"<<endl;
     cout<<"Type 1 for Ocean water level problem"<<endl;
     cout<<"type 2 Calories burned problem"<<endl;
     cout<<"Type 3 for guessing number problem"<<endl;
     cout<<"type 4 for modified guessing number problem"<<endl;
     cout<<"Type 5 for Math tutor"<<endl;
     cout<<"type 6 for Check your weight"<<endl;
     cout<<"Type 7 for Ascii Table"<<endl;
     cout<<"type 8 for Square Display"<<endl;
     cout<<"Type 9 for Average Rainfall"<<endl;
     cout<<"Type 10 for Cels to Fahreheit"<<endl;
     cout<<"Type 11 for Greatest to Least"<<endl;
     cout<<"Type 12 for Budget Analysis"<<endl;
     cout<<"------------------------------------"<<endl;
}

void prob1(void)
{
    {
        //Declare and initialize variables
        int years=1;
        float increase=1.5;     //increase in ocean water level per year 


        //Input data
        for (years=1; years<=25; years++)
        {
            cout<<"Number of increased ocean water level after year "
                    <<years<<" = "<<years*increase<<"mm"<<endl<<endl;                            

        }    

    }  
}

void prob2(void)
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
    }   
}
void prob3(void)
{
    {
        //establish random number seed generator
        srand(static_cast<unsigned int>(time(0)));

        //Declare and initialize variables
        int randNum=rand()%30+1;        //Random number between 1-30
        int guess;                      //User input guess between 1-30

        //Input data
        cout<<"Guess a number between 1-30!"<<endl<<endl;
        cin>>guess;

        //Loop
        while(guess>=1 && guess<=30)
        {
            if (guess<randNum)
            {
                cout<<"Too low! Try again."<<endl;
                cin>>guess;
            }
            else if (guess>randNum)
            {
                cout<<"Too high! Try again."<<endl;
                cin>>guess;
            }
            else 
            {
                cout<<"You've guessed the correct number!"<<endl;
                cout<<"Exit program"<<endl;
            }
        }
        //Map inputs to outputs or process the data

        //Output the transformed data
    }   
}
void prob4(void)
{
 {
    //establish random number seed generator
    srand(static_cast<unsigned int>(time(0)));

    //Declare and initialize variables
    int randNum=rand()%30+1;        //Random number between 1-30
    int guess, tGuess=0;                      //User input guess between 1-30

    //Input data
    cout<<"Guess a number between 1-30!"<<endl<<endl;
    cin>>guess;

    if(guess<1 || guess>30)         //Input Validation
    {
        cout<<"Error: Enter valid integer [1-30]."<<endl;
    }
    //Loop
    while(guess>=1 && guess<=30)
    {
        if (guess<randNum)
        {
            cout<<"Too low! Try again."<<endl;
            cin>>guess;
            tGuess++;
        }
        else if (guess>randNum)
        {
            cout<<"Too high! Try again."<<endl;
            cin>>guess; 
            tGuess++;
        }

        else 
        {
            cout<<"You've guessed the correct number!"<<endl;
            tGuess++;
            cout<<"you've guessed "<<tGuess<<" times"<<endl;
            cout<<"Exit program"<<endl;
        }
    }
}   
}
void prob5(void)
{
    {
        //Set the random number seed
        srand(static_cast<unsigned int>(time(0)));

        //Declare variables
        int op1,op2,result,answer;
        char choice;

        //Input data
        do{
            cout<<"Math Tutor"<<endl;
            cout<<"Choose the operation * / + - or anything else to exit"<<endl;
            cin>>choice;
            cout<<endl<<endl;
            if(!(choice=='+'||choice=='-'||choice=='/'||choice=='*')){
                cout<<"Exit the Math Tutor"<<endl;
                exit(0);
            }

            //Map inputs to outputs or process the data
            switch(choice){
                case '+':{
                    op1=rand()%900+100;//[100-999]
                    op2=rand()%900+100;//[100-999]
                    answer=op1+op2;//[3 to 4 digit result]
                    break;
                }
                case '-':{
                    op1=rand()%900+100;//[100-999]
                    op2=rand()%900+100;//[100-999]
                    answer=op1-op2;//[0 to 3 digit result]
                    break;
                }
                case '*':{
                    op1=rand()%90+10;//[10-99]
                    op2=rand()%90+10;//[10-99]
                    answer=op1*op2;//[2 to 4 digit result]
                    break;
                }
                case '/':{
                    answer=rand()%90+10;//[10-99]
                    op2=rand()%90+10;//[10-99]
                    op1=answer*op2;//[2 to 3 digit result]
                    break;
                }
                default:{
                    cout<<"Bad operator"<<endl;
                }
            }

            //Output the transformed data
            cout<<setw(8)<<op1<<endl;
            cout<<choice<<setw(7)<<op2<<endl;
            cout<<"--------"<<endl;
            cin>>result;

            //Compare the answer
            cout<<endl;
            cout<<((result==answer)?"Correct":"Incorrect")<<endl;
            cout<<"The answer = "<<answer<<endl;
        }while(choice=='+'||choice=='-'||choice=='/'||choice=='*');

        //Exit stage right!

    }   
}
void prob6(void)
{
    {
    //Declare variables
    float myWeight;//Result in lbs
    float myMass=6;//Units of slugs

    //Map inputs to outputs or process the data
    //F=G*M1*M2/D^2
    myWeight=GCONST*CNVFTCM*CNVFTCM*CNVFTCM*MSSERTH*myMass
            /(RADERTH*RADERTH*CNVMFT*CNVMFT);

    //Output the transformed data
    cout<<fixed<<setprecision(1)<<showpoint;
    cout<<"You weigh "<<myWeight<<" lbs"<<endl;

    //Exit stage right!
    }  
}
void prob7(void)
{
        {
        //Declare the ascii limit
        int limit=127;

        //Map inputs to outputs or process the data
        for(int i=0;i<=limit;i++){
            cout<<static_cast<char>(i);
            if(i%16==15)cout<<endl;
        }
        }   
}
void prob8(void)
{
        {
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
        }   
}
void prob9(void)
{
    {
        //Declare variables
        int years, rainfall,totRF=0;        //# 0f years and rainfall
        int cYears,mthlrnfll,nMonth;                 //Calculated number of years
        int totMnth=0;

        //Input data
        cout<<"This program calculates the average rainfall over n Years"<<endl;
        cout<<"Enter number of years for the data to collect"<<endl;
        cin>>years;

        if (years<1)
        {
            cout<<"Input Error! Atleast 1 year"<<endl;

        }

        //initiate outer loop
        for (cYears=1; cYears<=years; cYears++)
        {
            //Initiate inner loop
            for(nMonth=1; nMonth<=12; nMonth++)
            {
                cout<<"How many inches of rainfall this month?"<<endl;
                cin>>rainfall;
                totRF += rainfall;      //Accumulate total rainfall

            }
            totMnth += nMonth;      //Accumulate total months
        }

        //Output the transformed data
        cout<<"Total number of months     = "<<totMnth<<endl;
        cout<<"Total inches of rainfall   = "<<totRF<<endl;
        cout<<"Average rainfall per month = "<<static_cast<float>(totRF)/(nMonth*years)<<endl;
    }   
}
void prob10(void)
{
    {
        //Declare variables

        int cels, minCel=0, maxcel=20;
        float CNVTCEFA;
        //Input data
        cout<<"Convert Celsius to Fahrenheit."<<endl;
        cout<<"-----------------------------------"<<endl;

        //Initialize for loop
        for (cels=minCel; cels<=maxcel; cels++)
        {
            cout<<fixed<<setprecision(2)<<endl;
            cout<<cels<<"\t\t"<<(cels*9/5)+32<<endl;
        }
    }    
}
void prob11(void)
{
    {
        //Declare variables
        int randNum;
        int max=0, min=0;
        //Input data

        cout<<"Enter random integers"<<endl;
        cin>>randNum;

        //Initialize loop

        while ( randNum != -99){
            cout<<"Enter integers"<<endl;
            cin>>randNum;

            if (randNum>max) max=randNum;
            if (randNum<min && randNum<max && randNum != -99) min=randNum;
        }

        cout<<"Largest number is "<<max<<endl;
        cout<<"smallest number is "<<min<<endl;
    }   
}
void prob12(void)
{
    {
        //Declare variables
        int randNum;
        int max=0, min=0;
        //Input data

        cout<<"Enter random integers"<<endl;
        cin>>randNum;

        //Initialize loop

        while ( randNum != -99){
            cout<<"Enter integers"<<endl;
            cin>>randNum;

            if (randNum>max) max=randNum;
            if (randNum<min && randNum<max && randNum != -99) min=randNum;
        }

        cout<<"Largest number is "<<max<<endl;
        cout<<"smallest number is "<<min<<endl;
    }    
}
