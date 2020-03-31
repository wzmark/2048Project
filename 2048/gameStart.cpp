#include "gameStart.h"

std::vector<std::vector<int>> gameStart::buildList()
{
	int randNum1=rand(), randNum2=rand();
	int numRow1, numCol1, numRow2, numCol2;
	while (randNum1 == randNum2) {
		randNum2 = rand();
	}

	return std::vector<std::vector<int>>();
}
