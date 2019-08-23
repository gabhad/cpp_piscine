#include "contact.class.hpp"
#include "iostream"

// creer fonction ADD_VALUE
// creer fonction SEARCH

void    input() {
    char    buffer[512];
    std::string add ("ADD");
    std::string search ("SEARCH");
    std::string exit ("EXIT");

    std::cin >> buffer;

    // si add : nouvelle entree dans la limite de la static : cf sample 8
    // si search : nouveau compare 
    // si exit : on return
    // si autre : nouvelle commande
    if (!add.compare(buffer)) {
        std::cout << "toto" << std::endl;
        //add_value(); 
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