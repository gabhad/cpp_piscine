#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

#include "IMateriaSource.hpp"

class MateriaSource : public IMateriaSource
{
    private:
        AMateria    *_mat[4];
    public:
        MateriaSource();
        MateriaSource(const MateriaSource &);
        ~MateriaSource();
        MateriaSource &operator=(const MateriaSource &);

        virtual void        learnMateria(AMateria*);
        virtual AMateria*   createMateria(std::string const & type);
};

#endif