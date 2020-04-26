#include "SuperTrap.hpp"

int     main(void)
{
    SuperTrap   super("Toto");

    std::cout << "Energy Points = " << super.getEnergyPoints() << std::endl;
    std::cout << "Hit Points = " << super.getHitPoints() << std::endl;

    return 0;
}
