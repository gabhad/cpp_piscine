#include "Pony.hpp"


static void     ponyOnTheStack(std::string name)
{
    Pony    pony(name);
    pony.gambade();
    pony.broute();
}

static void     ponyOnTheHeap(std::string name)
{
    Pony *pony = new Pony(name);
    pony->gambade();
    pony->broute();
    delete pony;
}

int     main(int argc, char **argv)
{
    if (argc == 3)
    {
        ponyOnTheHeap(argv[1]);
        ponyOnTheStack(argv[2]);
    }
    else
    {
        ponyOnTheHeap("Jason");
        ponyOnTheStack("Brendon");
    }
    return 0;
}