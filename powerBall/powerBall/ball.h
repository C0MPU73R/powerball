#pragma once
#include <string>
using namespace std;
class ball
{
public:
	ball();
	void setBallColor(string color);
	string getBallColor();
	void setBallNumber(int number);
	int getBallNumber();
private:
	string color;
	int ballNumber;

};