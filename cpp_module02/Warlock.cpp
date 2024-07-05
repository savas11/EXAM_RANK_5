#include "Warlock.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"

Warlock::Warlock(std::string const &name, std::string const &title): 
    name(name) , title(title) {
    std::cout << this->name << ": This looks like another boring day.\n";
}
Warlock::~Warlock(){
    std::cout << this->name << ": My job here is done!\n";
}

std::string const &Warlock::getName(void) const{
    return(this->name);
}
std::string const &Warlock::getTitle(void) const{
    return(this->title);
}

void Warlock::setTitle(std::string const &title){
    this->title = title;
}

void Warlock::introduce(void) const {
    std::cout << this->name << ": I am " << this->name << ", " << this->title << "!\n"; 
}

void Warlock::learnSpell(ASpell *mag)
{
    if (mag != nullptr)
    {
        SPELL_IT = spell.find(mag->getName());

        if (it == spell.end())
            spell[mag->getName()] = mag->clone();
    }
}

void Warlock::forgetSpell(std::string magname)
{
    SPELL_IT = spell.find(magname);

    if (it != spell.end())
    {
        delete it->second;
        spell.erase(magname);
    }
}

void Warlock::launchSpell(std::string magname, const ATarget &src)
{
    SPELL_IT = spell.find(magname);

    if (it != spell.end())
        it->second->launch(src);
}