#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

    private:
        static int  count;
        char        first_name[16];
        char        last_name[32];
        char        nickname[16];
        char        login[8];
        char        postal[128];
        char        email[64];
        char        phone[16];
        char        birthday[11];
        char        fav_meal[32];
        char        underwear[16];
        char        secret[128];
            
    public:
        Contact(void);
        ~Contact(void);

};

#endif