#include "maxProductOfThree.h"
#include <string>
#include <algorithm>
#include <unordered_map>

maxProductOfThree::maxProductOfThree()
{
}


maxProductOfThree::~maxProductOfThree()
{
}

int maxProductOfThree::solution(std::vector<int> &A)
{
	std::sort(A.begin(), A.end());
	int Asize = A.size();
	int cand1 = A[Asize-1] * A[Asize-2] * A[Asize-3];
	int cand2 = A[0] * A[1] * A[Asize - 1];
	return std::max(cand1, cand2);
}
