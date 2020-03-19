#include "tapeEquilibrium.h"
#include <string>

tapeEquilibrium::tapeEquilibrium()
{
}


tapeEquilibrium::~tapeEquilibrium()
{
}

int tapeEquilibrium::solution(std::vector<int> &A)
{
	size_t Asize = A.size();
	int minDiff = 100000000;
	int leftSum = 0;
	int rightSum = 0;
	int totalSum = 0; 
	for (size_t i = 0; i < Asize; i++)
	{
		totalSum += A[i];
	}
	rightSum = totalSum;
	for (size_t i = 1; i < Asize; i++)
	{
		leftSum += A[i-1];
		rightSum -= A[i - 1];
		int diff = std::abs(leftSum - rightSum);
		if (diff < minDiff)
			minDiff = diff;
	}

	return minDiff;
}
