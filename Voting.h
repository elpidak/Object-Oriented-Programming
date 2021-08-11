#ifndef VOTING_H_INCLUDED
#define VOTING_H_INCLUDED
#include <iostream>
#include "Vote.h"
#include "Team.h"
#include <vector>
#include <map>

using namespace std;

class Voting{
    static vector <Vote> votes;
    static map <string, int> results;
public:
    static void playersVoting(Team &team);
    static void counting(Team &team);
    static void arrayMax(int *a, int *num1);
    static void eliminating(Team &team);
    static void votingProcess(Team &team);

};

#endif // VOTING_H_INCLUDED
