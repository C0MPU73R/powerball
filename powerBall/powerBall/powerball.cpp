#pragma once
#include "powerball.h"

powerball::powerball()
{

}

void powerball::collectTickets(ticket ticket)
{
	tickets.push_back(ticket);
}

void powerball::setWinningTicket(ticket winner)
{
}
