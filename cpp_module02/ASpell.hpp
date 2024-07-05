#pragma once 

#include <iostream>

class ATarget;

class ASpell
{
private:
    std::string name;
    std::string effects;
public:
    ASpell(std::string const &name, std::string const &effects);
    std::string const &getName(void) const;
    std::string const &getEffects(void) const;
    virtual ~ASpell();
    virtual ASpell *clone() const = 0;
    void launch(ATarget const &src) const;
};
