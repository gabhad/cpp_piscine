#include <iostream>

class Base {public: virtual ~Base(){};};
class A : public Base {};
class B : public Base {};
class C : public Base {};

// **************************************************************//

Base *  generate(void)
{
    srand(time(NULL));
    int i = rand() % 3;

    if (i == 0)
    {
        Base *elem = new A;
        return elem;
    }
    else if (i == 1)
    {        
        Base *elem = new B;
        return elem;
    }   
    else
    {
        Base *elem = new C;
        return elem;
    }
}

void    identify_from_pointer(Base *p)
{
    if (A *temp = dynamic_cast<A*>(p))
        std::cout << "The element is A !" << std::endl;
    else if (B *temp = dynamic_cast<B*>(p))
        std::cout << "The element is B !" << std::endl;
    else if (C *temp = dynamic_cast<C*>(p))
        std::cout << "The element is C !" << std::endl;
    else
        std::cout << "Error !" << std::endl;    
}

void    identify_from_reference(Base &p)
{
    try
    {
        A &temp = dynamic_cast<A&>(p);
        std::cout << "The element is A !" << std::endl;
        (void)temp;
    }
    catch(const std::bad_cast& e)
    {
        try
        {
            B &tempBis = dynamic_cast<B&>(p);
            std::cout << "The element is B !" << std::endl;
            (void) tempBis;
        }
        catch(const std::bad_cast& e)
        {
            try
            {
                C &tempTer = dynamic_cast<C&>(p);
                std::cout << "The element is C !" << std::endl;
                (void) tempTer;
            }
            catch(const std::bad_cast& e)
            {
                std::cerr << "Error" << std::endl;
            }
        } 
    }
}

int     main(void)
{
    Base *base = generate();
    identify_from_pointer(base);
    identify_from_reference(*base);
    delete base;
    
    return 0;
}