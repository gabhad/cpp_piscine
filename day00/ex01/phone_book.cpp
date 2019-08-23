#include "contact.class.hpp"
#include "iostream"

// creer fonction ADD_VALUE
// creer fonction SEARCH


void    add_contact(void) {
    char    buf[512];
    if (Contact::getNbInst() == 8) {
        std::cout << "Sorry, your phone book is full, you cannot add any more contact." << std::endl;
        return;
    }
    Contact contact;

    std::cout << "Please enter your contact's information" << std::endl;
    std::cout << "First name :" << std::endl;
    std::cin >> buf;
    contact.setFirst(buf);
    std::cout << "Last name: :" << std::endl;
    std::cin >> buf;
    contact.setLast(buf);
    std::cout << "Nickname :" << std::endl;
    std::cin >> buf;
    contact.setNick(buf);
    std::cout << "Login :" << std::endl;
    std::cin >> buf;
    contact.setLogin(buf);
    std::cout << "Postal address :" << std::endl;
    std::cin >> buf;
    contact.setPostal(buf);
    std::cout << "Email address :" << std::endl;
    std::cin >> buf;
    contact.setEmail(buf);
    std::cout << "Phone number :" << std::endl;
     std::cin >> buf;
    contact.setPhone(buf);   
    std::cout << "Birthday (dd/mm/yyyy) :" << std::endl;
    std::cin >> buf;
    contact.setBday(buf);
    std::cout << "Favorite meal :" << std::endl;
    std::cin >> buf;
    contact.setFavMeal(buf);
    std::cout << "Underwear color :" << std::endl;
    std::cin >> buf;
    contact.setUnder(buf);
    std::cout << "Darkest secret :" << std::endl;
    std::cin >> buf;
    contact.setSecret(buf);

    std::cout << "Number of instances : " << Contact::getNbInst() << std::endl;

}

void    input() {
    char    buffer[512];
    std::string add ("ADD");
    std::string search ("SEARCH");
    std::string exit ("EXIT");

    std::cin >> buffer;

    // si search : nouveau compare 
    if (!add.compare(buffer)) {
        add_contact(); 
    }
    else if (!search.compare(buffer)) {
        std::cout << "tata" << std::endl;
        
        //search();
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