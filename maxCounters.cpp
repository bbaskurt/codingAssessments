#include "maxCounters.h"
#include <string>
#include <unordered_map>

maxCounters::maxCounters()
{
}


maxCounters::~maxCounters()
{
}

std::vector<int> maxCounters::solution(int N, std::vector<int>& A)
{
	std::unordered_map<int, int> counters;
	//std::vector<int> counters;
	int maxCounter = 0;
	for (int i = 0; i < N; i++)
		counters[i] = 0;
	int Asize = A.size();
	for (int i = 0; i < Asize; i++)
	{
		if (A[i] == N + 1)
		{
			for (int c = 0; c < N; c++)
			{
				counters[c] = maxCounter;
			}
		}
		else
		{
			counters[A[i]-1]++;
			if (counters[A[i]-1] > maxCounter)
				maxCounter = counters[A[i]-1];
		}
	}
	std::vector<int> counterVec;
	for (int i = 0; i < N; i++)
		counterVec.push_back(counters[i]);
	return counterVec;
}

