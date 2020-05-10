#include "equiLeader.h"
#include <string>
#include <algorithm>
#include <unordered_map>
#include <map>

equiLeader::equiLeader()
{
}


equiLeader::~equiLeader()
{
}

int equiLeader::solution(std::vector<int> &A)
{
	// write your code in C++14 (g++ 6.2.0)
	int equiLeaders = 0;
	int Asize = A.size();
	if (Asize == 1)
		return 0;

	std::unordered_map<int, int> counters1;
	std::unordered_map<int, int> counters2;
	int maxCount = 0;
	int maxValue = 0;
	// count all values
	for (int i = 0; i < Asize; i++)
	{
		std::unordered_map<int, int>::iterator it = counters1.find(A[i]);
		if (it != counters1.end())
		{
			counters1[A[i]]++;
		}
		else
		{
			counters1[A[i]] = 1;
		}
		if (counters1[A[i]] > maxCount)
		{
			maxCount = counters1[A[i]];
			maxValue = A[i];
		}
	}

	if (maxCount < Asize / 2)
		return 0;

	int maxCountLeft = 0;
	int maxCountRight = maxCount;
	for (int i = 0; i < Asize; i++)
	{
		if (A[i] == maxValue)
		{
			maxCountLeft++;
			maxCountRight--;
		}

		if (maxCountLeft >(i + 1) / 2 && maxCountRight > (Asize - i - 1) / 2)
		{
			equiLeaders++;
		}
	}
	return equiLeaders;
}
