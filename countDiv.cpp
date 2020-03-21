#include "countDiv.h"
#include <string>
#include <algorithm>

countDiv::countDiv()
{
}


countDiv::~countDiv()
{
}

int countDiv::solution(int A, int B, int K)
{
	int rem = A%K;
	int firstCand = A;
	if (rem != 0)
		firstCand = A + (K - rem);
	if (firstCand > B)
		return 0;
	int distance = B - firstCand;
	int divNum = (distance / K) + 1;

	return divNum;
}

