#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    FragTrap    frag("Jason");
    FragTrap    copy(frag);
    FragTrap    assign;
    
    assign = copy;

    frag.rangedAttack("Mouloud");

    frag.takeDamage(120);

    frag.beRepaired(110);

    frag.vaulthunter_dot_exe("Brendon");

    ScavTrap    scav("Dylan");
    ScavTrap    scCopy(scav);
    ScavTrap    scAssign;
    
    scAssign = scCopy;

    scav.meleeAttack("Kevin");

    scav.takeDamage(120);

    scav.beRepaired(110);

    scav.challengeNewcomer();
        
    return 0;
}
