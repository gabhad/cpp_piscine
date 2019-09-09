#ifndef CONTACT_CLASS_H
# define CONTACT_CLASS_H

class Contact {

    private:
        char        *_first_name;
        char        *_last_name;
        char        *_nickname;
        char        *_login;
        char        *_postal;
        char        *_email;
        char        *_phone;
        char        *_birthday;
        char        *_fav_meal;
        char        *_underwear;
        char        *_secret;

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

        char    *getFirst(void);
        char    *getLast(void);
        char    *getNick(void);
        char    *getLogin(void);
        char    *getPostal(void);
        char    *getEmail(void);
        char    *getPhone(void);
        char    *getBday(void);
        char    *getFavMeal(void);
        char    *getUnder(void);
        char    *getSecret(void);

        static int    getNbInst(void);

};

#endif