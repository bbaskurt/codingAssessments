#pragma once

// test methods for the solutions
class tester
{
public:
	tester();
	~tester();

	bool testAll();
	bool testBinaryGap();
	bool testRotateArray();
	bool testOddOccurancesInArray();
	bool testFrogJmp();
	bool testPermMissingElem();
	bool testTapeEquilibrium();
	bool testFrogRiverOne();
	bool testMaxCounters();
	bool testMissingInteger();
	bool testCheckPerm();
	bool testCountDiv();
	bool testgenomicRangeQuery();
	bool testMinAvgTwoSlice();
	bool testPassingCars();
	bool testDistinct();
	bool testMaxProductOfThree();
	bool testNumberOfDiscIntersections();
	bool testTriangle();
	bool testBrackets();
	bool testFish();
	bool testNesting();
	bool testStoneWall();

	template<class T, typename I, typename G, typename R, typename N>
	bool test(T obj, I inputs, G groundT, R returnType, N testName)
	{
		std::cout << testName << std::endl;
		for (int i = 0; i < inputs.size(); i++)
		{
			R result = obj.solution(inputs[i]);
			if (result == groundT[i])
				std::cout << "  " << i + 1 << ") passed" << std::endl;
			else
				std::cout << "  " << i + 1 << ") ------> failed, got " << result << " expected " << groundT[i] << std::endl;
		}

		std::cout << std::endl;
		return true;
	}

	// needed as interface of solution functions can not be changed
	template<class T, typename I1, typename I2, typename G, typename R, typename N>
	bool test(T obj, I1 inputs1, I2 inputs2, G groundT, R returnType, N testName)
	{
		std::cout << testName << std::endl;
		if (inputs1.size() != inputs2.size())
		{
			std::cout << "Invalid input data on test: " << testName << std::endl;
			return false;
		}
		for (int i = 0; i < inputs1.size(); i++)
		{
			R result = obj.solution(inputs1[i], inputs2[i]);
			if (result == groundT[i])
				std::cout << "  " << i + 1 << ") passed" << std::endl;
			else
				std::cout << "  " << i + 1 << ") ------> failed" << std::endl;
		}

		std::cout << std::endl;
		return true;
	}

	// needed as interface of solution functions can not be changed
	template<class T, typename I1, typename I2, typename N>
	bool test(T obj, I1 inputs1, I2 inputs2, I2 groundT, N testName)
	{
		std::cout << testName << std::endl;
		if (inputs1.size() != inputs2.size())
		{
			std::cout << "Invalid input data on test: " << testName << std::endl;
			return false;
		}
		for (int i = 0; i < inputs1.size(); i++)
		{
			I1 result = obj.solution(inputs1[i], inputs2[i]);
			if (result == groundT[i])
				std::cout << "  " << i + 1 << ") passed" << std::endl;
			else
				std::cout << "  " << i + 1 << ") ------> failed" << std::endl;
		}

		std::cout << std::endl;
		return true;
	}

	template<class T, typename I1, typename I2, typename G, typename R, typename N>
	bool test(T obj, I1 inputs1, I2 inputs2, I2 inputs3, G groundT, R returnType, N testName)
	{
		std::cout << testName << std::endl;
		for (int i = 0; i < inputs1.size(); i++)
		{
			R result = obj.solution(inputs1[i], inputs2[i], inputs3[i]);
			if (result == groundT[i])
				std::cout << "  " << i + 1 << ") passed" << std::endl;
			else
				std::cout << "  " << i + 1 << ") ------> failed" << std::endl;// , got " << result << " expected " << groundT[i] << std::endl;
		}

		std::cout << std::endl;
		return true;
	}
};

