#pragma once 

#include <iostream>
#include <string>
#include <map>

#define SPELL_IT std::map<std::string, ASpell *>::iterator it

#include "ASpell.hpp"
#include "ATarget.hpp"

class SpellBook
{
private:
    std::map<std::string, ASpell *> spell;
public:
    SpellBook();
    ~SpellBook();

    void learnSpell(ASpell *);
    void forgetSpell(std::string);
    ASpell *createSpell(const std::string &);
};