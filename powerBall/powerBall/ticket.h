#pragma once
#include <vector>
using namespace std;
class ticket
{
public:
	ticket();
	void setTicketNumbers(vector<int> numbers);
	vector<int> getTicketNumbers();

private:
	vector<int> numbers;

};