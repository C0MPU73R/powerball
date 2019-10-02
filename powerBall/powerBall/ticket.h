#pragma once
#include <vector>
#include "ball.h"
using namespace std;
class ticket
{
public:
	ticket(vector<ball*> ball_ticket);
	vector<vector<ball>> getTicketNumbers();

private:
	vector<vector<ball>> numbers;

};