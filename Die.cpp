/*******************************************************
 ** Author: Carlos Carrillo                            *
 ** Date:   09/24/2015                                 *
 ** Description: This is the class implementation file *
 *  of a class called Die. This class contains 5 data  *
 *  members and 8 functions. One of the member         *
 *  functions returns the exact value of a single roll *
 *  of the dice.                                       *
 ******************************************************/

//Die.cpp

#include <iostream>
#include <cstdlib>
#include "Die.hpp"

using namespace std;

/*************************************************
 *                   Die::Die                    *
 * Default constructor: initializes the pointer  *
 * variable sidesDie1 to zero.                   *
 ************************************************/

Die::Die()
{
    SidesDie1 = 0;
    RollNumber1 = 0;
    LastRoll1 = 0;
    TotalRolls1 = 0;
    TotalScore1 = 0;
}

/*************************************************
 *                   Die::Die                    *
 * 2-parameter constructor: Passes a parameter   *
 * to set and initialize the Roll and average    *
 * methods.                                      *
 ************************************************/

Die::Die(int lados, double lanzamientos)
{
    setSidesDie1(lados);
    setRollNumber1(lanzamientos);
}

/*************************************************
 *             Die::setSidesDie1                 *
 * This function sets the value of the member    *
 * variable SidesDie1.                           *
 ************************************************/

void Die::setSidesDie1(int lados)
{
    SidesDie1 = lados;
}

/*************************************************
 *              Die::getSidesDie1                *
 * This function returns the value of the member *
 * variable SidesDie1.                           *
 ************************************************/

int Die::getSidesDie1()
{
    return SidesDie1;
}


/*************************************************
 *               Die::setRollNumber1             *
 * This function sets the value of the member    *
 * variable RollNumber1.                         *
 ************************************************/

void Die::setRollNumber1(double lanzamientos)
{
    RollNumber1 = lanzamientos;
}

/*************************************************
 *               Die::getRollNumber1             *
 * This function returns the value of the member *
 * variable RollNumber1.                         *
 ************************************************/

double Die::getRollNumber1()
{
    return RollNumber1;
}

/*************************************************
 *                  Die::Roll1                   *
 * This function returns the value of a single   *
 * roll of a single die                          *
 ************************************************/

void Die::Roll1()
{
    LastRoll1 = 0;
    TotalRolls1++;
    
    //generate a ramdom number according to the
    //number of sides chosen
    
    LastRoll1 = (rand() % SidesDie1) + 1;
    
    TotalScore1 += LastRoll1;
}

/*************************************************
 *                  Die::Display1                *
 * This function display the value of the lastest*
 * roll, the number of times the dice has been   *
 * rolled, and the the total score oobtained.    *
 ************************************************/

void Die::Display1()
{
    cout <<"\nFair Dice: The value in this roll is "<<LastRoll1<<"."<<endl;
    cout <<"Fair Dice: The dice has been rolled "<<TotalRolls1<<" time(s)."<<endl;
    cout <<"Fair Dice: The cumulative score is "<<TotalScore1<<"."<<endl<<endl;
}

/*************************************************
 *                 Die::Average2                 *
 * This function display the value of the        *
 * average score obtained.                       *
 ************************************************/

void Die::Average1()
{
    double total1;
    total1 = (TotalScore1/RollNumber1);
    
    cout <<"Fair Dice: The total average score is "<<total1<<endl;
}

/*************************************************
 *                   Die::Reset1                 *
 * This function reset the values and get them   *
 * ready for the next roll.                      *
 ************************************************/

void Die::Reset1()
{
    SidesDie1 = 0;
    RollNumber1 = 0;
    LastRoll1 = 0;
    TotalScore1 = 0;
    TotalRolls1 = 0;
}


