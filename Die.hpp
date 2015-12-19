/*******************************************************
 ** Author: Carlos Carrillo                            *
 ** Date:   09/23/2015                                 *
 ** Description: This is the class specification file  *
 *  of a class called Die. This class contains 5 data  *
 *  members and 8 functions. One of the member         *
 *  functions returns the exact value of a single roll *
 *  of the dice.                                       *
 ******************************************************/

// Die.hpp

#ifndef DIE_HPP
#define DIE_HPP

#include "Die.hpp"

class Die
{
    private:
    
        int SidesDie1;
        int LastRoll1;
        int TotalRolls1;
        double TotalScore1;
        double RollNumber1;
    
    public:
    
        Die(int, double); //2-parameter constructor
        Die(); //default constructor
        void setSidesDie1(int); //mutator
        int getSidesDie1(); //getter
        void setRollNumber1(double); //mutator
        double getRollNumber1(); //getter
        void Roll1(); //method to roll the dice
        void Display1(); //method to display the dice
        void Average1(); //method to display the average score
        void Reset1(); //method to reset the dice
    
};
#endif


