#ifndef CREATIVITYCOMPETITION_H_INCLUDED
#define CREATIVITYCOMPETITION_H_INCLUDED

#include <iostream>
#include "Competition.h"
#include "Team.h"
#include <string>
#include "ExcursionAward.h"

using namespace std ;

class CreativityCompetition : public Competition {
protected :
    ExcursionAward excursionAward;
    static string Ingredients[10];
public :
    CreativityCompetition() ;
    CreativityCompetition(int k, string p, ExcursionAward e1):Competition(k,p){excursionAward=e1;}
    ~CreativityCompetition(){cout<<"Object is destroyed" << endl ;}
    void setExcursionAward(ExcursionAward e1){excursionAward=e1;}
    ExcursionAward getExcursionAward(){return excursionAward;}
    void status(){Competition :: status();
    excursionAward.status();
    for (int i=0; i<10; i++)
        cout << "The Ingredient" << i << "is " << Ingredients[i] << endl;
     }
    void compete(Team &team1, Team &team2);

};

#endif // CREATIVITYCOMPETITION_H_INCLUDED
