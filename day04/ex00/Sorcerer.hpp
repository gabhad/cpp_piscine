#ifndef SORCERER_HPP
# define SORCERER_HPP

#include <iostream>
#include "Victim.hpp"

class Sorcerer
{
private:
    Sorcerer(void);

    std::string     _name;
    std::string     _title;

public:
    Sorcerer(std::string name, std::string title);
    Sorcerer(const Sorcerer & src);
    ~Sorcerer();

    std::string getName(void) const;
    std::string getTitle(void) const;
    void        setName(std::string const name);
    void        setTitle(std::string const title);
    void        polymorph(Victim const &target) const;

    Sorcerer    &operator=(const Sorcerer &rhs);
};

std::ostream    &operator<<(std::ostream &o, const Sorcerer &rhs);

#endif