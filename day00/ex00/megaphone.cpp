#include <iostream>

int     main(int argc, char **argv) {
    int     i = 1;
    int     j = 0;
    
    if (argc == 1)
        std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
    else {
        while (i < argc) {
            while (argv[i][j]) {
                if ( argv[i][j] > 96 && argv[i][j] < 123 )
                    std::cout << char(argv[i][j] - 32);
                else
                    std::cout << char(argv[i][j]);
                j++;
            }
            j = 0;
            i++;
            }
            std::cout << std::endl;
        }
    return 0;
}