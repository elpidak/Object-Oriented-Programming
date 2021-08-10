#include "Team.h"

using namespace std;

Team::Team(){
    colour="";
    numberOfVictories=0;
    winPossibility=0;
}
Team::Team(string c){
    colour=c;
}
Team::~Team(){
    cout<<"Team: "<<colour<<" is destroyed"<<endl;
}
void Team::setColour(string c){
    colour=c;
}
void Team::setListOfPlayers(){
    int i,d,j;
    string a,b,c;
    cout<<"Choose player's position: (from 1 to 11) ";
    cin>>i;
    j=i-1;
    if (listOfPlayers[j].getAge()!=0)
        cout<<"There is already a player in this position!"<<endl;
    else{
        cout<<"Give Name: ";
        cin>>a;
        listOfPlayers[j].setName(a);
        cout<<"Give Gender: ";
        cin>>b;
        listOfPlayers[j].setGender(b);
        cout<<"Give age: ";
        cin>>d;
        while (d<18){
            cout<<"Too young!!!Try again! ";
            cin>>d;
        }
        listOfPlayers[j].setAge(d);
        cout<<"Give Work: ";
        cin>>c;
        listOfPlayers[j].setWork(c);
    }
}
void Team::setNumberOfVictories(int nv){
    numberOfVictories=nv;
}
void Team::setWinPossibility(float p){
    winPossibility=p;
}
string Team::getColour(){
    return colour;
}
string Team::getListOfPlayersName(int i){
    return listOfPlayers[i-1].getName();
}
string Team::getListOfPlayersGender(int i){
    return listOfPlayers[i-1].getGender();
}
int Team::getListOfPlayersAge(int i){
    return listOfPlayers[i-1].getAge();
}
string Team::getListOfPlayersWork(int i){
    return listOfPlayers[i-1].getWork();
}
float Team::getListOfPlayersSkills(int i){
    return listOfPlayers[i-1].getSkills();
}
float Team::getListOfPlayersPopularity(int i){
    return listOfPlayers[i-1].getPopularity();
}
float Team::getListOfPlayersFatique(int i){
    return listOfPlayers[i-1].getFatique();
}
int Team::getListOfPlayersNVic(int i){
    return listOfPlayers[i-1].getNvic();
}
float Team::getListOfPlayersWinnerPossibility(int i){
    return listOfPlayers[i-1].getWinnerPossibility();
}
int Team::getNumberOfVictories(){
    return numberOfVictories;
}
float Team::getWinPossibility(){
    return winPossibility;
}
void Team::teamStatus(){
    cout<<"Team "<<colour<<endl;
    int i;
    for (i=0;i<11;i++)
        cout<<"Player "<<i+1<<": "<<listOfPlayers[i].getName()<<endl;
    cout<<"Number of victories "<<numberOfVictories<<endl;
    cout<<"Win Possibility (%) "<<winPossibility<<endl;
}
