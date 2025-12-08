#include <iostream>
#include <string>

int main()
{
    std::string s;
    std::cin >> s;

    int n = s.length();
    bool invert = true;

    for (int i = 1; i < n; i++)
    {
        if (!isupper(s[i]))
        {
            invert = false;
            break;
        }
    }

    if (invert)
    {
        for (char &c : s)
        {
            if (islower(c))
            {
                c = toupper(c);
            }
            else
            {
                c = tolower(c);
            }
        }
    }

    std::cout << s << "\n";

    return 0;
}