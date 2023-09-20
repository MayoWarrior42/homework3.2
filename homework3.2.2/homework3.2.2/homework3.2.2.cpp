#include <iostream>
#include <string>


struct schet {
    int schet;
    std::string name;
    double balance;
};


int balance1(schet *score) {
    std::cout << "\nВведите новый баланс: ";
    std::cin >> score->balance;
    return 0;
}


int main()
{
    system("chcp 1251");
    schet score;
    std::cout << "Введите номер счета: ";
    std::cin >> score.schet;
    std::cout << "\nВведите имя: ";
    std::cin >> score.name;
    std::cout << "\nВведите баланс: ";
    std::cin >> score.balance;
    balance1(&score);
    std::cout << "\nВаш счет: " << score.name << ", " << score.schet << ", " << score.balance << ".";
    return 0;
}

