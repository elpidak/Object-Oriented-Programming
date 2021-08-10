#ifndef TEAM_H_INCLUDED
#define TEAM_H_INCLUDED
#include <iostream>
#include "Player.h"

using namespace std;

class Team{
    string colour;
    Player listOfPlayers[11];
    int numberOfVictories;
    float winPossibility;
public:
    Team();
    Team(string c);
    ~Team();
    void setColour(string c);
    void setListOfPlayers();
    void setNumberOfVictories(int nv);
    void setWinPossibility(float p);
    string getColour();
    string getListOfPlayersName(int i);
    string getListOfPlayersGender(int i);
    int getListOfPlayersAge(int i);
    string getListOfPlayersWork(int i);
    float getListOfPlayersSkills(int i);
    float getListOfPlayersPopularity(int i);
    float getListOfPlayersFatique(int i);
    int getListOfPlayersNVic(int i);
    float getListOfPlayersWinnerPossibility(int i);
    int getNumberOfVictories();
    float getWinPossibility();
    void teamStatus();
};

#endif
