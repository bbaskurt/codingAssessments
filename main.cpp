#include <iostream>
#include <string>
#include "tester.h"

int main()
{
	tester t;
	t.testBinaryGap();
	t.testRotateArray();
	t.testOddOccurancesInArray();
	t.testFrogJmp();
	t.testPermMissingElem();
	t.testTapeEquilibrium();

	system("pause");
	return 0;
}