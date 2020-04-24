#include "FragTrap.hpp"

int     main(void)
{
    FragTrap    *frag = new FragTrap("Jason");
    FragTrap    *copy = new FragTrap(*frag);
    FragTrap    assign = *frag;

    frag->rangedAttack("Mouloud");
    frag->meleeAttack("Kevin");

    frag->takeDamage(60);
    frag->takeDamage(60);

    frag->beRepaired(110);

    for (int i = 0; i < 5; i++)
        frag->vaulthunter_dot_exe("Brendon");

    delete frag;
    delete copy;
    return 0;
}