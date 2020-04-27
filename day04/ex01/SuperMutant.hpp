#ifndef SUPERMUTANT_HPP
# define SUPERMUTANT_HPP

#include "Enemy.hpp"

class SuperMutant : public Enemy
{
    private:

    public:
        SuperMutant(void);
        SuperMutant(SuperMutant const & src);
        ~SuperMutant();
        SuperMutant &operator=(SuperMutant const & rhs);

        void        takeDamage(int damage);
};

#endif