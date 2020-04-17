#include "Human.hpp"

int main(void)
{
    Human   human;

    human.action("meleeAttack", "toto");
    human.action("rangedAttack", "tata");
    human.action("intimidatingShout", "tutu");
    human.action("Prout", "titi");
    return (0);
}