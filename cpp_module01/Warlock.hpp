#ifndef WARLOCK_HPP
#define WARLOCK_HPP

#include <iostream>
#include <string>
#include <map>

#define SPELL_IT std::map<std::string, ASpell *>::iterator it

#include "ASpell.hpp"
#include "ATarget.hpp"

class Warlock
{
private:
    std::string name;
    std::string title;

    Warlock();
    Warlock(Warlock const &other);
    
    std::map<std::string, ASpell *> spell;
public:
    Warlock(std::string const &name, std::string const &title);
    virtual ~Warlock();
    std::string const &getName(void) const;
    std::string const &getTitle(void) const;
    void setTitle(std::string const &title);
    void introduce(void) const ;

    void learnSpell(ASpell *);
    void forgetSpell(std::string);
    void launchSpell(std::string , const ATarget &);
};

#endif