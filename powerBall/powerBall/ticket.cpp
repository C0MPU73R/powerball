#include "ticket.h"

ticket::ticket()
{

}

void ticket::setTicketNumbers(vector<ball> numbers)
{
	this->numbers = numbers;
}

vector<ball> ticket::getTicketNumbers()
{
	return this->numbers;
}
