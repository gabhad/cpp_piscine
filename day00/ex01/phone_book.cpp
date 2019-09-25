#include "contact.class.hpp"
#include "iostream"

// creer fonction SEARCH

int     ft_strlen(char *str) {
    int i;

    i = 0;
    while (str[i])
        i++;
    return (i);
}

void    print_next_contact(Contact contact, int i) {
    int len;
    int n;

    std::cout << "         " << i << "|";
    if ((len = ft_strlen(contact.getFirst())) < 11) {
        std::cout << "len = " << len;
        n = 0;
        while (n < (len - 10))
            std::cout << " ";
        std::cout << contact.getFirst() << "|";
    }
}

void    search_contacts(Contact *contacts) {
    (void) contacts;
}

Contact    add_contact(Contact contact) {
    char    buf[512];

    std::cout << "Please enter your contact's information" << std::endl;
    std::cout << "First name : ";
    std::cin >> buf;
    contact.setFirst(buf);
/*     std::cout << "Last name: : ";
    std::cin >> buf;
    contact.setLast(buf);
    std::cout << "Nickname : ";
    std::cin >> buf;
    contact.setNick(buf);
    std::cout << "Login : ";
    std::cin >> buf;
    contact.setLogin(buf);
    std::cout << "Postal address : ";
    std::cin >> buf;
    contact.setPostal(buf);
    std::cout << "Email address : ";
    std::cin >> buf;
    contact.setEmail(buf);
    std::cout << "Phone number : ";
     std::cin >> buf;
    contact.setPhone(buf);   
    std::cout << "Birthday (dd/mm/yyyy) : ";
    std::cin >> buf;
    contact.setBday(buf);
    std::cout << "Favorite meal : ";
    std::cin >> buf;
    contact.setFavMeal(buf);
    std::cout << "Underwear color : ";
    std::cin >> buf;
    contact.setUnder(buf);
    std::cout << "Darkest secret : ";
    std::cin >> buf;
    contact.setSecret(buf);
 */    std::cout << "Contact saved. What else can I do for you ?" << std::endl;
    return contact;
}

void    input() {
    char    buffer[512];
    Contact contacts[8];
    Contact temp;
    static int     i = 0;
    int     n;

    n = 0;
    std::string add ("ADD");
    std::string search ("SEARCH");
    std::string exit ("EXIT");

    std::cin >> buffer;

    if (!add.compare(buffer)) {
        std::cout << "i = " << i << std::endl;
        if (i > 7) {
            std::cout << "Sorry, your phone book is full, you cannot add any more contact." << std::endl;
            std::cout << "What else can I do for you ?" << std::endl;
            }
        else {
            std::cout << "name = " << contacts[0].getFirst() << std::endl;            
            contacts[0] = add_contact(temp);
            std::cout << "name = " << contacts[0].getFirst() << std::endl;
            i++;
        }
    }

    else if (!search.compare(buffer)) {
        if (i == 0)
            std::cout << "Sorry, there are no contacts to show. Please add contacts first, or exit." << std::endl;
        else
        {
            std::cout << "     index| firstname|  lastname|  nickname" << std::endl;
            std::cout << "toto" << std::endl;
            std::cout << "Contact numero " << n << " first name = " << contacts[n].getFirst() << std::endl;
/*             while (n < i) {
                print_next_contact(contacts[n], n);
                n++;
            } */
        }
            search_contacts(contacts);
    }

    else if (!exit.compare(buffer))
        return ;

    else {
        std::cout << "Sorry, I didn't understand your request. What would you like to do ?" << std::endl;
    }
    input();
}

int     main() {
    std::cout << "What would you like to do ?" << std::endl;
        input();
    return 0;
}