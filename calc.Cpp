//WARNING DO NOT USE VS CODE FOR THIS FILE
#include <iostream>

int main()
{
    char op;
    double num1;
    double num2;
    double result;

    std::cout << "Enter  the operatoions ( - or + or * or/)";
    std::cin >> op;

    std::cout << "Enter the first number: ";
    std::cin >> num1;

    std::cout << "Enter the second number: ";
    std::cin >> num2;

    switch (op) {
        case '+':
            result = num1 + num2;
            std::cout << "Yor result is: " << result << '\n';
            break;
        case '-':
            result = num1 - num2;
            std::cout << "Yor result is: " << result << '\n';
            break;
        case '*':
            result = num1 * num2;
            std::cout << "Yor result is: " << result << '\n';
            break;
        case '/':
            result = num1 / num2;
            std::cout << "Yor result is: " << result << '\n';
            break;
        default:
            std::cout << " INVALID RESPONSE (sorry)";
            break;
    }

}