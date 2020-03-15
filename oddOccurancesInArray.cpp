#include "oddOccurancesInArray.h"
#include <unordered_map>
#include <iostream>

oddOccurancesInArray::oddOccurancesInArray()
{
}


oddOccurancesInArray::~oddOccurancesInArray()
{
}

int oddOccurancesInArray::solution(std::vector<int>& A)
{
	int Asize = A.size();
	std::unordered_map<int, bool> pairs;
	for (int i = 0; i < Asize; i++)
	{
		std::unordered_map<int, bool>::iterator it = pairs.find(A[i]);
		if (it != pairs.end())
		{
			pairs.erase(it);
		}
		else
		{
			pairs[A[i]] = true;
		}
	}

	if (pairs.size() != 1)
	{
		std::cout << "More than 1 odd numbers detected!" << std::endl;
	}

	for (auto item : pairs)
	{
		return item.first;
	}
	return 0;
}

