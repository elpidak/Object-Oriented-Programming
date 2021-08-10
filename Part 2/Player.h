#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

class Player{
    string name;
    string gender;
    string team;
    int age;
    string work;
    float skills;
    float popularity;
    float fatique;
    int nvic; //number of victories in competitions
    float winnerPossibility; //possibility of winning the Game
public:
    Player();
    Player(string n,string g, string t, int ag, string wor);
    ~Player();
    void setName(string n);
    void setGender(string g);
    void setTeam(string t);
    void setAge(int a);
    void setWork(string w);
    void setSkills(float sk);
    void setPopularity(float pop);
    void setFatique(float f);
    void setNviv(int nv);
    void setWinnerPossibility(float p);
    string getName();
    string getGender();
    string getTeam();
    int getAge();
    string getWork();
    float getSkills();
    float getPopularity();
    float getFatique();
    int getNvic();
    float getWinnerPossibility();
    void practise();
    void gettingTired();
    void popular();
    void choose();
    void compete();
    void status();

};



#endif // PLAYER_H_INCLUDED
