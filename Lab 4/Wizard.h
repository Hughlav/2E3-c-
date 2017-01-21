#ifndef Wizard_hpp
#define Wizard_hpp
#include "NPC.h"

#include <stdio.h>

class Wizard : public NPC
{
public:
    Wizard();
	virtual void print() ;
	virtual void defend(int attackdamage);
};


#endif /* Wizard_hpp */
