#include <iostream>

struct address {
    std::string city;
    std::string street;
    int house;
    int appart;
    int index;
};

void country(address);


int main()
{
    system("chcp 1251");
    address adres;
    std::cout << "\nГород: ";
    std::cin >> adres.city;
    std::cout << "\nУлица: ";
    std::cin >> adres.street;
    std::cout << "\nНомер дома: ";
    std::cin >> adres.house;
    std::cout << "\nНомер квартиры: ";
    std::cin >> adres.appart;
    std::cout << "\nИндекс: ";
    std::cin >> adres.index;
    country(adres);

    return 0;
}

void country(address adres) {
    std::cout << "\nГород: " << adres.city;
    std::cout << "\nУлица: " << adres.street;
    std::cout << "\nНомер дома: " << adres.house;
    std::cout << "\nНомер квартиры: " << adres.appart;
    std::cout << "\nИндекс: " << adres.index;
}