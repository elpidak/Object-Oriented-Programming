#include "Team.h"
#include "TeamCompetition.h"
#include "ImmunityCompetition.h"
#include "CreativityCompetition.h"


using namespace std;

// Index 0 = Red Team, Index 1 = Blue Team
Team teams[2] = { Team("Red"), Team("Blue")};
int competitionId = 0;
void menu();
void normalDay();
void teamCompetitionDay();
void immunityCompetitionDay();
void creativityCompetitionDay();
int results; ///καθολική μεταβλητή για αποθήκευση του αποτελέσματος του ομαδικού διαγωνισμού

int main()
{
    menu();

    return 0;
}

void menu()
{
    int choice = -1;

    while(choice != 0)
    {
        cout << endl << "1.Normal Day." << endl;
        cout << "2.Team Competition Day." << endl;
        cout << "3.Immunity Competition Day." << endl;
        cout << "4.Creativity Competition Day." << endl;
        cout << "0.Quit" << endl;

        cin >> choice;

        switch(choice)
        {

        case 1:
            normalDay();
            break;
        case 2:
            teamCompetitionDay();
            break;
        case 3:
            immunityCompetitionDay();
            break;
        case 4:
            creativityCompetitionDay();
            break;
        case 0:
            break;
        default:
            cout << "Incorrect Input. Choose between 1 and 3. Press 0 to quit." << endl;

        }
    }
}

void normalDay()
{
    int i;
    cout << endl << "This is a normal day in the Master Chef Game." << endl << endl;
    for (i=0; i < 2 ; i++){
        teams[i].teamEats();
        teams[i].teamWorks();
        teams[i].teamEats();
        teams[i].teamSocializes();
        teams[i].teamSleeps();
    }

}

void teamCompetitionDay()
{
    cout << endl << "This is a Team Competition day in the Master Chef Game." << endl << endl;
    int i, id;
    string compet;
    for (i=0 ; i<2 ; i++){
        teams[i].teamEats();
        teams[i].teamWorks();
    }cout<<"Give id and name:" << endl;
    cin>>id;
    cin>>compet;
    FoodAward Food;
    TeamCompetition CompetitionT(id,compet,Food);
    results = CompetitionT.compete(teams[0], teams[1]);
    for (i=0 ; i<2; i++){
        teams[i].teamEats();
        teams[i].teamSocializes();
        teams[i].teamSleeps();
    }

}

void immunityCompetitionDay()
{
    cout << endl << "This is a Immunity Competition day in the Master Chef Game." << endl << endl;
    int i, id;
    string compet;
    for (i=0; i<2; i++){
        teams[i].teamEats();
        teams[i].teamWorks();
    }cout<<"Give id and name:" << endl;
    cin>>id;
    cin>>compet;
    ImmunityAward AwardIm;
    ImmunityCompetition CompetitionI(id, compet, AwardIm);
    if (results==1)
        CompetitionI.compete(teams[0]);
    else
        CompetitionI.compete(teams[1]);
    for (i=0 ; i<2; i++){
        teams[i].teamEats();
        teams[i].teamSocializes();
        teams[i].teamSleeps();
    }
}

void creativityCompetitionDay()
{

    cout << endl << "This is a Creativity Competition day in the Master Chef Game." << endl << endl;
    int i, id;
    string compet;
    for (i=0; i<2; i++){
        teams[i].teamEats();
        teams[i].teamWorks();
    }cout<<"Give id and name: " << endl;
    cin>>id;
    cin>>compet;
    ExcursionAward AwardEx;
    CreativityCompetition CompetitionC(id,compet, AwardEx);
    CompetitionC.compete(teams[0], teams[1]);
    for (i=0; i<2; i++){
        teams[i].teamEats();
        teams[i].teamSocializes();
        teams[i].teamSleeps();
    }
}
