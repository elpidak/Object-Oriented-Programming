#include "CreativityCompetition.h"
#include "Team.h"
#include "ExcursionAward.h"


using namespace std ;

void CreativityCompetition :: compete (Team &team1, Team &team2)
{
    float maxTechnique = -1, technique;
    int maxIndex = -1, playerIndex = 0;
    Player allplayers[22];
    for (int i =0; i<11; i++)
    {
        allplayers[i]= team1.getPlayers()[i];
        allplayers[i+11]= team2.getPlayers()[i];
    }
    for(playerIndex=0; playerIndex<22; playerIndex++)
    {
        technique = allplayers[playerIndex].getTechnique();
        if (technique > maxTechnique)
        {
            maxTechnique=technique;
            maxIndex=playerIndex;
        }
    }
    allplayers[maxIndex].status();
    if (maxIndex<11)
    {
        team1.getPlayers()[maxIndex].setTechnique(team1.getPlayers()[maxIndex].getTechnique() + excursionAward.getTechniqueBonus());
        team1.getPlayers()[maxIndex].setPopularity(team1.getPlayers()[maxIndex].getPopularity() - excursionAward.getPopularityPenalty());
    }
    else
    {
        team2.getPlayers()[maxIndex-11].setTechnique(team2.getPlayers()[maxIndex-11].getTechnique()+ excursionAward.getTechniqueBonus());
        team2.getPlayers()[maxIndex-11].setPopularity(team2.getPlayers()[maxIndex-11].getPopularity()- excursionAward.getPopularityPenalty());
    }

}
string CreativityCompetition:: Ingredients[10] = {"auga","gala","aleuri","makaronia","karavida","kouneli","voutiro","glikopatata","ntomata","finokio"};

