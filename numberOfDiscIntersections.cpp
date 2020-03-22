#include "numberOfDiscIntersections.h"
#include <string>
#include <algorithm>
#include <unordered_map>

numberOfDiscIntersections::numberOfDiscIntersections()
{
}


numberOfDiscIntersections::~numberOfDiscIntersections()
{
}

int numberOfDiscIntersections::solution(std::vector<int> &A)
{
	int n = A.size();
	int numIntersecs = 0;
	for (long i = 0; i < n - 1; i++)
		for (long j = i + 1; j < n; j++)
			if (i - A[i] <= j + A[j] && j - A[j] <= i + A[i]) //just touching is intersection
				if (numIntersecs == 10E6)
					return -1;
				else
					numIntersecs++;
	return numIntersecs;
}
