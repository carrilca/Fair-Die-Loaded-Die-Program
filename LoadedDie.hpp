/*******************************************************
 ** Author: Carlos Carrillo                            *
 ** Date:   09/23/2015                                 *
 ** Description: This is the class specification file  *
 *  of a class called LoadedDie. This class contains 5 *
 *  data members and 8 functions. One of the member    *
 *  functions returns the value of a single roll that  *
 *  is higher than normal.                             *
 ******************************************************/

//LoadedDie.hpp

#ifndef LOADEDDIE_HPP
#define LOADEDDIE_HPP

#include "LoadedDie.hpp"

class LoadedDie
{
private:
    
    int SidesDie2;
    int LastRoll2;
    int TotalRolls2;
    double TotalScore2;
    double RollNumber2;
    
public:
    
    LoadedDie(int, double); //2-parameter constructor
    LoadedDie(); //default constructor
    void setSidesDie2(int); //mutator
    int getSidesDie2(); //getter
    void setRollNumber2(double); //mutator
    int getRollNumber2(); //getter
    void Roll2(); //method to roll the dice
    void Display2(); //method to display the dice
    void Average2(); //method to display the average score
    void Reset2(); //method to reset the dice
    
};
#endif
