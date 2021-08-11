#include "Voting.h"
using namespace std;

vector <Vote> Voting::votes;
map <string, int> Voting::results;

void Voting::playersVoting(Team &team){
    int k,l,t=0;
    for (int i=0;i<11;i++){
        l=team.getPlayers()[i].getVotes();
        k=-1;
        while(l!=0){
            k=rand()%11;
            if(k!=i && team.getPlayers()[i].getAge()!=0 && team.getPlayers()[k].getImmunity()==false && team.getPlayers()[k].getAge()!=0){
                Vote v(team.getPlayers()[k], "Random");
                votes.push_back(v);
                l--;
                t+=1;
                }
        }
    }cout<<"t="<<t<<endl;
}


void Voting::arrayMax(int *a,int *num1){
    int temp1=0,temp2=0, max1=0, max2=0;
    for (int i=0; i<11; i++){
        if (a[i]>=max1 && a[i]>=max2){
            max2=max1;
            temp2=temp1;
            max1=a[i];
            temp1=i;}
        else if (a[i]>=max2){
            max2=a[i];
            temp2=i;
        }
    }
    num1[0]=temp1;
    num1[1]=temp2;
}



void Voting::counting(Team &team){
    int *num1, *numOfVotes;;
    numOfVotes=new int[11];
    for(int i=0; i<11; i++)
        numOfVotes[i]=0;
    num1=new int[2];
    for (int i=0; i<2; i++)
        num1[i]=0;
    for (unsigned int i=0; i<votes.size();i++){
        for (int j=0; j<11 ;j++){
            if (votes[i].getName()==team.getPlayers()[j].getName()){
                numOfVotes[j]+=1;
                team.getPlayers()[j].setVotes(numOfVotes[j]); }///κάθε φορά που θα συναντά ένα όνομα, θα αυξάνει κατά έναν τους ψήφους που έχει, στην αντίστοιχη θέση του πίνακα ψήφων
    }
    }
    cout<<"Results:"<<endl<<endl;
    int counter=0;
    while (counter < 11){
        if (team.getPlayers()[counter].getAge()!=0){
            results.insert(pair<string,int>(team.getPlayers()[counter].getName(),numOfVotes[counter]) );
            cout<<"Player: "<<team.getPlayers()[counter].getName()<<" has been voted: "<<numOfVotes[counter]<<" time(s)"<<endl;}
        counter+=1;
    }
    arrayMax(numOfVotes, num1);
    team.setCandidate(team.getPlayers()[num1[0]].getName());
    team.setCandidate(team.getPlayers()[num1[1]].getName());
    delete[] num1;
    delete[] numOfVotes;
}
void Voting::eliminating(Team &team){
    int t1=0, t2=0;
    float tech1=0, tech2=0;
    for (int i=0; i<11; i++){
        if (team.getPlayers()[i].getCandidate()==true){
            if (tech1==0){
                tech1=team.getPlayers()[i].getTechnique();
                t1=i;}
            else {
                t2=i;
                tech2=team.getPlayers()[i].getTechnique();
                break;}
        }
    }
    if (tech1>=tech2)
        team.removePlayer(team.getPlayers()[t2].getName());
    else
        team.removePlayer(team.getPlayers()[t1].getName());
}
void Voting::votingProcess(Team &team){
    for (int i=0; i<11; i++)
        team.getPlayers()[i].setCandidate(0);
    playersVoting(team);
    counting(team);
    eliminating(team);
    results.clear();
    votes.clear();
}



