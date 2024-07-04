#pragma once 

#include <iostream>

class ASpell;

class ATarget
{
protected:
    std::string type;
public:
    ATarget(std::string const &type);
    std::string const &getType(void) const;
    virtual ~ATarget();
    virtual ATarget *clone() const = 0;
    void getHitBySpell(ASpell const &src) const;
};