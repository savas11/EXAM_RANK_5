#pragma once 

#include <iostream>
#include <string>
#include <map>

#define SPELL_IT std::map<std::string, ATarget *>::iterator it

#include "ASpell.hpp"
#include "ATarget.hpp"

class TargetGenerator
{
private:
    std::map<std::string, ATarget *> target;
public:
    TargetGenerator();
    ~TargetGenerator();

    void learnTargetType(ATarget *);
    void forgetTargetType(std::string);
    ATarget *createTarget(const std::string &);
};