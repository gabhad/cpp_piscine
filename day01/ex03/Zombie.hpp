#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

#include <iostream>
#include <string>

class Zombie
{
private:
    std::string     _name;

public:
    Zombie(std::string name);
    Zombie(void);
    ~Zombie(void);
    
    void            announce(void) const;

    void            setName(std::string);
    void            setType(std::string);
    std::string     getName(void) const;
    std::string     getType(void) const;

};

#endif
