#include "includes.hpp"

Phonebook::Phonebook()
{
    this->_nb_of_contacts = 0;
    return;
}

Phonebook::~Phonebook()
{
    return;
}

void    Phonebook::add_contact(void)
{
    std::string     input;
    int             i;

    i = _nb_of_contacts;
    if (i == 8)
    {
        std::cout << "I am sorry but your Phonebook is full. You cannot add any more contact.\n" << std::endl;
        return;
    }
    else
    {
        Contact     contact;
        this->_contact[i] = contact;
        std::cout << "Please enter your contact's info below." << std::endl;
        this->_contact[i].setFirst_name();
        this->_contact[i].setLast_name();
        this->_contact[i].setNickname();
        this->_contact[i].setLogin();
        this->_contact[i].setPostal_address();
        this->_contact[i].setEmail_address();
        this->_contact[i].setPhone_number();
        this->_contact[i].setBday();
        this->_contact[i].setFav_meal();
        this->_contact[i].setUnderwear_color();
        this->_contact[i].setSecret();
        
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
        std::cout << "There are currently no contacts to display.\n" << std::endl;
        return;
    }
    std::cout << "        id|first_name| last_name|  nickname|" << std::endl;
    while (i < this->_nb_of_contacts)
    {
        std::cout << "         " << i << "|";
        this->_contact[i].display_contact();
        i++;
    }
    std::cout << "What contact do you want to see ? Enter contact id below." << std::endl;
    std::getline(std::cin,input);
    if (input.compare("0") && input.compare("1") && input.compare("2") && input.compare("3") && input.compare ("4")
            && input.compare("5") && input.compare("6") && input.compare("7"))
    {
        std::cout << "Please enter a valid id.\n" << std::endl;
        this->search_contact();
    }
    else if (std::stoi(input) > -1 && std::stoi(input) < this->getNb_of_contacts())
        this->_contact[std::stoi(input)].show_contact();
    else if ((std::stoi(input) < 0 || std::stoi(input) >= this->getNb_of_contacts()))
    {
        std::cout << "There is no contact with that id. Please try again.\n" << std::endl;
        this->search_contact();
    }
}

int     Phonebook::getNb_of_contacts(void) const
{
    return this->_nb_of_contacts;
}
