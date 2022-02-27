#include<iostream>

int main() {
    int favorite_number;
    std::cout << "Enter your favorite number from 1 to 400: ";
    std::cin >> favorite_number;
    std::cout << "What? That's my favorite number too!" << std::endl;
    std::cout << "No really!, " << favorite_number << " is  my favorite number!" << std::endl;
    return 0;
}