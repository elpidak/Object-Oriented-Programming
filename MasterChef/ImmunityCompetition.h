#ifndef IMMUNITYCOMPETITION_H_INCLUDED
#define IMMUNITYCOMPETITION_H_INCLUDED
#include "Competition.h"
#include "Team.h"
#include "ImmunityAward.h"
using namespace std;

class ImmunityCompetition: public Competition{
protected:
    ImmunityAward immunityAward;
public:
    ImmunityCompetition();
    ImmunityCompetition(int i, string a, ImmunityAward a1):Competition(i,a){immunityAward=a1;}
    ~ImmunityCompetition(){cout<<"Immunity Competition is destroyed"<< endl;}
    void setImmunityAward(ImmunityAward a1){immunityAward=a1;}
    ImmunityAward getImmunityAward(){return immunityAward;}
    void status(){Competition::status();
    immunityAward.status();}
    void compete(Team &team);



};

#endif // IMMUNITYCOMPETITION_H_INCLUDED
