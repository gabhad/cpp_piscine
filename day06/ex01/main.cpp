#include <iostream>

struct  Data
{
    std::string s1;
    int         n;
    std::string s2;
};

std::string randomString(void)
{
    std::string str("");
    std::string abc("0123456789abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ");

    for (int i = 0; i < 8; i++)
        str += abc[static_cast<unsigned long>(rand()) %62];
    str[8] = 0;
    return str;
}

Data        *deserialize(void *raw)
{
    Data *data = reinterpret_cast<Data *>(raw);

    std::cout << "deserialization: " << std::endl;
    std::cout << "n = " << data->n << std::endl;
    std::cout << "s1 = " << data->s1 << std::endl;
    std::cout << "s2 = " << data->s2 << std::endl;
    return data;
}

void        *serialize(void)
{
    Data    *data = new Data;

    srand(static_cast<unsigned int>(time(NULL)));
    data->n = rand();
    data->s1 = randomString();
    data->s2 = randomString();
    std::cout << "n = " << data->n << std::endl;
    std::cout << "s1 = " << data->s1 << std::endl;
    std::cout << "s2 = " << data->s2 << std::endl;
    return reinterpret_cast<void *>(data);
}

int         main()
{
    Data    *data;
    void    *ptr;

    ptr = serialize();
    data = deserialize(ptr);
    delete data;
}