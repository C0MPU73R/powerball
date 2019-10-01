#pragma once
#include <string>
using namespace std;
class ball
{
public:
	ball();
	void setBallColor();
	string getBallColor();
	void setBallNumber();
private:
	string color;
	int ballNumber;

};