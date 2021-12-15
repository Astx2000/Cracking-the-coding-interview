#include <iostream>

bool unique(std::string str)
{

    for (int i = 0; i < str.size(); ++i)
    {
        if (str[i] >= 65 && str[i] <= 90)
        {
            str[i] = str[i] + 32;
        }

        if (str[i] == str[i + 1])
            return false;

        if (str[i] == ' ')
        {
            if (str[i + 1] == str[i])
                return false;
        }
    }
    return true;
}

int main() {
    std::string str;
    std::cin >> str;
    bool c = unique(str);
    std::cout << c;
    return 0;
}