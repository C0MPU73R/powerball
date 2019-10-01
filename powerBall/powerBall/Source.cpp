#include <iostream>
#include <vector>
#include "powerball.h"
#include "ticket.h"
using namespace std;
int main()
{
	int numberOfTickets;
	cout << "How many powerball tickets would you like to purchase?" << endl;
	cin >> numberOfTickets;
	cout << "Would you like to play your own numbers or randomize them?" << endl;
	string choice;
	int number;
	vector<int> numbers;
	numbers.resize(6);
	ticket a;
	if (choice == "Play my own")
	{
		for (int index = 0; index < numbers.size(); index++)
		{
			cin >> number;
			numbers.push_back(number);
		}

		a.setTicketNumbers(numbers);
	}
	else
	{
		for (int index = 0; index < 6; index++)
		{
			numbers.push_back(rand() % 39 + 1);
		}
		a.setTicketNumbers(numbers);
	}

	ticket winner;
	winner.setTicketNumbers({ 4,5,6,7,8,9,10 });

	powerball pb;
	pb.collectTickets(a);
	pb.setWinningTicket(winner);

	system("pause");
	return 0;
}