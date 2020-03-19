#include "permMissingElem.h"
#include <string>
#include <algorithm>
#include <map>

permMissingElem::permMissingElem()
{
}


permMissingElem::~permMissingElem()
{
}

int permMissingElem::solution(std::vector<int> &A)
{
	size_t size = A.size();
	std::map<int, bool> occurs;

	for (size_t i = 0; i < size; ++i) {
		if (A[i] > 0 && A[i] <= A.size()) {
			occurs[A[i] - 1] = true;
		}
	}

	for (size_t i = 0; i < size; ++i) {
		if (occurs[i] == false)
			return i + 1;
	}

	return 1;
}
