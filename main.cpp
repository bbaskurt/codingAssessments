#include <iostream>
#include <string>
#include "binaryGap.h"
#include "rotateArray.h"

int main()
{
	//binaryGap bGap;
	//std::cout << bGap.solution(1041) << std::endl;
	//std::cout << bGap.solution(32) << std::endl;
	//std::cout << bGap.solution(51712) << std::endl;

	rotateArray rArray;
	//std::vector<int> A = { 3,8,9,7,6 };
	std::vector<int> A = {};
	int K = 4;
	std::vector<int> result = rArray.solution(A, K);

	for (int i = 0; i < result.size(); i++)
	{
		std::cout << std::to_string(result[i]) + " ";
	}
	std::cout << std::endl;

	system("pause");
	return 0;
}