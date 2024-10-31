#include "Phonebook.hpp"

using namespace std;

int	main(void)
{
    Phonebook	phonebook;
    string		cmd;

    while (1)
    {
        cout << "Enter a command: ";
        get_line(cin, cmd);
        if (cmd == "ADD")
            phonebook.add();
        else if (cmd == "SEARCH")
            phonebook.search();
        else if (cmd == "EXIT")
            break ;
        else
            cout << "Invalid command" << endl;
    }
    return (0);
}