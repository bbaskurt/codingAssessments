#include "binaryGap.h"
#include <string>

binaryGap::binaryGap()
{
}


binaryGap::~binaryGap()
{
}

int binaryGap::solution(int N)
{
	// counter for binary array 
	std::string binaryNum = "";
	while (N > 0) {

		// storing remainder in binary array 
		binaryNum = std::to_string(N % 2)+ binaryNum;
		N = N / 2;
	}

	int numberOfZeros = 0;
	int maxZeros = 0;
	int numberOfOnes = 0;
	for (int i = 0; i < binaryNum.size(); i++)
	{
		if (binaryNum[i] == '1')
		{
			numberOfOnes++;
			if (numberOfOnes > 1 && maxZeros < numberOfZeros)
			{
				maxZeros = numberOfZeros;
			}
			numberOfZeros = 0;
		}
		else
		{
			numberOfZeros++;
		}
	}

	if (numberOfOnes <= 1)
		return 0;

	return maxZeros;
}
