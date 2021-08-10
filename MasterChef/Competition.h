#ifndef COMPETITION_H_INCLUDED
#define COMPETITION_H_INCLUDED

#include <iostream>
using namespace std;

class Competition{
protected:
    int id;
    string name, winner;
public:
    Competition(){id=0;
    name="";
    winner="";}
    Competition(int a, string b){
    id=a;
    name=b;
    }
    ~Competition(){cout<<"Object is destroyed/n";}
    void setId(int i){id=i;}
    void setName(string n){name=n;}
    void setWinner(string w){winner=w;}
    int getId(){return id;}
    string getName(){return name;}
    string getWinner(){return winner;}
    void status(){cout<<"Id: "<<getId()<<endl;
    cout<<"Name: "<<getName()<<endl;
    cout<<"Winner: "<<getWinner()<<endl;}



};

#endif // COMPETITION_H_INCLUDED
