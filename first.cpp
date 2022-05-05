#include <iostream>

int main(void)
{
    std::cout << "first :)" << std::endl;

    do
    {
        std::cout << '\n'
                  << "Press the Enter key to continue.";
    } while (std::cin.get() != '\n');

    return 0;
}
