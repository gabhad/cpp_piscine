#ifndef VICTIM_HPP
# define VICTIM_HPP

#include <iostream>

class Victim
{
private:
    std::string     _name;

protected: 
    Victim(void);

public:
    Victim(std::string name);
    Victim(const Victim & src);
    ~Victim();

    std::string     getName(void) const;
    void            setName(std::string name);

    virtual void    getPolymorphed(void) const;

    Victim          &operator=(const Victim &rhs);
};

std::ostream        &operator <<(std::ostream & o, Victim const & rhs);

#endif