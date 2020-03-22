#include "triangle.h"
#include <string>
#include <algorithm>
#include <unordered_map>

triangle::triangle()
{
}


triangle::~triangle()
{
}

int triangle::solution(std::vector<int> &A)
{
	sort(A.begin(), A.end());

	for (unsigned int i = 2; i < A.size(); i++) {
		if (A[i - 2] > 0 && A[i - 2] > A[i] - A[i - 1]) {
			return 1;
		}
	}
	return 0;
}
