#include "permCheck.h"
#include <string>
#include <algorithm>

permCheck::permCheck()
{
}


permCheck::~permCheck()
{
}

int permCheck::solution(std::vector<int> &A)
{
	std::sort(A.begin(), A.end());
	int Asize = A.size();

	if (Asize == 0 || (Asize == 1 && A[0] != 1))
		return 0;

	if (A[0] != 1)
		return 0;

	for (int i = 1; i < Asize; i++)
	{
		int consDiff = std::abs(A[i] - A[i - 1]);
		if ( consDiff > 1 || consDiff == 0)
			return 0;
	}
	return 1;
}
