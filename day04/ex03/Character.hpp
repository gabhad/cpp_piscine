#ifndef CHARACTER_HPP
# define CHARACTER_HPP

#include "ICharacter.hpp"
#include "AMateria.hpp"

class Character
{
    private:
        std::string     _name;
        AMateria        *_materia[4];
    public:
        Character(std::string name);
        Character();
        Character(const Character &);
        ~Character();
        Character &operator=(const Character &);

        virtual std::string const & getName() const;
        virtual void                equip(AMateria* m);
        virtual void                unequip(int idx);
        virtual void                use(int idx, ICharacter& target);
};

#endif