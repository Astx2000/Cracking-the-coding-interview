#include <iostream>
#include <algorithm>

bool permutation(std::string str1, std::string str2)
{
    std::sort(str1.begin(), str1.end());
    std::sort(str2.begin(), str2.end());
    if (str1.size() != str2.size())
    {
        return false;
    }
    for (int i = 0; i < str1.size(); ++i)
    {
        if (str1[i] == str2[i])
        {
            return true;
        }
        return false;
    }
    return false;
}

int main() {
    std::string str1, str2;
    std::cout << "str1" << std::endl;
    std::cin >> str1;
    std::cout << "str2" << std::endl;
    std::cin >> str2;
    bool s = permutation(str1, str2);
    std::cout << s;
}