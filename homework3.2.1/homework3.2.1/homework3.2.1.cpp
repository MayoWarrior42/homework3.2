#include <iostream>

enum class month {
    January = 1,
    February = 2,
    Marth = 3,
    April = 4,
    May = 5,
    June = 6,
    Jule = 7,
    August = 8,
    September = 9,
    October = 10,
    November = 11,
    December = 12
};


int main()
{
    setlocale(LC_ALL, "Russian");
    int m = static_cast<int>(month::May);
    while (m != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> m;
        switch (m) {
        case(1): std::cout << "\nЯнварь." << "\n"; break;
        case(2): std::cout << "Февраль." << "\n"; break;
        case(3): std::cout << "Март." << "\n"; break;
        case(4): std::cout << "Апрель." << "\n"; break;
        case(5): std::cout << "Май." << "\n"; break;
        case(6): std::cout << "Июнь." << "\n"; break;
        case(7): std::cout << "Июль." << "\n"; break;
        case(8): std::cout << "Август." << "\n"; break;
        case(9): std::cout << "Сентябрь." << "\n"; break;
        case(10): std::cout << "Октябрь." << "\n"; break;
        case(11): std::cout << "Ноябрь." << "\n"; break;
        case(12): std::cout << "Декабрь." << "\n"; break;
        case(0): std::cout << "До свидания!" << "\n"; break;
        default: std::cout << "Ошибка." << "\n";
        }
    }
    return 0;

}

