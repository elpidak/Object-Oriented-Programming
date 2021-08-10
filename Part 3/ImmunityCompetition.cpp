#include "ImmunityCompetition.h"

using namespace std;

void ImmunityCompetition::compete(Team &team){
    float *p, a;
    Player *playeri;
    playeri=new Player [11];
    playeri=team.getPlayers();
    p=new float [11];
    int i,b;
    for (i=0 ; i<11; i++){
        p[i]=(playeri[i].getTechnique())*0.75+(100-playeri[i].getFatigue())*0.25;
        if (p[i]>a){
            b=i;
            a=p[i];
        }
    }///τι θα κάνουμε με τον νικητή;;
    playeri[b].setWins(playeri[b].getWins() + 1);
    cout<<"Winner is: "<<playeri[b].getName()<<endl;
    delete[] playeri;
    delete[] p;
}

