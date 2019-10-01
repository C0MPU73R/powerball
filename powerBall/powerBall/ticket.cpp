#include "ticket.h"

ticket::ticket(int size)
{
	numbers.resize(size);
}

void ticket::setTicketNumber(vector<ball*> ball_ticket)
{
	for (int index = 0; index < ball_ticket.size(); index++)
	{
		numbers[index].push_back(*ball_ticket[index]);
	}
}

vector<vector<ball>> ticket::getTicketNumbers()
{
	return this->numbers;
}
