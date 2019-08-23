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
    contact.setFirst(std::cin);
    std::cout << "Last name: :" << std::endl;
    std::cin >> buf;
    contact.setFirst(buf);
    std::cout << "Nickname :" << std::endl;
    std::cin >> buf;
    contact.setFirst(buf);
    std::cout << "Login :" << std::endl;
    std::cin >> buf;
    contact.setFirst(buf);
    std::cout << "Postal address :" << std::endl;
    std::cin >> buf;
    contact.setFirst(buf);
    std::cout << "Email address :" << std::endl;
    std::cin >> buf;
    contact.setFirst(buf);
    std::cout << "Phone number :" << std::endl;
    std::cout << "Birthday (dd/mm/yyyy) :" << std::endl;
    std::cout << "Favorite meal :" << std::endl;
    std::cout << "Underwear color :" << std::endl;
    std::cout << "Darkest secret :" << std::endl;


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