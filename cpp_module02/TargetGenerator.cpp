#include "TargetGenerator.hpp"
#include "ASpell.hpp"
#include "ATarget.hpp"


void TargetGenerator::learnTargetType(ATarget *mag)
{
    if (mag != nullptr)
    {
        SPELL_IT = target.find(mag->getType());

        if (it == target.end())
            target[mag->getType()] = mag->clone();
    }
}

void TargetGenerator::forgetTargetType(std::string magname)
{
    SPELL_IT = target.find(magname);

    if (it != target.end())
    {
        delete it->second;
        target.erase(magname);
    }
}

ATarget *TargetGenerator::createTarget(const std::string &magname)
{
    SPELL_IT = target.find(magname);

    if (it != target.end())
        return(it->second->clone());
    return nullptr;
}

TargetGenerator::TargetGenerator() { }
TargetGenerator::~TargetGenerator(){ target.clear();}