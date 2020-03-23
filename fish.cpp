#include "fish.h"
#include <string>
#include <algorithm>
#include <unordered_map>

fish::fish()
{
}


fish::~fish()
{
}

int fish::solution(std::vector<int> &A, std::vector<int> &B)
{
	// write your code in C++14 (g++ 6.2.0)
	// survivors: initially equal to total number of fishes
	int survivors = (int)A.size();

	// upstream fishs stack
	std::vector<int> usfish = {};

	for (unsigned int i = 0; i<A.size(); i++)
	{
		// if upstream : goes to stack
		if (B[i] == 1)
		{
			usfish.push_back(i);
		}
		// if downstream : fights with upstream fishes
		else
		{
			int j = (int)usfish.size() - 1;
			while (usfish.size()>0 && j>-1)
			{
				// upstream is bigger: ds fish dies, check next ds fish
				if (A[usfish[j]] > A[i])
				{
					survivors--;
					break;
				}
				// upstream is smaller: us fish dies, next us fish fights
				else
				{
					survivors--;
					usfish.erase(usfish.begin() + j);
					j--;
				}
			}
		}
	}

	return survivors;
}
