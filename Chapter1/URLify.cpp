#include <iostream>
#include <string>

void foo(std::string str)
{
	std::string tmp = "%20";
	for (int i = str.size(); i >= 0; --i)
	{
		if (str[i] == ' ')
		{
			str.pop_back();
		}
	}

	for (int i = 0; i < str.size(); ++i)
	{
		if (str[i] == ' ')
		{
			str.replace(i, 1, tmp);
		}
	}
	std::cout << str;
	
}

int main()
{
	std::string str;
	getline(std::cin, str);
	foo(str);
}