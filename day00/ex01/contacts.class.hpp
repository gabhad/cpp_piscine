#ifndef CONTACTS_CLASS_H
# define CONTACTS_CLASS_H

#include "includes.hpp"

class   Contact {

    private:
        std::string   _first_name;
        std::string   _last_name;
        std::string   _nickname;
        std::string   _login;
        std::string   _postal_address;
        std::string   _email_address;
        std::string   _phone_number;
        std::string   _bday;
        std::string   _fav_meal;
        std::string   _underwear_color;
        std::string   _secret;

    public:
        Contact(void);
        ~Contact(void);
        
        // List of setters
        void            setFirst_name(void);
        void            setLast_name(void);
        void            setNickname(void);
        void            setLogin(void);
        void            setPostal_address(void);
        void            setEmail_address(void);
        void            setPhone_number(void);
        void            setBday(void);
        void            setFav_meal(void);
        void            setUnderwear_color(void);
        void            setSecret(void);

        // List of getters
        std::string     getFirst_name(void) const;
        std::string     getLast_name(void) const;
        std::string     getNickname(void) const;
        std::string     getLogin(void) const;
        std::string     getPostal_address(void) const;
        std::string     getEmail_address(void) const;
        std::string     getPhone_number(void) const;
        std::string     getBday(void) const;
        std::string     getFav_meal(void) const;
        std::string     getUnderwear_color(void) const;
        std::string     getsecret(void) const;

        void            display_contact(void) const;
};

#endif
