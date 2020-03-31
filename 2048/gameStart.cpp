#include "gameStart.h"

gameStart::gameStart()
{
	numList = buildList();
}

std::vector<std::vector<int>> gameStart::buildList()
{
	std::vector<std::vector<int>> numList;
	int numRow1 = (rand() % 4), numCol1 = (rand() % 4);
	int numRow2 = (rand() % 4), numCol2 = (rand() % 4);
	while (numRow1 == numRow2 && numCol1 == numCol2) {
		numRow2 = (rand() % 4);
		numCol2 = (rand() % 4);

	}
	for (int i = 0; i < 4; i++) {
		std::vector<int> temp;
		for (int j = 0; j < 4; j++) {
			temp.push_back(0);
		}
		numList.push_back(temp);
	}
	numList[numRow1][numCol1] = 2;
	numList[numRow2][numCol2] = 2;
	return numList;
}
