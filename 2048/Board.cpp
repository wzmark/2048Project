#include "Board.h"

void Board::displayBoard()
{
	for (int i = 3; i > 0; i--) {
		for (int j = 0; j < 3; j++) {
			for (int k = 2 - j; k > 0; k--) {
				std::cout << " ";
			}
			std::cout << numList[i][j] << "  ";
		}
		std::cout << "\n";
	}
}

bool Board::checkEnd()
{
	if (checkLeft || checkRight || checkUp || checkDown) {
		return true;
	}
	return false;
}

bool Board::checkLeft()
{
	for (int i = 0; i < 3; i++) {
		if (numList[i][0] == 0) {
			return true;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (numList[i][j] == numList[i][j + 1]) {
				return true;
			}
		}
	}
	return false;
}

bool Board::checkRight()
{

	for (int i = 0; i < 3; i++) {
		if (numList[i][3] == 0) {
			return true;
		}
	}
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 2; j++) {
			if (numList[i][j] == numList[i][j + 1]) {
				return true;
			}
		}
	}
	return false;
}

bool Board::checkUp()
{
	for (int i = 0; i < 3; i++) {
		if (numList[3][i] == 0) {
			return true;
		}
	}
	for (int i = 0; i < 2; i++) { //col
		for (int j = 0; j < 3; j++) {
			if (numList[i][j] == numList[i + 1][j]) {
				return true;
			}
		}
	}
	return false;
}

bool Board::checkDown()
{
	for (int i = 0; i < 3; i++) {
		if (numList[0][i] == 0) {
			return true;
		}
	}
	for (int i = 0; i < 2; i++) { //col
		for (int j = 0; j < 3; j++) {
			if (numList[i][j] == numList[i + 1][j]) {
				return true;
			}
		}
	}
	return false;
}

std::vector<std::vector<int>> Board::buildList()
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
