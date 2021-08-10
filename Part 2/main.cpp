#include <iostream>
#include "Team.h"
#include "Player.h"

using namespace std;

Team teamRed("red");
Team teamBlue("blue");

void addPlayer(){
    bool a;
    cout<<"Choose team (0 Red, 1 Blue): ";
    cin>>a;
    if (a==0)
        teamRed.setListOfPlayers();
    else
        teamBlue.setListOfPlayers();
}
void seeTeamStatus(){
    bool a;
    cout<<"Choose team (0 Red, 1 Blue): ";
    cin>>a;
    if (a==0)
        teamRed.teamStatus();
    else
        teamBlue.teamStatus();
}
void seePlayer(){
    bool a,b;
    int j;
    string name1,nameInput;;
    cout<<"Choose team (0 Red, 1 Blue): ";
    cin>>a;
    cout<<"If you want to select Number, press 0, if you want to select name, press 1"<<endl;
    cin>>b;
    if (b==0){
        cout<<"Choose player (from 1 to 11): ";
        cin>>j;
        if (a==0){
            cout<<"Name: "<<teamRed.getListOfPlayersName(j)<<endl;
            cout<<"Gender: "<<teamRed.getListOfPlayersGender(j)<<endl;
            cout<<"Age: "<<teamRed.getListOfPlayersAge(j)<<endl;
            cout<<"Profession: "<<teamRed.getListOfPlayersWork(j)<<endl;
            cout<<"Skills (%): "<<teamRed.getListOfPlayersSkills(j)<<endl;
            cout<<"Popularity (%): "<<teamRed.getListOfPlayersPopularity(j)<<endl;
            cout<<"Fatique (%): "<<teamRed.getListOfPlayersFatique(j)<<endl;
            cout<<"Number of Victories: "<<teamRed.getListOfPlayersNVic(j)<<endl;
            cout<<"Possibility of winning the game (%): "<<teamRed.getListOfPlayersWinnerPossibility(j)<<endl;
        }
        else{
            cout<<"Name: "<<teamBlue.getListOfPlayersName(j)<<endl;
            cout<<"Gender: "<<teamBlue.getListOfPlayersGender(j)<<endl;
            cout<<"Age: "<<teamBlue.getListOfPlayersAge(j)<<endl;
            cout<<"Profession: "<<teamBlue.getListOfPlayersWork(j)<<endl;
            cout<<"Skills (%): "<<teamBlue.getListOfPlayersSkills(j)<<endl;
            cout<<"Popularity (%): "<<teamBlue.getListOfPlayersPopularity(j)<<endl;
            cout<<"Fatique (%): "<<teamBlue.getListOfPlayersFatique(j)<<endl;
            cout<<"Number of Victories: "<<teamBlue.getListOfPlayersNVic(j)<<endl;
            cout<<"Possibility of winning the game (%): "<<teamBlue.getListOfPlayersWinnerPossibility(j)<<endl;
        }
    }
    else{
        cout<<"Give name: ";
        cin>>nameInput;
        if (a==0){
            for (j=0;j<11;j++){
                name1=teamRed.getListOfPlayersName(j);
                if (name1==nameInput){
                    cout<<"Name: "<<teamRed.getListOfPlayersName(j)<<endl;
                    cout<<"Gender: "<<teamRed.getListOfPlayersGender(j)<<endl;
                    cout<<"Age: "<<teamRed.getListOfPlayersAge(j)<<endl;
                    cout<<"Profession: "<<teamRed.getListOfPlayersWork(j)<<endl;
                    cout<<"Skills (%): "<<teamRed.getListOfPlayersSkills(j)<<endl;
                    cout<<"Popularity (%): "<<teamRed.getListOfPlayersPopularity(j)<<endl;
                    cout<<"Fatique (%): "<<teamRed.getListOfPlayersFatique(j)<<endl;
                    cout<<"Number of Victories: "<<teamRed.getListOfPlayersNVic(j)<<endl;
                    cout<<"Possibility of winning the game (%): "<<teamRed.getListOfPlayersWinnerPossibility(j)<<endl;
                    break;
                }
            }
                if (name1!=nameInput)
                    cout<<"Wrong Name!"<<endl;
        }
        else{
            for (j=0;j<11;j++){
                name1=teamBlue.getListOfPlayersName(j);
                if (name1==nameInput){
                    cout<<"Name: "<<teamBlue.getListOfPlayersName(j)<<endl;
                    cout<<"Gender: "<<teamBlue.getListOfPlayersGender(j)<<endl;
                    cout<<"Age: "<<teamBlue.getListOfPlayersAge(j)<<endl;
                    cout<<"Profession: "<<teamBlue.getListOfPlayersWork(j)<<endl;
                    cout<<"Skills (%): "<<teamBlue.getListOfPlayersSkills(j)<<endl;
                    cout<<"Popularity (%): "<<teamBlue.getListOfPlayersPopularity(j)<<endl;
                    cout<<"Fatique (%): "<<teamBlue.getListOfPlayersFatique(j)<<endl;
                    cout<<"Number of Victories: "<<teamBlue.getListOfPlayersNVic(j)<<endl;
                    cout<<"Possibility of winning the game (%): "<<teamBlue.getListOfPlayersWinnerPossibility(j)<<endl;
                    break;
                }
            }
                if (name1!=nameInput)
                    cout<<"Wrong Name!"<<endl;
        }
    }
}
int main(){
    int a=5;
    cout<<"Welcome to HMMY's Master Chef!"<<endl;
    while(a!=0){
    cout<<"Press 1 if you want to add a Player to a Team:"<<endl;
    cout<<"Press 2 if you want to see a Team's status:"<<endl;
    cout<<"Press 3 if you want to see a Player's status:"<<endl;
    cout<<"Press 0 if you want to exit the game:"<<endl;
    cin>>a;
    switch (a){
        case 1: addPlayer();
            break;
        case 2: seeTeamStatus();
            break;
        case 3: seePlayer();
            break;
        case 0: cout<<"Thank you for playing! Goodbye!"<<endl;
            break;
        default: cout<<"Wrong number! Try again!"<<endl;
    }
    }

    return 0;

}

