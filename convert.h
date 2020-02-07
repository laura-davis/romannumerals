#include <iostream>

using namespace std;

class convert {
public:
    void get_number();

    void convert_roman_numeral();

    void display_roman_numeral();

protected:
    int number;
    char roman_numeral;
};

void convert::get_number() {
    char terminator;
    std::cout << "Enter number ";
    std::cin >> number;
    std::cin.get(terminator);
};

void convert::convert_roman_numeral() {
    switch (number) {
        case 1:
            roman_numeral = 'I';
            break;
        case 5:
            roman_numeral = 'V';
            break;
        case 10:
            roman_numeral = 'X';
            break;
        case 50:
            roman_numeral = 'L';
            break;
        case 100:
            roman_numeral = 'C';
            break;
        default:
            roman_numeral = '?';
    }
}

void convert::display_roman_numeral() {
    std::cout << number;
    if (roman_numeral == '?')
        std::cout << "Cannot be converted" << std::endl;
    else
        std::cout << " gives the roman numeral " << roman_numeral << std::endl;
}