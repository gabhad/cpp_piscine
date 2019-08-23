#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

    private:
        char        _first_name[16];
        char        _last_name[32];
        char        _nickname[16];
        char        _login[8];
        char        _postal[128];
        char        _email[64];
        char        _phone[16];
        char        _birthday[11];
        char        _fav_meal[32];
        char        _underwear[16];
        char        _secret[128];

        static int     _nbInst;
            
    public:
        Contact(void);
        ~Contact(void);

        void    setFirst(char *first);
        void    setLast(char *last);       
        void    setNick(char *nick);  
        void    setLogin(char *login);  
        void    setPostal(char *postal);  
        void    setEmail(char *email);  
        void    setPhone(char *phone);  
        void    setBday(char *bday);  
        void    setFavMeal(char *favMeal);
        void    setUnder(char *under);  
        void    setSecret(char *secret);  

        static int    getNbInst(void);

};

#endif