#include "Human.hpp"

void Human::meleeAttack(std::string const & target)
{
    std::cout << "Melee attack called on " << target << "!" << std::endl;
}

void Human::rangedAttack(std::string const & target)
{
    std::cout << "Ranged attack called on " << target << "!" << std::endl;
}

void Human::intimidatingShout(std::string const & target)
{
    std::cout << "Intimidating shout called on " << target << "!" << std::endl;
}

void Human::action(std::string const & action_name, std::string const & target)
{
    void        (Human::*ptr[])(std::string const &) = {
                    &Human::meleeAttack,
                    &Human::rangedAttack,
                    &Human::intimidatingShout };
    std::string command[3] = {
        "meleeAttack",
        "rangedAttack",
        "intimidatingShout"
    };
    int         i = 0;
    
    while (i < 3)
    {
        if (action_name == command[i])
        {
            (this->*ptr[i])(target);
            return;
        }
        i++;
        if (i == 3)
            std::cout << "Attack failed." << std::endl;
    }
}
