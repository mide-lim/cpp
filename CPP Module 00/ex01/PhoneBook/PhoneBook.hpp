#include <iomanip>
#include "../Contact/Contact.hpp"

class PhoneBook
{
private:
    Contact contacts[8];
    int index;
    int total_Contacts;
public:
    PhoneBook();
    ~PhoneBook();
    void add_Contact();
    void search_Contacts();
    void display_Contacts();
};
