#include <iostream>
using namespace std;


bool canFormPalindrome(string str)
{
	int count[256] = { 0 };

	for (int i = 0; str[i]; i++)
	count[str[i]]++;
	int odd = 0;
	for (int i = 0; i < 256; i++) {
		if (count[i] & 1)
			odd++;

		if (odd > 1)
			return false;
	}
	return true;
}

int main()
{
	std::string str1;
	std::cin >> str1;
	canFormPalindrome(str1) ? cout << "Yes\n" : cout << "No\n";
}
