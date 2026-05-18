#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include "PhoneBook.hpp"

PhoneBook::PhoneBook()
{
    this->index = 0;
    this->total_Contacts = 0;
}

PhoneBook::~PhoneBook() {}

void    PhoneBook::add_Contact()
{
    this->contacts[this->index].set_Contact();
    this->index++;
    if (this->index == 8)
        this->index = 0;
    if (this->total_Contacts < 8)
        this->total_Contacts++;
}

void   PhoneBook::search_Contacts()
{
    if (this->total_Contacts == 0)
    {
        std::cout << "No contacts available. Please add a contact first." << std::endl;
        return;
    }
    std::cout << std::right << std::setw(10) << "Index" << "|"
              << std::right << std::setw(10) << "First Name" << "|"
              << std::right << std::setw(10) << "Last Name" << "|"
              << std::right << std::setw(10) << "Nickname" << std::endl;
    std::cout << "---------------------------------------------" << std::endl;
    for (int i = 0; i < this->total_Contacts; i++)
        this->contacts[i].display_Contact(i);
    std::string input;
    int index;

    while (true)
    {
        std::cout << "Enter the index of the contact to view details (or type 'exit' to return): ";
        std::getline(std::cin, input);
        if (input == "exit")
            break;

        index = atoi(input.c_str());
        if (index >= 0 && index < this->total_Contacts) {
            this->contacts[index].display_Contact_Details();
        } else {
            std::cout << "Invalid index. Please try again." << std::endl;
        }
            
    }
}

void    PhoneBook::display_Contacts()
{
    for (int i = 0; i < this->total_Contacts; i++)
        this->contacts[i].display_Contact(i);
}
