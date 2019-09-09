#include "contact.class.hpp"
#include "iostream"

// creer fonction ADD_VALUE
// creer fonction SEARCH

void    search_contacts(void) {
    if (Contact::getNbInst() == 0) {
        std::cout << "Sorry, there are no contacts to show. Please add contacts first, or exit." << std::endl;
        return;
    }
  //  std::cout << list[0]::getFirst() << std::endl;
}

void    add_contact(void) {
    char    buf[512];
    int     i;

    i = Contact::getNbInst();
    std::cout << "i = " << i << std::endl;    
    if (i == 8) {
        std::cout << "Sorry, your phone book is full, you cannot add any more contact." << std::endl;
        return;
    }
    Contact contact;

    std::cout << "Please enter your contact's information" << std::endl;
    std::cout << "First name : ";
    std::cin >> buf;
    contact.setFirst(buf);
    std::cout << "Last name: : ";
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
    std::cout << "Contact saved. What else can I do for you ?" << std::endl;
    return ;

    std::cout << "Number of instances : " << Contact::getNbInst() << std::endl;

}

void    input() {
    char    buffer[512];
 //   Contact contacts[8];
    std::string add ("ADD");
    std::string search ("SEARCH");
    std::string exit ("EXIT");

    std::cin >> buffer;

    if (!add.compare(buffer)) {
        add_contact(); 
    }
    else if (!search.compare(buffer)) {
        search_contacts();
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