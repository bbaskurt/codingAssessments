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

int brackets::solution(std::vector<int> &A)
{
	int Asize = A.size();
	std::unordered_map<int, int> westCounts;
	int westCounter = 0;
	for (int i = Asize - 1; i >= 0; i--)
	{
		if (A[i] == 1)
		{
			westCounter++;
		}
		westCounts[i] = westCounter;
	}

	int passing = 0;
	for (int i = 0; i < Asize; i++)
	{
		if (A[i] == 0)
		{
			passing += westCounts[i];
			if (passing > 1000000000)
				return -1;
		}
	}
	return passing;

}
