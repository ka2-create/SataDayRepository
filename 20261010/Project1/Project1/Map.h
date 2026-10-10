#pragma once

#include<vector>
#include<string>

using namespace std;

class map
{
public:
	

private:
	vector<vector<int>>mapData;

	vector<vector<int>>hitData;

	int chipImage[64];

	int mapWidth;
	int mapHight;

	static constexpr int CHIP_SIZE = 64;

	bool LoadCSV(const char* fileName, vector<vector<int>>& date);
};

map::map()
{
}

map::~map()
{
}
