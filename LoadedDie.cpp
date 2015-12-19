/*******************************************************
 ** Author: Carlos Carrillo                            *
 ** Date:   09/24/2015                                 *
 ** Description: This is the class implementation file *
 *  of a class called LoadedDie.The Roll2 function     *
 *  returns the value of a single roll that is higher  *
 *  than normal.                                       *
 ******************************************************/

//LoadedDie.cpp

#include <iostream>
#include <cstdlib>
#include "LoadedDie.hpp"

using namespace std;

/*************************************************
 *             LoadedDie::LoadedDie              *
 * Default constructor: initializes the pointer  *
 * variable sidesDie1 to zero.                   *
 ************************************************/

LoadedDie::LoadedDie()
{
    SidesDie2 = 0;
    RollNumber2 = 0;
    LastRoll2 = 0;
    TotalRolls2 = 0;
    TotalScore2 = 0;
}

/*************************************************
 *              LoadedDie::LoadedDie             *
 * 2-parameter constructor: Passes a parameter   *
 * to set and initialize the Roll and average    *
 * methods.                                      *
 ************************************************/

LoadedDie::LoadedDie(int lados2, double lanzamientos2)
{
    setSidesDie2(lados2);
    setRollNumber2(lanzamientos2);
}

/*************************************************
 *            LoadedDie::setSidesDie2            *
 * This function sets the value of the member    *
 * variable SidesDie2.                           *
 ************************************************/

void LoadedDie::setSidesDie2(int lados2)
{
    SidesDie2 = lados2;
}

/*************************************************
 *            LoadedDie::getSidesDie2            *
 * This function returns the value of the member *
 * variable SidesDie2.                           *
 ************************************************/

int LoadedDie::getSidesDie2()
{
    return SidesDie2;
}


/*************************************************
 *           LoadedDie::setRollNumber2           *
 * This function sets the value of the member    *
 * variable RollNumber2.                         *
 ************************************************/

void LoadedDie::setRollNumber2(double lanzamientos2)
{
    RollNumber2 = lanzamientos2;
}

/*************************************************
 *           LoadedDie::getRollNumber2           *
 * This function returns the value of the member *
 * variable RollNumber2.                         *
 ************************************************/

int LoadedDie::getRollNumber2()
{
    return RollNumber2;
}

/*************************************************
 *              LoadedDie::Roll2                 *
 * This function returns the value of a single   *
 * roll of a single die                          *
 ************************************************/

void LoadedDie::Roll2()
{
    LastRoll2 = 0;
    TotalRolls2++;
    
    //generate a ramdom number according to the
    //number of sides chosen
    
    LastRoll2 = (rand() % SidesDie2) + 1;
    
    cout <<"\nLoaded Dice: The true value was "<<LastRoll2<<"."<<endl;
    
    //method to cheat/load the true value of the dice
    LastRoll2 += LastRoll2;
    
    //method to load the dice with double its value as
    //long it is not grater than the dice size (sides)
    if (LastRoll2 <= SidesDie2)
      {
        TotalScore2 += LastRoll2;
      }
    else
      {
        LastRoll2 = (LastRoll2/2);
        TotalScore2 += LastRoll2;
      }
}

/*************************************************
 *             LoadedDie::Display2               *
 * This function display the value of the lastest*
 * roll, the number of times the dice has been   *
 * rolled, and the total score oobtained.        *
 ************************************************/

void LoadedDie::Display2()
{
    cout <<"Loaded Dice: The value to be shown is "<<LastRoll2<<"."<<endl;
    cout <<"Loaded Dice: The dice has been rolled "<<TotalRolls2<<" time(s)."<<endl;
    cout <<"Loaded Dice: The cumulative score is "<<TotalScore2<<"."<<endl;
}

/*************************************************
 *            LoadedDie::Average2                *
 * This function display the value of the        *
 * average score obtained.                       *
 ************************************************/

void LoadedDie::Average2()
{
    double total2;
    total2 = (TotalScore2/RollNumber2);
    
    cout <<"Loaded Dice: The total average score is "<<total2<<endl<<endl;
}

/*************************************************
 *             LoadedDie::Reset2                 *
 * This function reset the values and get them   *
 * ready for the next roll.                      *
 ************************************************/

void LoadedDie::Reset2()
{
    SidesDie2 = 0;
    RollNumber2 = 0;
    LastRoll2 = 0;
    TotalScore2 = 0;
    TotalRolls2 = 0;
}



