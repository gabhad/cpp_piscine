#ifndef PEON_HPP
# define PEON_HPP

#include "Victim.hpp"

class Peon : public Victim
{
private:
    Peon(void);
public:
    Peon(std::string name);
    Peon(const Peon & src);
    ~Peon();

    void    getPolymorphed(void) const;

    Peon    &operator=(const Peon &rhs);
};

#endif