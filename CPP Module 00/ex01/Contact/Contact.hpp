#include <iostream>

class Contact
{
    private:
        std::string first_Name;
        std::string last_Name;
        std::string nickname;
        std::string phone_Number;
        std::string darkest_Secret;

    public:
        Contact();
        ~Contact();

        void    set_Contact();
        void    display_Contact(int index);
        void    display_Contact_Details();
};