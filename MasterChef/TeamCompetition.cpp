#include "TeamCompetition.h"
#include <time.h>
using namespace std;

void TeamCompetition::setRounds(){
    int i,j,d;
    string w;
    for (i=0; i<3; i++){
        cout<<"Give id: ";
        cin>>j;
        rounds[i].setId(j);
        cout<<"Give duration: ";
        cin>>d;
        rounds[i].setDuration(d);
        cout<<"Give winner: ";
        cin>>w;
        rounds[i].setWinner(w);
    }
}

int TeamCompetition::compete(Team &team1, Team &team2){
    int wins1=0, wins2=0, round=0, a1=0, b1=0, b2=0, a2=0, i,r1,r2,w; ///a συνολική κούραση, b συνολική τεχνική
    Player *players1, *players2, *playersTeam1, *playersTeam2;
    playersTeam1= new Player [11];
    playersTeam1= team1.getPlayers();
    playersTeam2= new Player [11]; team2.getPlayers();
    players1= new Player[5];
    players2= new Player[5];
    for (round=0 ; round<3 ; round++){
        for (i=0; i<5; i++){
            srand(time(NULL));
            r1=rand()%11;
            r2=rand()%11;
            players1[i]=playersTeam1[r1];
            players2[i]=playersTeam1[r2];
            players1[i].compete();
            players2[i].compete();
            b1+=players1[i].getTechnique();
            b2+=players2[i].getTechnique();
            a1+=players1[i].getFatigue();
            a2+=players2[i].getFatigue();
        }
        if (b1 > b2){
            rounds[round].setWinner(team1.getColor());
            wins1++;
        }
        else if (b1 < b2){
            wins2++;
            rounds[round].setWinner(team2.getColor());
        }
        else {
            if (a1 < a2){
                rounds[round].setWinner(team1.getColor());
                wins1++;}
            else if (a1 > a2){
                rounds[round].setWinner(team2.getColor());
                wins2++;}
            else
                rounds[round].setWinner("Tie!");
        }
            cout<<"Result of round: "<<round+1<<" is: "<<rounds[round].getWinner()<<endl;
    }
        if (wins1 > wins2){
            w=team1.getWins()+1;
            team1.setWins(w);
            team1.setSupplies(team1.getSupplies()+foodAward.getBonusSupplies());
            delete[] playersTeam1;
            delete[] playersTeam2;
            delete[] players1;
            delete[] players2;
            return 1;
        }else if(wins1 < wins2){
            w=team2.getWins()+1;
            team2.setWins(w);
            team2.setSupplies(team2.getSupplies()+foodAward.getBonusSupplies());
            delete[] playersTeam1;
            delete[] playersTeam2;
            delete[] players1;
            delete[] players2;
            return 0;
        } else{
            cout<<"Tie!/n";
            return 404;
            }
    }
