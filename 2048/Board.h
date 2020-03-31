#pragma once
#include <vector>
#include <stdlib.h>
#include <iostream>
class Board
{
public:
	void displayBoard();
	bool checkEnd();
	bool checkLeft(); //move left
	bool checkRight(); //move right
	bool checkUp();
	bool checkDown();

private:
	std::vector<std::vector<int>> numList;
	
	std::vector<std::vector<int>> buildList();
};

