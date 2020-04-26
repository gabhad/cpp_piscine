#include "SuperTrap.hpp"

int     main(void)
{
    SuperTrap   super("Toto");
    SuperTrap   *sup2 = new SuperTrap(("Supsup"));

    std::cout << "Energy Points = " << super.getEnergyPoints() << std::endl;
    std::cout << "Hit Points = " << super.getHitPoints() << std::endl;

    sup2->rangedAttack("Toto");
    sup2->meleeAttack("Toto");

    delete sup2;
    return 0;
}
