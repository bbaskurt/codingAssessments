#include "brackets.h"
#include <string>
#include <algorithm>
#include <unordered_map>

brackets::brackets()
{
}


brackets::~brackets()
{
}

int brackets::solution(std::string &S)
{
	if (S.empty())
		return 1;
	std::unordered_map<char, char> pairs;
	pairs['}'] = '{';
	pairs[')'] = '(';
	pairs[']'] = '[';
	std::vector<char> openChars;
	int Ssize = S.size();
	for (int i = 0; i < Ssize; i++)
	{
		std::unordered_map<char, char>::iterator finder = pairs.find(S[i]);
		// current char is a closing char
		if (finder != pairs.end())
		{
			if (openChars.empty())
				return 0;
			if (pairs[S[i]] != openChars[openChars.size() - 1])
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
