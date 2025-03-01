#ifndef AMATERIA_HPP
# define AMATERIA_HPP

class AMateria;

#include "ICharacter.hpp"

class AMateria
{
    protected:
        std::string const   _type;
        unsigned int        _xp;
    public:
        AMateria(std::string const & type);
        AMateria();
        AMateria(const AMateria &);
        virtual ~AMateria();
        AMateria &operator=(const AMateria &);

        std::string const   &getType() const; 
        unsigned int        getXP() const;
        virtual AMateria*   clone() const = 0;
        virtual void        use(ICharacter& target);
};

#endif