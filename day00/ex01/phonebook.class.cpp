#include "includes.hpp"

Phonebook::Phonebook()
{
    std::cout << "**PHONEBOOK CREATED**" << std::endl;
    this->_nb_of_contacts = 0;
    return;
}

Phonebook::~Phonebook()
{
    std::cout << "**PHONEBOOK DESTROYED**" << std::endl;
    return;
}

void    Phonebook::add_contact(void)
{
    std::string     input;
    int             i;

    i = _nb_of_contacts;
    if (i == 7)
        std::cout << "I am sorry but your Phonebook is full. You cannot add any more contact." << std::endl;
    else
    {
        std::cout << "\nYou will add a new contact. If you want to cancel, please type \"cancel\"." << std::endl;
        std::getline(std::cin,input);
        if (!input.compare("cancel"))
        {
            std::cout << "\n**Operation cancelled**\n" << std::endl;
            return;
        }
        Contact     contact;
        this->_contact[i] = &contact;
    }
    std::cout << "\nYou successfully added " << this->_contact[i]->getFirst_name() << ' ' << this->_contact[i]->getLast_name();
    std::cout << " to your phonebook.\n" << std::endl;
    this->_nb_of_contacts++;
}

void    Phonebook::search_contact(void)
{
    int     i = 0;

    if (!this->_nb_of_contacts)
    {
        std::cout << "There are currently no contacts to display." << std::endl;
        return;
    }
    std::cout << "        id|first_name| last_name|  nickname|" << std::endl;
    while (i < this->_nb_of_contacts)
    {
        std::cout << "name = " << this->_contact[i]->getFirst_name() << std::endl;
        /* std::cout << "         " << i << "|";
        this->_contact[i]->display_contact();*/
        i++;
    }
}