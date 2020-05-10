#include "dominator.h"
#include <string>
#include <algorithm>
#include <unordered_map>

dominator::dominator()
{
}


dominator::~dominator()
{
}

int dominator::solution(std::vector<int> &A)
{
	// write your code in C++14 (g++ 6.2.0)
	int ASize = A.size();
	if (ASize < 1)
		return -1;

	std::unordered_map<int, int> counters;
	int maxCount = 0;
	int maxIndex = -1;
	for (int i = 0; i < ASize; i++)
	{
		std::unordered_map<int, int>::iterator it = counters.find(A[i]);
		if (it != counters.end())
		{
			counters[A[i]]++;
		}
		else
		{
			if (i > ASize / 2)
				continue;
			counters[A[i]] = 1;
		}
		if (counters[A[i]] > maxCount)
		{
			maxCount = counters[A[i]];
			maxIndex = i;
		}
	}

	if (maxCount > ASize / 2)
		return maxIndex;
	return -1;
}
