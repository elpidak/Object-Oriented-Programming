#ifndef TEAMCOMPETITION_H_INCLUDED
#define TEAMCOMPETITION_H_INCLUDED

#include <iostream>
#include "Competition.h"
#include "FoodAward.h"
#include "Round.h"
#include "Team.h"

using namespace std;

class TeamCompetition : public Competition {
protected:
    FoodAward foodAward;
    Round *rounds;
public:
    TeamCompetition(){rounds = new Round [3];} ///åöüóïí ôá ìüíá áíôéêåßìåíá ðïõ ÷ñåéÜæïíôáé áñ÷éêïðïßçóç åßíáé óôïé÷åßá êëÜóçò, ðþò èá ôá ìçäåíßóù áñ÷éêá;; ÷ñåéÜæïíôáé êáí;
    TeamCompetition(int j, string n, FoodAward f1):Competition(j,n){foodAward=f1;
    rounds = new Round [3];
    int i;
    for (i=0;i<3;i++){
        Round r(i+1,3,"");
        rounds[i]=r;
    }
    }
    ~TeamCompetition(){cout<<"Object is destroyed" << endl ;
    delete[] rounds;}
    void setFoodAward(FoodAward f2){foodAward=f2;}
    void setRounds();
    FoodAward getFoodAward(){return foodAward;}
    Round *getRounds(){return rounds;}
    int compete(Team &team1, Team &team2);
    void status(){Competition::status();
    foodAward.status();
    int i;
    for (i=0;i<3;i++)
        rounds[i].status();

    }

};

#endif // TEAMCOMPETITION_H_INCLUDED
