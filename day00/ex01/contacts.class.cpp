#include "includes.hpp"

Contact::Contact(void)
{
    std::cout << "**CONTACT CREATED**" << std::endl;
    std::cout << "Please enter your contact's info below." << std::endl;
    this->setFirst_name();
    this->setLast_name();
    this->setNickname();
    this->setLogin();
    this->setPostal_address();
    this->setEmail_address();
    this->setPhone_number();
    this->setBday();
    this->setFav_meal();
    this->setUnderwear_color();
    this->setSecret();
    return;
}

Contact::~Contact(void)
{
    std::cout << "**CONTACT DESTROYED**" << std::endl;
    return;
}

// List of setters

void            Contact::setFirst_name(void)
{
    std::string     input;

    std::cout << "First name: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nFirst name: ";
        std::getline(std::cin,input);
    }
    this->_first_name = input;
}

void            Contact::setLast_name(void)
{
    std::string     input;

    std::cout << "Last name: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nLast name: ";
        std::getline(std::cin,input);
    } 
    this->_last_name = input;
}

void            Contact::setNickname(void)
{
    std::string     input;

    std::cout << "Nickname: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nNickname: ";
        std::getline(std::cin,input);
    } 
    this->_nickname = input;
}

void            Contact::setLogin(void)
{
    std::string     input;

    std::cout << "Login: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nLogin: ";
        std::getline(std::cin,input);
    } 
    this->_login = input;
}

void            Contact::setPostal_address(void)
{
    std::string     input;

    std::cout << "Postal address: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nPostal address: ";
        std::getline(std::cin,input);
    } 
    this->_postal_address = input;
}

void            Contact::setEmail_address(void)
{
    std::string     input;

    std::cout << "Email address: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nEmail address: ";
        std::getline(std::cin,input);
    } 
    this->_email_address = input;
}

void            Contact::setPhone_number(void)
{
    std::string     input;

    std::cout << "Phone number: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nPhone number: ";
        std::getline(std::cin,input);
    } 
    this->_phone_number = input;
}

void            Contact::setBday(void)
{
    std::string     input;

    std::cout << "Birthday: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nBirthday: ";
        std::getline(std::cin,input);
    } 
    this->_bday = input;
}

void            Contact::setFav_meal(void)
{
    std::string     input;

    std::cout << "Favorite meal: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nFavorite meal: ";
        std::getline(std::cin,input);
    } 
    this->_fav_meal = input;
}

void            Contact::setUnderwear_color(void)
{
    std::string     input;

    std::cout << "Underwear color: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nUnderwear color: ";
        std::getline(std::cin,input);
    } 
    this->_underwear_color = input;
}

void            Contact::setSecret(void)
{
    std::string     input;

    std::cout << "Darkest secret: ";
    std::getline(std::cin,input);
    while (input.empty())
    {
        std::cout << "You didn't enter a valid data. Please try again.\nDarkest secret: ";
        std::getline(std::cin,input);
    } 
    this->_secret = input;
}


//List of getters

std::string     Contact::getFirst_name(void) const
{
    return (this->_first_name);
}

std::string     Contact::getLast_name(void) const
{
    return (this->_last_name);
}

std::string     Contact::getNickname(void) const
{
    return (this->_nickname);
}

std::string     Contact::getLogin(void) const
{
    return (this->_login);
}

std::string     Contact::getPostal_address(void) const
{
    return (this->_postal_address);
}

std::string     Contact::getEmail_address(void) const
{
    return (this->_email_address);
}

std::string     Contact::getPhone_number(void) const
{
    return (this->_phone_number);
}

std::string     Contact::getBday(void) const
{
    return (this->_bday);
}

std::string     Contact::getFav_meal(void) const
{
    return (this->_fav_meal);
}

std::string     Contact::getUnderwear_color(void) const
{
    return (this->_underwear_color);
}

std::string     Contact::getsecret(void) const
{
    return (this->_secret);
}

void            Contact::display_contact(void) const
{
    if (this->getFirst_name().length() > 9)
        std::cout << this->getFirst_name().substr(0,9) << ".|";
    else
    {
        std::cout << std::setfill (' ') << std::setw (10);
        std::cout << this->getFirst_name() << "|";
    }
    if (this->getLast_name().length() > 9)
        std::cout << this->getLast_name().substr(0,9) << ".|";
    else
    {
        std::cout << std::setfill (' ') << std::setw (10);
        std::cout << this->getLast_name() << "|";
    }
    if (this->getNickname().length() > 9)
        std::cout << this->getNickname().substr(0,9) << ".|" << std::endl;
    else
    {
        std::cout << std::setfill (' ') << std::setw (10);
        std::cout << this->getNickname() << "|" << std::endl;
    }
}
