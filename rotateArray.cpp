#include "rotateArray.h"



rotateArray::rotateArray()
{
}


rotateArray::~rotateArray()
{
}

std::vector<int> rotateArray::solution(std::vector<int> &A, int K) {
	// write your code in C++14 (g++ 6.2.0)

	if (A.empty())
		return A;
	int Asize = A.size();
	int realK = K % Asize;
	std::vector<int> result;

	int startIndex = Asize - realK;
	for (int i = startIndex; i < Asize; i++)
	{
		result.push_back(A[i]);
	}
	result.insert(result.end(), A.begin(), A.begin() + startIndex);
	return result;
}

