#include "includes.hpp"

static int     get_string(Phonebook *book)
{
    std::string     input;
    
    std::cout << "What do you want to do?" << std::endl;
    std::cout << "ADD/SEARCH/EXIT: ";
    std::getline(std::cin,input);

    if (!input.compare("EXIT") || !input.compare("exit"))
        return 0;
    else if (!input.compare("ADD") || !input.compare("add"))
        book->add_contact();
    else if (!input.compare("SEARCH") || !input.compare("search"))
        book->search_contact();
    else
        std::cout << "Sorry, i didn't understand, can you please repeat ?" << std::endl;
    return 1;
}

int             main(void)
{
    Phonebook   book;
    while (get_string(&book))
        ;
    std::cout << "Thank you for your time. Have a good day!" << std::endl;
    return (0);
}