#include <iostream>
#include "PhoneBook/PhoneBook.hpp"

int main()
{
    PhoneBook   phoneBook = PhoneBook();
    std::string command;

    while (true)
    {
        std::cout << "Enter a command (ADD, SEARCH, EXIT): ";
        std::getline(std::cin, command);

        if (command == "ADD")
        {
            phoneBook.add_Contact();
        }
        else if (command == "SEARCH")
        {
            phoneBook.search_Contacts();
        }
        else if (command == "EXIT")
        {
            std::cout << "Exiting the program." << std::endl;
            break;
        }
        else
        {
            std::cout << "Invalid command. Please try again." << std::endl;
        }
    }

    return 0;
}