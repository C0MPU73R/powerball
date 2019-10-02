#include "ticket.h"

ticket::ticket(vector<ball*> ball_ticket)
{
	numbers.resize(ball_ticket.size());
	for (int index = 0; index < ball_ticket.size(); index++)
	{
		numbers[index].push_back(*ball_ticket[index]);
	}
}

vector<vector<ball>> ticket::getTicketNumbers()
{
	return this->numbers;
}
