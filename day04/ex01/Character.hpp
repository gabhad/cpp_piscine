#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include <iostream>

#include "PlasmaRifle.hpp"
#include "PowerFist.hpp"
#include "RadScorpion.hpp"
#include "SuperMutant.hpp"

class Character
{
    private:
        Character(void);

        std::string     _name;
        int             _ap;
        AWeapon         *_weap;

    public:
        Character(std::string const & name);
        Character(Character const & src);
        ~Character();
        Character &operator=(Character const & rhs);
        
        void            recoverAP();
        void            equip(AWeapon*);
        void            attack(Enemy*);
        
        std::string virtual getName() const;
        int             getAp() const;
        std::string     getWeap() const;
};

std::ostream    &operator<<(std::ostream & o, Character & rhs);

#endif