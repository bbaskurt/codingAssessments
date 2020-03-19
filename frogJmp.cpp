#include "frogJmp.h"
#include <string>

frogJmp::frogJmp()
{
}


frogJmp::~frogJmp()
{
}

int frogJmp::solution(int X, int Y, int D)
{
	int distance = Y - X;
	if (distance == 0)
		return 0;

	int jmps = (distance / D);
	if (jmps*D != distance)
		jmps++;

	return jmps;
}
