#include "minAvgTwoSlice.h"
#include <string>
#include <algorithm>

minAvgTwoSlice::minAvgTwoSlice()
{
}


minAvgTwoSlice::~minAvgTwoSlice()
{
}

int minAvgTwoSlice::solution(std::vector<int> &A)
{
	// O(N^2)
	int Asize = A.size();
	float minAvg = 1000000000;
	int minInd = 0;
	for (int i = 0; i < Asize - 1; i++)
	{
		int sum = 0;
		for (int j = i; j < Asize; j++)
		{
			sum += A[j];
			if (j - i > 0)
			{
				float currAvg = (float)sum / (float)(j - i + 1);
				if (currAvg < minAvg)
				{
					minAvg = currAvg;
					minInd = i;
				}
			}
		}
	}
	return minInd;
}
