#include "tester.h"
#include <iostream>
#include <string>
#include "binaryGap.h"
#include "rotateArray.h"
#include "oddOccurancesInArray.h"

tester::tester()
{
}

tester::~tester()
{
}

bool tester::testAll()
{
	bool status = true;

	return status;
}

bool tester::testBinaryGap()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	binaryGap obj;
	std::vector<int> inputs;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	inputs = { 1041, 32, 51712 };
	groundTruths = { 5, 0, 2 };

	test(obj, inputs, groundTruths, groundTypeIndicator, "testBinaryGap");

	return status;
}

bool tester::testRotateArray()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	rotateArray obj;
	std::vector<std::vector<int> > inputs1;
	std::vector<int> inputs2;
	std::vector<std::vector<int> > groundTruths;
	std::vector<int> groundTypeIndicator = {};

	inputs1.push_back({3,8,9,7,6});
	inputs1.push_back({});
	inputs2.push_back(4);
	inputs2.push_back(2);
	groundTruths.push_back({8,9,7,6,3});
	groundTruths.push_back({});

	test(obj, inputs1, inputs2, groundTruths, groundTypeIndicator, "testRotateArray");

	return status;
}

bool tester::testOddOccurancesInArray()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	oddOccurancesInArray obj;
	std::vector<std::vector<int> > inputs;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	inputs.push_back({ 9, 3, 9, 3, 9, 7, 9 });
	groundTruths.push_back(7);
	inputs.push_back({ 3 });
	groundTruths.push_back(3);

	test(obj, inputs, groundTruths, groundTypeIndicator, "testFrogJmp");

	return status;
}

bool tester::testFrogJmp()
{
	bool status = true;

	return status;
}
