#include <iostream>
#include <iomanip>
#include "Contact.hpp"

static std::string formatField(const std::string &s)
{
    if (s.length() > 10)
        return s.substr(0, 9) + ".";
    return s;
}

Contact::Contact() {
    this->first_Name = "";
    this->last_Name = "";
    this->nickname = "";
    this->phone_Number = "";
    this->darkest_Secret = "";
}

Contact::~Contact() {}

static void getValidInput(const std::string &prompt, std::string &field)
{
    do {
        std::cout << prompt;
        std::getline(std::cin, field);
        if (field.empty())
            std::cout << "Error: This field cannot be empty. Try again." << std::endl;
    } while (field.empty());
}

void    Contact::set_Contact()
{
    getValidInput("Enter first name: ", this->first_Name);
    getValidInput("Enter last name: ", this->last_Name);
    getValidInput("Enter nickname: ", this->nickname);
    getValidInput("Enter phone number: ", this->phone_Number);
    getValidInput("Enter darkest secret: ", this->darkest_Secret);
}

void    Contact::display_Contact(int index)
{
    std::cout << std::right << std::setw(10) << index << "|"
              << std::right << std::setw(10) << formatField(this->first_Name) << "|"
              << std::right << std::setw(10) << formatField(this->last_Name) << "|"
              << std::right << std::setw(10) << formatField(this->nickname) << std::endl;
}

void    Contact::display_Contact_Details()
{
    std::cout << "First Name: " << this->first_Name << std::endl;
    std::cout << "Last Name: " << this->last_Name << std::endl;
    std::cout << "Nickname: " << this->nickname << std::endl;
    std::cout << "Phone Number: " << this->phone_Number << std::endl;
    std::cout << "Darkest Secret: " << this->darkest_Secret << std::endl;
}
