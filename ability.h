#ifndef __ABILITY_H__
#define __ABILITY_H__
#include "board.h"
#include "player.h"
using namespace std;


class Ability {
    char id;
    bool used;
    string name;
    Board *board;
    Player* player;

    public:
        bool applyEffect(vector<string> args) = 0;
        bool validateArgs(vector<string> args) = 0;
        int getAbilityId();
        void setAbilityId(int id);
        bool getAbilityUsed();
        bool getAbilityUsedStatus();
        string getAbilityName();
};

#endif