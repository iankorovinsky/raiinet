#ifndef __ROTATE_BOARD_ABILITY_H__
#define __ROTATE_BOARD_ABILITY_H__

#include "ability.h"
using namespace std;

class DiagonalLinkAbility : public Ability {
    public:
        bool applyEffect(vector<string> args) override;
        bool validateArgs(vector<string> args) override;
};


#endif