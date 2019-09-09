#include <iostream>
#include "contact.class.hpp"

Contact::Contact(void) {
    Contact::_nbInst += 1;
    return;
}

Contact::~Contact(void) {
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

char    *Contact::getFirst() {
    return this->_first_name;
}
char    *Contact::getLast() {
    return this->_last_name;
}
char    *Contact::getNick() {
    return this->_nickname;
}
char    *Contact::getLogin() {
    return this->_login;
}
char    *Contact::getPostal() {
    return this->_postal;
}
char    *Contact::getEmail() {
    return this->_email;
}
char    *Contact::getPhone() {
    return this->_phone;
}
char    *Contact::getBday() {
    return this->_birthday;
}
char    *Contact::getFavMeal() {
    return this->_fav_meal;
}
char    *Contact::getUnder() {
    return this->_underwear;
}
char    *Contact::getSecret() {
    return this->_secret;
}

int     Contact::_nbInst = 0;