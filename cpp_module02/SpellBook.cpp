#include "SpellBook.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"



void SpellBook::learnSpell(ASpell *mag)
{
    if (mag != nullptr)
    {
        SPELL_IT = spell.find(mag->getName());

        if (it == spell.end())
            spell[mag->getName()] = mag->clone();
    }
}

void SpellBook::forgetSpell(std::string magname)
{
    SPELL_IT = spell.find(magname);

    if (it != spell.end())
    {
        delete it->second;
        spell.erase(magname);
    }
}

ASpell *SpellBook::createSpell(const std::string &magname)
{
    SPELL_IT = spell.find(magname);

    if (it != spell.end())
       return(it->second->clone());
    return nullptr;
}

SpellBook::SpellBook() { }
SpellBook::~SpellBook(){ spell.clear();}