#include "ticket.h"

ticket::ticket()
{

}

void ticket::setTicketNumbers(vector<int> numbers)
{
	this->numbers = numbers;
}

vector<int> ticket::getTicketNumbers()
{
	return this->numbers;
}
