#include <iostrem>

using namespace std;

int main(int ac, char **av)
{
    int i, j;

    i = 1;
    j = 0;
    if (ac > 1)
    {
        while (av[i])
        {
            while (av[i][j])
            {
                cout << (char)toupper(av[i][j]);
                j++;
            }
            i++;
        }
    }
    else
        cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
    return (0);
}
