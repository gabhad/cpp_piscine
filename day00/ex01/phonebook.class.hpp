#ifndef PHONEBOOK_CLASS_H
# define PHONEBOOK_CLASS_H

#include "includes.hpp"

class Phonebook
{
public:
    Contact     _contact[8];
    int         _nb_of_contacts;

public:
    Phonebook(void);
    ~Phonebook(void);

    void    add_contact(void);
    void    search_contact(void);

    int     getNb_of_contacts(void) const;
};


#endif