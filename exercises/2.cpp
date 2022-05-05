#include <iostream>

int main()
{
    // inicialização de variáveis
    std::string name = "";
    std::string phrase = "";
    int years = 0;

    // pegar input e guardar nas variáveis
    std::cout << "Qual é o seu nome?" << std::endl;
    std::cin >> name;

    std::cout << "Qual é a sua idade?" << std::endl;
    std::cin >> years;

    std::cout << "Digite uma frase legal" << std::endl;
    std::cin >> phrase;

    // mostrar resultado na tela
    std::cout << std::endl
              << name << std::endl;
    std::cout << years << std::endl;
    std::cout << phrase << std::endl;

    return 0;
}
