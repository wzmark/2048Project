#pragma once
#include <vector>
#include <stdlib.h>
class gameStart
{
public:
	gameStart();

private:
	std::vector<std::vector<int>> numList;
	std::vector<std::vector<int>> buildList();

};

