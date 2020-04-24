#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "NinjaTrap.hpp"

int     main(void)
{
    FragTrap    frag("Jason");
    ScavTrap    scav("Kevin");
    NinjaTrap   ninja("Ninja");

    ninja.rangedAttack("Toto");
    ninja.ninjaShoebox(frag);
    ninja.ninjaShoebox(scav);

    return 0;
}
