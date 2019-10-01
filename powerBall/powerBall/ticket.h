#pragma once
#include <vector>
#include "ball.h"
using namespace std;
class ticket
{
public:
	ticket(int size);
	void setTicketNumber(vector<ball*> numbers);
	vector<vector<ball>> getTicketNumbers();

private:
	vector<vector<ball>> numbers;

};