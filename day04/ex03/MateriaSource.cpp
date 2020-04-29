#include "MateriaSource.hpp"

MateriaSource::MateriaSource()
{
}

MateriaSource::MateriaSource(const MateriaSource & src)
{
    *this = src;
}

MateriaSource::~MateriaSource()
{
}

MateriaSource &MateriaSource::operator=(const MateriaSource & rhs)
{
    if (this != &rhs)
        for (size_t i = 0; i < 4; i++)
            this->_mat[i] = rhs._mat[i];
    return *this;
}

void        MateriaSource::learnMateria(AMateria* mat)
{
    for (size_t i = 0; i < 4; i++)
        if (!this->_mat[i])
        {
            this->_mat[i] = mat;
            return;
        }
}

AMateria*   MateriaSource::createMateria(std::string const & type)
{
    for (size_t i = 0; i < 4; i++)
    {
        if (this->_mat[i]->getType() == type)
        {
            AMateria *mat = this->_mat[i];
            return mat;
        }
    }
    return 0;
}
