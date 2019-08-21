#include "contact.class.hpp"
#include "iostream"

// creer fonction COMPARE
// creer fonction ADD_VALUE
// creer fonction SEARCH

void    input() {
    char    buffer[512];
    std::cin >> buffer;

    // fonction compare du buffer avec les 3 fonctions clés : cf sample 7
    // si add : nouvelle entree dans la limite de la static : cf sample 8
    // si search : nouveau compare 
    // si exit : on return
    // si autre : nouvelle commande
    if (!compare(buffer, "ADD")) {
        add_value(); 
    }
    else if (!compare(buffer, "SEARCH")) {
        search();
    }
    else if (!compare(buffer, "EXIT"))
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