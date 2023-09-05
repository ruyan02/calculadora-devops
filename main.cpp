#include <iostream>

int main() {
    char operacao;
    double num1, num2, resultado;

    // Solicita a operação ao usuário
    std::cout << "Escolha a operacao (+, -, *, /): ";
    std::cin >> operacao;

    // Solicita os dois números
    std::cout << "Digite o primeiro numero: ";
    std::cin >> num1;

    std::cout << "Digite o segundo numero: ";
    std::cin >> num2;

    // Realiza a operação selecionada e exibe o resultado
    switch (operacao) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 != 0) {
                resultado = num1 / num2;
            } else {
                std::cout << "Erro: Divisao por zero!" << std::endl;
                return 1;  // Encerra o programa com código de erro 1
            }
            break;
        default:
            std::cout << "Operacao invalida!" << std::endl;
            return 1;  // Encerra o programa com código de erro 1
    }

    std::cout << "Resultado: " << resultado << std::endl;

    return 0;
}