#pragma once
#include <vector>
#include "ticket.h"
using namespace std;
class powerball
{
public:
	powerball();
	void collectTickets(ticket ticket);
	void setWinningTicket(ticket winner);
private:
	vector<ticket> tickets;
	ticket winner;

};