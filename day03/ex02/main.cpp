#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int     main(void)
{
    FragTrap    frag("Jason");
    FragTrap    copy(frag);
    FragTrap    assign;
    
    assign = copy;

    frag.rangedAttack("Mouloud");
    frag.meleeAttack("Kevin");

    frag.takeDamage(60);
    frag.takeDamage(60);

    frag.beRepaired(110);

    for (int i = 0; i < 5; i++)
        frag.vaulthunter_dot_exe("Brendon");

    ScavTrap    scav("Dylan");
    ScavTrap    scCopy(scav);
    ScavTrap    scAssign;
    
    scAssign = scCopy;

    scav.rangedAttack("Mouloud");
    scav.meleeAttack("Kevin");

    scav.takeDamage(60);
    scav.takeDamage(60);

    scav.beRepaired(110);

    for (int i = 0; i < 5; i++)
        scav.challengeNewcomer();
        
    return 0;
}
