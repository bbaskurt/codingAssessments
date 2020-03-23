#include "nesting.h"
#include <string>
#include <algorithm>
#include <unordered_map>

nesting::nesting()
{
}


nesting::~nesting()
{
}

int nesting::solution(std::string &S)
{
	if (S.empty())
		return 1;
	char openingChar = '(';
	char closingChar = ')';
	std::vector<char> openChars;
	int Ssize = S.size();
	for (int i = 0; i < Ssize; i++)
	{
		// current char is a closing char
		if (S[i] == closingChar)
		{
			if (openChars.empty())
				return 0;
			if (openingChar != openChars[openChars.size() - 1])
				return 0;
			else
				openChars.erase(openChars.begin() + openChars.size() - 1);
		}
		else
		{
			// opening char 
			openChars.push_back(S[i]);
		}
	}
	if (!openChars.empty())
		return 0;

	return 1;
}
