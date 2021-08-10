#include "Player.h"

using namespace std;

Player::Player(){
    name="";
    gender="";
    team="";
    age=0;
    work="";
    skills=rand()%81;
    popularity=50;
    fatique=0;
    nvic=0;
    winnerPossibility=0;
}
Player::Player(string n, string t,string g, int ag, string wor){
    name=n;
    gender=g;
    team=t;
    age=ag;
    work=wor;
}

Player::~Player(){
    cout<<"Player: "<<name<<"is destroyed"<<endl;
}
void Player::setName(string n){
    name=n;
}
void Player:: setGender(string g){
    gender = g;
}
void Player::setTeam(string t){
    team=t;
}
void Player::setAge(int a){
    age=a;
}
void Player::setWork(string w){
    work=w;
}
void Player::setSkills(float sk){
    if (sk>100 || sk<0)
        cout<<"Wrong Input";
    else
        skills=sk;
}
void Player::setPopularity(float pop){
    if (pop>100 || pop<0)
        cout<<"Wrong Input";
    else
        popularity=pop;
}
void Player::setFatique(float f){
    if (f>100 || f <0)
        cout<<"Wrong Input";
    else
        fatique=f;
}
void Player::setNviv(int nv){
    nvic=nv;
}
void Player::setWinnerPossibility(float p){
    winnerPossibility=p;
}
string Player::getName(){
    return name;
}
string Player:: getGender(){
   return gender;
}
string Player::getTeam(){
    return team;
}
int Player::getAge(){
    return age;
}
string Player::getWork(){
    return work;
}
float Player::getSkills(){
    return skills;
}
float Player::getPopularity(){
    return popularity;
}
float Player::getFatique(){
    return fatique;
}
int Player::getNvic(){
    return nvic;
}
float Player::getWinnerPossibility(){
    return winnerPossibility;
}
void Player::practise(){
    float a;
    a=getSkills()+0.05*getSkills();
    if (a>100)
        a=100;
    setSkills(a);
}
void Player::gettingTired(){
    float a;
    int b;
    srand(time(NULL));
    b=20+rand()%21;
    a=getFatique()+b;
    if (a>100)
        a=100;
    setFatique(a);
}
void Player::popular(){
    float a;
    int b,c;
    srand(time(NULL));
    b=rand()%21;
    c=b-10;
    a=getPopularity()+c*0.01*getPopularity();
    if (a>100)
        a=100;
    else if (a<0)
        a=0;
    setPopularity(a);
}
void Player::choose(){///το ίδιο με την Τεχνική
    float a;
    int b;
    srand(time(NULL));
    b=rand()%100;
    if (b>=50)
        setFatique(0);
    else{
        a=getSkills()+5;///δεν μπορούμε να χρησιμοποιήσουμε την practise γιατί εκεί αυξάνεται ποσοστιαία, ενώ εδώ απόλυτα
        if (a>100) a=100;
        setSkills(a);
    }
}
void Player::compete(){
    float a;
    int b;
    srand(time(NULL));
    b=10+rand()%11;
    a=getFatique()+b*0.01*getFatique();
    if (a>100) a=100;
    setFatique(a);///χάνει δύναμη==αύξηση κούρασης
}

void Player::status(){
    cout << "Name: " << name << endl;
    cout << "Gender: "<< gender << endl;
    cout << "Age: "<< age << endl;
    cout << "Work: "<< work << endl;
    cout << "Skills (%): "<< skills << endl;
    cout << "Popularity(%): "<< popularity << endl;
    cout << "Fatigue level(%): "<< fatique << endl;
    cout << "Number of victories: "<< nvic << endl;
    cout << "Possibility of winning(%): "<<winnerPossibility<< endl;

}
