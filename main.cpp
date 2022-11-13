#include <iostream>

int main() {
    int year = 0;
    std::cout << "Enter a year: ";
    std::cin >> year;
    std::cout << year;

    if (year % 4 == 0) {
        std::cout << " is a leap year";
    } else {
        std::cout << " is not a leap year";
    }

    return 0;
}
