#include "genomicRangeQuery.h"
#include <string>
#include <algorithm>
#include <unordered_map>

genomicRangeQuery::genomicRangeQuery()
{
}


genomicRangeQuery::~genomicRangeQuery()
{
}

std::vector<int> genomicRangeQuery::solution(std::string & S, std::vector<int>& P, std::vector<int>& Q)
{
	////Complexity O(N*M)
	//int Qsize = P.size();
	//std::unordered_map<char, int> impFacts;
	//impFacts['A'] = 1;
	//impFacts['C'] = 2;
	//impFacts['G'] = 3;
	//impFacts['T'] = 4;
	//std::vector<int> result;
	//for (int i = 0; i < Qsize; i++)
	//{
	//	int minImp = 4;
	//	for (int s = P[i]; s <= Q[i]; s++)
	//	{
	//		minImp = std::min(impFacts[S[s]], minImp);
	//	}
	//	result.push_back(minImp);
	//}
	int Qsize = P.size();
	std::vector<int> result;
	for (int i = 0; i < Qsize; i++)
	{
		std::string curr = S.substr(P[i], Q[i] - P[i]+1);
		if (curr.find('A') != std::string::npos)
			result.push_back(1);
		else if (curr.find('C') != std::string::npos)
			result.push_back(2);
		else if (curr.find('G') != std::string::npos)
			result.push_back(3);
		else if (curr.find('T') != std::string::npos)
			result.push_back(4);
	}
	return result;
}
