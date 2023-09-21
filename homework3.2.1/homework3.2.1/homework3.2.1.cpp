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
    December = 12,
    Exit = 0
};


int main()
{
    setlocale(LC_ALL, "Russian");
    int m = static_cast<int>(month::May);
    while (m != 0) {
        std::cout << "Введите номер месяца: ";
        std::cin >> m;
        switch (static_cast<month>(m)) {
        case month::January : std::cout << "\nЯнварь." << "\n"; break;
        case month::February : std::cout << "Февраль." << "\n"; break;
        case month::Marth : std::cout << "Март." << "\n"; break;
        case month::April : std::cout << "Апрель." << "\n"; break;
        case month::May: std::cout << "Май." << "\n"; break;
        case month::June: std::cout << "Июнь." << "\n"; break;
        case month::Jule: std::cout << "Июль." << "\n"; break;
        case month::August: std::cout << "Август." << "\n"; break;
        case month::September: std::cout << "Сентябрь." << "\n"; break;
        case month::October: std::cout << "Октябрь." << "\n"; break;
        case month::November: std::cout << "Ноябрь." << "\n"; break;
        case month::December: std::cout << "Декабрь." << "\n"; break;
        case month::Exit: std::cout << "До свидания!" << "\n"; break;
        default: std::cout << "Ошибка." << "\n";
        }
    }
    return 0;

}

