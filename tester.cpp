#include "tester.h"
#include <iostream>
#include <string>
#include "binaryGap.h"
#include "rotateArray.h"
#include "oddOccurancesInArray.h"
#include "frogJmp.h"
#include "permMissingElem.h"
#include "tapeEquilibrium.h"
#include "frogRiverOne.h"
#include "maxCounters.h"
#include "missingInteger.h"
#include "permCheck.h"
#include "countDiv.h"
#include "genomicRangeQuery.h"
#include "minAvgTwoSlice.h"
#include "passingCars.h"
#include "distinct.h"
#include "maxProductOfThree.h"
#include "numberOfDiscIntersections.h"
#include "triangle.h"
#include "brackets.h"
#include "fish.h"
#include "nesting.h"
#include "stoneWall.h"
#include "dominator.h"
#include "equiLeader.h"

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
	int returnType = -1;

	inputsX = { 10, 40, 10, 1, 1, 1};
	inputsY = { 85, 40, 1000000000, 1000000000, 1000000000, 1000000000 };
	inputsD = { 30, 1, 1100, 2, 99, 1};
	groundTruths = { 3, 0, 909091, 499999998, 987654222, 999999999};

	test(obj, inputsX, inputsY, inputsD, groundTruths, returnType, "testFrogJmp");

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

bool tester::testFrogRiverOne()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	frogRiverOne obj;
	std::vector<int> inputX;
	std::vector<std::vector<int> > inputA;
	std::vector<int > groundTruths;
	int groundTypeIndicator = -1;

	inputX = { 5, 10, 1, 20, 5 };
	inputA = { { 1, 3, 1, 4, 2, 3, 5, 4 }, {}, {1}, {1}, {10, 10, 10, 10, 10, 10, 10, 10, 10, 10} };
	groundTruths = { 6, -1 , 0, -1, -1};

	test(obj, inputX, inputA, groundTruths, groundTypeIndicator, "testFrogRiverOne");

	return status;
}

bool tester::testMaxCounters()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	maxCounters obj;
	std::vector<int> inputN;
	std::vector<std::vector<int> > inputA;
	std::vector<std::vector<int> > groundTruths;
	int groundTypeIndicator = -1;

	inputN = { 5, 10, 2, 1 };
	inputA = { { 3, 4, 4, 6, 1, 4, 4 }, {1}, {1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1}, {2,2,2,2,2,2} };
	groundTruths = { { 3, 2, 2, 4, 2 }, {1,0,0,0,0,0,0,0,0,0}, {18,0}, {0} };

	test(obj, inputN, inputA, groundTruths, "testMaxCounters");

	return status;
}

bool tester::testMissingInteger()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	missingInteger obj;
	std::vector<std::vector<int> > input;
	std::vector<int > groundTruths;
	int groundTypeIndicator = -1;

	input = { { 3, 1, 7, 4, 3 }, {83}, {-1000000, -1000}, {9999999, 1000000}, {-10, -2, 10, 1000000} };
	groundTruths = { 2, 1, 1, 1, 1};

	test(obj, input, groundTruths, groundTypeIndicator, "testMissingInteger");

	return status;
}

bool tester::testCheckPerm()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	permCheck obj;
	std::vector<std::vector<int> > input;
	std::vector<int > groundTruths;
	int groundTypeIndicator = -1;

	input = { { 4, 1, 3, 2 }, { 83 },{ 1, 2, 2, 5, 4, 3}};
	groundTruths = { 1, 0, 0 };

	test(obj, input, groundTruths, groundTypeIndicator, "testMissingInteger");

	return status;
}

bool tester::testCountDiv()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	countDiv obj;
	std::vector<int > inputA;
	std::vector<int > inputB;
	std::vector<int > inputK;
	std::vector<int > groundTruths;
	int returnType = -1;

	inputA = { 100, 100, 0, 2000000000, 14 };
	inputB = { 100, 100, 0, 2000000000, 28 };
	inputK = { 1,   7,   7 , 13, 7};
	groundTruths = { 1, 0, 1, 0, 3};

	test(obj, inputA, inputB, inputK, groundTruths, returnType, "testCountDiv");

	return status;
}

bool tester::testgenomicRangeQuery()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	genomicRangeQuery obj;
	std::vector<std::string > inputS;
	std::vector<std::vector<int> > inputP;
	std::vector<std::vector<int> > inputQ;
	std::vector<std::vector<int> > groundTruths;
	std::vector<int> groundTypeIndicator = {};

	inputS = { "CAGCCTA", "CAGCCTA", "A"};
	inputP = { {5}, {0}, {0} };
	inputQ = { {5}, {0}, {0} };
	groundTruths = { {4}, {2}, {1} };

	test(obj, inputS, inputP, inputQ, groundTruths, groundTypeIndicator, "testgenomicRangeQuery");

	return status;
}

bool tester::testMinAvgTwoSlice()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	minAvgTwoSlice obj;
	std::vector<std::vector<int> > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = { {4,2,2,5,1,5,8}, {10,10,10,1,5}, {100,50, 1, 5, 1, 10, 20} };
	groundTruths = { 1, 3, 2};


	test(obj, input, groundTruths, groundTypeIndicator, "testMinAvgTwoSlice");

	return status;
}

bool tester::testPassingCars()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	passingCars obj;
	std::vector<std::vector<int> > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = { { 0 },{ 0,1 },{ 0,1,1}, {0,1,0,1,1} };
	groundTruths = { 0, 1, 2,5 };

	test(obj, input, groundTruths, groundTypeIndicator, "testPassingCars");

	return status;
}

bool tester::testDistinct()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	distinct obj;
	std::vector<std::vector<int> > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = { { },{ 1,1,1,1,1 },{ -1000000, -10000, -1000000, 10000000 } };
	groundTruths = { 0, 1, 3};

	test(obj, input, groundTruths, groundTypeIndicator, "testDistinct");

	return status;
}

bool tester::testMaxProductOfThree()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	maxProductOfThree obj;
	std::vector<std::vector<int> > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = { { 2, -10, -20, -5, -30 }, { -3, 1, 2, -2, 5,6 },{ 0,1,2,3,4,5,6 },{ -1000, -10, -6, -1, -3 },{ -1000, 20, -2, 1, 0, 10, 5 }, {10, 6, 0, -9, -7}, {10,8,8, 1, -9},{ 10,8,8, 1, -10,-10 } };
	groundTruths = { 1200, 60, 120, -18, 40000,630,640, 1000};

	test(obj, input, groundTruths, groundTypeIndicator, "testMaxProductOfThree");

	return status;
}

bool tester::testNumberOfDiscIntersections()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	numberOfDiscIntersections obj;
	std::vector<std::vector<int> > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = { { 1,5,2,1,4,0 }, {1,1,1}, { },{ 1} };
	groundTruths = { 11,3, 0, 0};

	test(obj, input, groundTruths, groundTypeIndicator, "testNumberOfDiscIntersections");

	return status;
}

bool tester::testTriangle()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	triangle obj;
	std::vector<std::vector<int> > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = { { 10,2,5,1,8,20 },{ 10,50,5,1 }};
	groundTruths = { 1,0 };

	test(obj, input, groundTruths, groundTypeIndicator, "testTriangle");

	return status;
}

bool tester::testBrackets()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	brackets obj;
	std::vector<std::string > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = {"()[{}]", "()", "", "(((((())))","[{(){}}]"};
	groundTruths = { 1, 1, 1, 0, 1};


	test(obj, input, groundTruths, groundTypeIndicator, "testBrackets");

	return status;
}

bool tester::testFish()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	fish obj;
	std::vector<std::vector<int> > inputA;
	std::vector<std::vector<int> > inputB;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	inputA = { {1,2,3}, { 4,3,2,1,5},{ 4,3,6,1,5 }, {1,2,3,4,6}, {5,6,9,1,2}, {1,2,3,4,5,6,7,8,9} };
	inputB = { {0,0,1}, { 0,1,0,0,0 },{ 0,1,0,0,0 }, {0,0,0,0,0}, {1,1,1,1,1}, {0,0,0,0,0,0,0,0,1} };
	groundTruths = { 1, 2, 4, 5, 5, 1 };


	test(obj, inputA, inputB, groundTruths, groundTypeIndicator, "testFish");

	return status;
}

bool tester::testNesting()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	nesting obj;
	std::vector<std::string > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = { "()(())", "()", "", "(((((())))","((()()))" };
	groundTruths = { 1, 1, 1, 0, 1 };


	test(obj, input, groundTruths, groundTypeIndicator, "testNesting");

	return status;
}

bool tester::testStoneWall()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	stoneWall obj;
	std::vector<std::vector<int> > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = { { 4,2,2,5,1,5,8 },{ 10,10,10,1,5 },{ 100,50, 1, 5, 1, 10, 20 } };
	groundTruths = { 1, 3, 2 };


	test(obj, input, groundTruths, groundTypeIndicator, "testStoneWall");

	return status;
}

bool tester::testDominator()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	dominator obj;
	std::vector<std::vector<int> > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	/*[-1, 0, -1, -5, 0, 1, 2, 3, 4, 5]
	[1]
	[1, 1, 1]
	[-1, 0, -1, -5, -1, 1, -1, -1, 4, -1]
	*/

	input = { { -1, 0, -1, -5, 0, 1, 2, 3, 4, 5 },{ 1 },{ 1, 1, 1 }, { -1, 0, -1, -5, -1, 1, -1, -1, 4, -1 } };
	groundTruths = { -1, 0, 2, 9 };


	test(obj, input, groundTruths, groundTypeIndicator, "testDominator");

	return status;
}

bool tester::testEquiLeader()
{
	bool status = true;

	// provide input and ground truth data to test on template function
	equiLeader obj;
	std::vector<std::vector<int> > input;
	std::vector<int> groundTruths;
	int groundTypeIndicator = -1;

	input = { { 4,3,4,4,4,2 },{ 1}};
	groundTruths = { 2, 0};


	test(obj, input, groundTruths, groundTypeIndicator, "testEquiLeader");

	return status;
}
