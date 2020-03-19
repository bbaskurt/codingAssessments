#include "tester.h"
#include <iostream>
#include <string>
#include "binaryGap.h"
#include "rotateArray.h"
#include "oddOccurancesInArray.h"
#include "frogJmp.h"
#include "permMissingElem.h"
#include "tapeEquilibrium.h"

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

	test(obj, inputs, groundTruths, groundTypeIndicator, "testOddOccurancesInArray");

	return status;
}

bool tester::testFrogJmp()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	frogJmp obj;
	std::vector<int> inputsX;
	std::vector<int> inputsY;
	std::vector<int> inputsD;
	std::vector<int> groundTruths;

	inputsX = { 10, 40, 10, 1, 1, 1};
	inputsY = { 85, 40, 1000000000, 1000000000, 1000000000, 1000000000 };
	inputsD = { 30, 1, 1100, 2, 99, 1};
	groundTruths = { 3, 0, 909091, 499999998, 987654222, 999999999};

	test(obj, inputsX, inputsY, inputsD, groundTruths, "testFrogJmp");

	return status;
}

bool tester::testPermMissingElem()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	permMissingElem obj;
	std::vector<std::vector<int> > input;
	std::vector<int > groundTruths;
	int groundTypeIndicator = -1;

	input = { {2, 3, 1, 5}, { 105, 101, 110, 103, 106, 104, 108, 109, 107} };
	groundTruths = { 4, 102 };

	test(obj, input, groundTruths, groundTypeIndicator, "testPermMissingElem");

	return status;
}

bool tester::testTapeEquilibrium()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	tapeEquilibrium obj;
	std::vector<std::vector<int> > input;
	std::vector<int > groundTruths;
	int groundTypeIndicator = -1;

	input = { { 3, 1, 2, 4, 3 }, {-1000, 1000, 1000, -1000}, {-1000, -1000, -1000, 0, 0,0,0} };
	groundTruths = { 1, 0, 1000};

	test(obj, input, groundTruths, groundTypeIndicator, "testTapeEquilibrium");

	return status;
}
