/*******************************************************
 ** Author: Carlos Carrillo                            *
 ** Date:   09/23/2015                                 *
 ** Description: This is the main function file.       *
 *  It rolls each die N times and print the result of  *
 *  each roll to the screen as well as the total of    *
 *  the N rolls of each die.                           *
 ******************************************************/

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Die.hpp"
#include "LoadedDie.hpp"

using namespace std;

int main()
{
    //input variables for the user
    int sides1;
    int sides2;
    double rolls;
    
    //ask the user to enter desired values
    cout <<"\nHow many sides do you want for the FAIR dice?"<<endl;
    cin >> sides1;
    
    cout <<"\nHow many sides do you want for the LOADED dice?"<<endl;
    cin >> sides2;
    
    cout <<"\nHow many times do you want to roll the die?"<<endl;
    cin >>rolls;
    
    //seed the random number generator
    srand(static_cast<unsigned int>(time(0)));
    
    //declare the pointer variable objects to
    //the classes using Dinamic Memory Allocation
    Die *pDie = new Die(sides1, rolls);
    LoadedDie *pLoadedDie = new LoadedDie(sides2, rolls);
    
    //call the method to roll and display the die as
    //many times as the user indicates
    for(int i=0; i<rolls; i++)
      {
        pDie->Roll1();
        pLoadedDie->Roll2();
        pLoadedDie->Display2();
        pDie->Display1();
      }
    
    //call the functions to display the total
    //average of each dice
    pDie->Average1();
    pLoadedDie->Average2();
    
    //call the functions that reset all the values
    //to get them ready for the next set of rolls
    pDie->Reset1();
    pLoadedDie->Reset2();
    
    //deallocate memory assigned to the pointers to
    //Die and LoadedDie classes
    delete pDie;
    delete pLoadedDie;
    
    //clean up dangling pointers to Die
    //and LoadedDie classes
    pDie = NULL;
    pLoadedDie = NULL;
    
    return 0;
}
