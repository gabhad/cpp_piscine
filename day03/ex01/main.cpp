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

    copy.takeDamage(60);
    copy.takeDamage(60);

    copy.beRepaired(110);

    for (int i = 0; i < 5; i++)
        assign.vaulthunter_dot_exe("Brendon");

    ScavTrap    scav("Dylan");
    ScavTrap    scCopy(scav);
    ScavTrap    scAssign;
    
    scAssign = scCopy;

    scav.rangedAttack("Mouloud");
    scav.meleeAttack("Kevin");

    scCopy.takeDamage(60);
    scCopy.takeDamage(60);

    scCopy.beRepaired(110);

    for (int i = 0; i < 5; i++)
        scAssign.challengeNewcomer();
        
    return 0;
}
