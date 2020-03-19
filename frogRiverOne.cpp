#include "frogRiverOne.h"
#include <string>
#include <unordered_map>

frogRiverOne::frogRiverOne()
{
}


frogRiverOne::~frogRiverOne()
{
}

int frogRiverOne::solution(int X, std::vector<int> &A)
{
	if (X > 1 && A.size() <= 1)
		return -1;
	std::unordered_map<int, bool> river;
	int Asize = A.size();
	for (int i = 0; i < Asize; i++)
	{
		if (A[i] <= X)
		{
			std::unordered_map<int, bool>::iterator finder = river.find(A[i]);
			if (finder == river.end())
			{
				river[A[i]] = true;
				if (river.size() == X)
				{
					return i;
				}
			}
		}
	}

	return -1;
}
