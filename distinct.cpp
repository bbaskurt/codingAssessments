#include "distinct.h"
#include <string>
#include <algorithm>
#include <unordered_map>

distinct::distinct()
{
}


distinct::~distinct()
{
}

int distinct::solution(std::vector<int> &A)
{
	std::unordered_map<int, bool> distinctElems;
	int Asize = A.size();
	for (int i = 0; i < Asize; i++)
	{
		std::unordered_map<int, bool>::iterator finder = distinctElems.find(A[i]);
		if (finder == distinctElems.end())
		{
			distinctElems[A[i]] = true;
		}
	}

	return distinctElems.size();
}
