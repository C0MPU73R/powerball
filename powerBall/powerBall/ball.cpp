#include "ball.h"

ball::ball()
{
	color = " ";
	ballNumber = 0;
}

void ball::setBallColor(string color)
{
	if (color == "red" || color == "white")
	{
		this->color = color;
	}
}

string ball::getBallColor()
{
	return this->color;
}

void ball::setBallNumber(int number)
{
	this->ballNumber = number;
}

int ball::getBallNumber()
{
	return this->ballNumber;
}
