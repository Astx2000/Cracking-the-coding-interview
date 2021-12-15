#include <iostream>
using namespace std;

bool isEditDistanceOne(string s1, string s2)
{
	int m = s1.length(), n = s2.length();
	if (abs(m - n) > 1)
		return false;

	int count = 0;

	int i = 0, j = 0;
	while (i < m && j < n)
	{
		if (s1[i] != s2[j])
		{
			if (count == 1)
				return false;
			if (m > n)
				i++;
			else if (m < n)
				j++;
			else 
			{
				i++;
				j++;
			}

			count++;
		}

		else 
		{
			i++;
			j++;
		}
	}
	if (i < m || j < n)
		count++;

	return count == 1;
}

int main()
{
	string str1;
	string str2;
	std::cout << "str1";
	std::cin >> str1;
	std::cout << "str2";
	std::cin >> str2;
	isEditDistanceOne(str1, str2) ? cout << "Yes" : cout << "No";
	return 0;
}
