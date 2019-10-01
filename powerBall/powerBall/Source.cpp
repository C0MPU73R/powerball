#include <iostream>
#include <vector>
#include "powerball.h"
#include "ticket.h"
using namespace std;
int main()
{
	//user
	vector<vector<ball*>> ball_vector;
	cout << "How many powerball tickets would you like to purchase?: " << endl; //where 1 ticket is 6 balls with a number each
	int numTickets;
	cin >> numTickets;
	ball_vector.resize(numTickets);
	
	for (int index = 0; index < numTickets; index++)
	{
		cout << "Would you like to choose your own numbers (Y/N)?: " << endl;
		string choice;
		cin >> choice;
		if (choice == "Y")
		{
			int number;
			for (int index2 = 0; index2 < 5; index2++)
			{
				cout << "Enter number: ";
				cin >> number;
				ball_vector[index].push_back(new ball(number));
			}
			int redBallNumber;
			cout << "Choose red ball number: ";
			cin >> redBallNumber;
			ball_vector[index].push_back(new ball(redBallNumber, "red"));
		}
		else //generate numbers for them
		{
			//white
			for (int index3 = 0; index3 < 5; index3++)
			{
				ball_vector[index].push_back(new ball(rand() % 69 + 1));
			}
			//red
			ball_vector[index].push_back(new ball(rand() % 69 + 1, "red"));
		}
	}
	//generate ticket(s) 1 ticket consists of 6 balls each with a color and a number
	ticket myTicket(ball_vector.size());


	

	//start the powerball
	powerball firstPowerBall;
	firstPowerBall.collectTickets(myTicket); //only 1 ticket in the powerball right now, need to add more and the winning ticket for later







































	/*int numberOfTickets;
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
	pb.setWinningTicket(winner);*/

	system("pause");
	return 0;
}