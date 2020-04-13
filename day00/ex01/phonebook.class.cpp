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
        Contact     contact;
        this->_contact[i] = contact;
        std::cout << "Please enter your contact's info below." << std::endl;
        this->_contact[i].setFirst_name();
        this->_contact[i].setLast_name();
        this->_contact[i].setNickname();
    /*     this->setLogin();
        this->setPostal_address();
        this->setEmail_address();
        this->setPhone_number();  ///!!!\\\ NE PAS OUBLIER DE DECOMMENTER
        this->setBday();
        this->setFav_meal();
        this->setUnderwear_color();
        this->setSecret(); */
        
    }
    std::cout << "\nYou successfully added " << this->_contact[i].getFirst_name() << ' ' << this->_contact[i].getLast_name();
    std::cout << " to your phonebook.\n" << std::endl;
    this->_nb_of_contacts++;
}

void    Phonebook::search_contact(void)
{
    int         i = 0;
    std::string input;

    if (!this->_nb_of_contacts)
    {
        std::cout << "There are currently no contacts to display." << std::endl;
        return;
    }
    std::cout << "        id|first_name| last_name|  nickname|" << std::endl;
    while (i < this->_nb_of_contacts)
    {
        std::cout << "         " << i << "|";
        this->_contact[i].display_contact();
        i++;
    }
    std::cout << "What contact do you want to see ? Enter contact id or 'exit' to leave." << std::endl;
    std::cin >> input;
    if (!input.compare("exit"))
        return ;
    else if (std::stoi(input) > -1 && std::stoi(input) < this->getNb_of_contacts())
        this->_contact[i].show_contact();
    else if ((std::stoi(input) < 0 || std::stoi(input) >= this->getNb_of_contacts()))
    {
        std::cout << "There is no contact with that id. Please try again." << std::endl;
        this->search_contact();
    }
    else
    {
        std::cout << "Please enter a valid id." << std::endl;
        this->search_contact();
    }
}

int     Phonebook::getNb_of_contacts(void) const
{
    return this->_nb_of_contacts;
}
