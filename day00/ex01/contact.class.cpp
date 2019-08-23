#include <iostream>
#include "contact.class.hpp"

Contact::Contact(void) {
    std::cout << "Constructor called" << std::endl;
    Contact::_nbInst += 1;
    return;
}

Contact::~Contact(void) {
    std::cout << "Destructor called" << std::endl;
    return;
}

int    Contact::getNbInst(void)  {
    return Contact::_nbInst;
}

void    Contact::setFirst(char *first) {
    this->_first_name = first;
}
void    Contact::setLast(char *last) {
    this->_last_name = last;
}
void    Contact::setNick(char *nick) {
    this->_nickname = nick;
}
void    Contact::setLogin(char *login) {
    this->_login = login;
}
void    Contact::setPostal(char *postal) {
    this->_postal = postal;
}
void    Contact::setEmail(char *email) {
    this->_email = email;
}
void    Contact::setPhone(char *phone) {
    this->_phone = phone;
}
void    Contact::setBday(char *bday) {
    this->_birthday = bday;
}
void    Contact::setFavMeal(char *favMeal) {
    this->_fav_meal = favMeal;
}
void    Contact::setUnder(char *under) {
    this->_underwear = under;
}
void    Contact::setSecret(char *secret) {
    this->_secret = secret;
}

int     Contact::_nbInst = 0;