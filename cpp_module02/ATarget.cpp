#include "ATarget.hpp"
#include "ASpell.hpp"

ATarget::ATarget(std::string const &type) : type(type) {}

std::string const &ATarget::getType(void) const { return (this->type); }

ATarget::~ATarget() {}

void ATarget::getHitBySpell(ASpell const &src) const{
    std::cout << this->type << " has been " << src.getEffects() << "!\n";
}