#ifndef AWEAPON_HPP
# define AWEAPON_HPP

#include <iostream>

class AWeapon
{
    private:
        std::string     _name;
        int             _damage;
        int             _apcost;

    public:
        AWeapon(std::string const & name, int damage, int apcost);
        AWeapon();
        AWeapon(AWeapon const & src);
        virtual ~AWeapon();
        AWeapon &operator=(AWeapon const & rhs);

        std::string     virtual getName() const;
        int             getDamage() const;
        int             getAPCost() const;
        
        virtual void    attack() const = 0;
};

#endif