#include <iostream>
#include <string>

int main()
{
	std::string str;
	getline(std::cin, str);
	std::string res;
	int count = 0;
	char tmp = str[0];
	for (int i = 0; i <= str.size(); ++i)
	{
		if (tmp == str[i])
		{
			++count;
		}
		else
		{
			res.push_back((char)(count + '0'));
			res.push_back(str[i]);
			tmp = str[i];
			count = 1;
		}
	}
	std::cout << res;
}