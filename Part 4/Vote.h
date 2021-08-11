#ifndef VOTE_H_INCLUDED
#define VOTE_H_INCLUDED
#include <iostream>
#include "Player.h"
using namespace std;

class Vote{
    string name;
    string reason;
public:
    Vote(){
        name="";
        reason="";}
    Vote(Player n, string r){
        name=n.getName();
        reason=r;}
    ~Vote(){
        /*cout<<"Vote is destroyed"<<endl;*/}
    void setName(string n){
        name=n;}
    void setReason(string r){
        reason=r;}
    string getName(){
        return name;}
    string getReason(){
        return reason;}
    void status(){
        cout<<endl<<"Name= "<<name<<endl;
        cout<<"Reason= "<<reason<<endl;}


};

#endif // VOTE_H_INCLUDED
