#include "missingInteger.h"
#include <string>
#include <algorithm>

missingInteger::missingInteger()
{
}


missingInteger::~missingInteger()
{
}

int missingInteger::solution(std::vector<int> &A)
{
	int Asize = A.size();
	std::sort(A.begin(), A.end());

	if (Asize == 0)
		return 1;

	if (A[0] > 1)
		return 1;

	for (int i = 1; i < Asize; i++)
	{
		if (std::abs(A[i] - A[i - 1]) > 1)
		{
			if (A[i - 1] >= 0)
			{
				return A[i - 1] + 1;
			}
			else
			{
				if(A[i] > 1)
					return 1;
			}
		}
	}

	if (Asize == 1)
	{
		for (int i = 1; i < 100000; i++)
		{
			if (i != A[0])
				return i;
		}
	}

	if ((A[Asize - 1] + 1) > 0)
		return A[Asize - 1] + 1;

	return 1;
}
