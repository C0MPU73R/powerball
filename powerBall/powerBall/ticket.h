#pragma once
#include <vector>
using namespace std;
class ticket
{
public:
	ticket();
	void setTicketNumbers(vector<ball> numbers);
	vector<ball> getTicketNumbers();

private:
	vector<ball> numbers;

};