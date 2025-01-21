// Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cctype>
using namespace std;

void design() {
	cout << "--------------------------------" << endl;
}

//User interaction for flight 7:00 reservation
void reservation(bool taken[], int choiceSeat, bool seatInvalid, string user[], string username, int choiceTime, int choiceMenu, bool timeInvalid) {
	if (choiceTime == 1)
	{
		if (choiceMenu == 2 && taken[choiceSeat - 1] == false)
		{
			cout << "This seat is still available\n";
			cout << "Please select a reserved seat to be cancelled\n";
			seatInvalid = true;
		}
			if (choiceMenu == 2 && taken[choiceSeat - 1])
			{
				seatInvalid = false;
				cout << "Successfully cancelled flight reservation for " << user[choiceSeat - 1] << endl;
				taken[choiceSeat - 1] = false;
				user[choiceSeat - 1] = "available";
				timeInvalid = false;
			}
		if (taken[choiceSeat - 1])
		{
		cout << "This seat is already taken\n";
		seatInvalid = true;
		}
		if (taken[choiceSeat - 1] == false && choiceMenu == 1)
		{
			seatInvalid = false;
		cout << "Please enter your name to be reserved: ";
		cin >> username;
		user[choiceSeat - 1] = username;
		taken[choiceSeat - 1] = true;
		cout << "Successfully reserved a seat for " << username << endl;
		timeInvalid = false;
		}
    }
	if (choiceTime == 2)
	{
		if (choiceMenu == 2 && taken[choiceSeat + 4] == false)
		{
			cout << "This seat is still available\n";
			cout << "Please select a reserved seat to be cancelled\n";
			seatInvalid = true;
		}
		if (choiceMenu == 2 && taken[choiceSeat + 4])
		{
			seatInvalid = false;
			cout << "Successfully cancelled flight reservation for " << user[choiceSeat + 4] << endl;
			taken[choiceSeat + 4] = false;
			user[choiceSeat + 4] = "available";
			timeInvalid = false;
		}
		if (taken[choiceSeat + 4])
		{
			cout << "This seat is already taken\n";
			seatInvalid = true;
		}
		if (taken[choiceSeat + 4] == false && choiceMenu == 1)
		{
			seatInvalid = false;
			cout << "Please enter your name to be reserved: ";
			cin >> username;
			user[choiceSeat + 4] = username;
			taken[choiceSeat + 4] = true;
			cout << "Successfully reserved a seat for " << username << endl;
			timeInvalid = false;
		}
	}
	if (choiceTime == 3)
	{
		if (choiceMenu == 2 && taken[choiceSeat + 9] == false)
		{
			cout << "This seat is still available\n";
			cout << "Please select a reserved seat to be cancelled\n";
			seatInvalid = true;
		}
		if (choiceMenu == 2 && taken[choiceSeat + 9])
		{
			seatInvalid = false;
			cout << "Successfully cancelled flight reservation for " << user[choiceSeat + 9] << endl;
			taken[choiceSeat + 9] = false;
			user[choiceSeat + 9] = "available";
			timeInvalid = false;
		}
		if (taken[choiceSeat - 1])
		{
			cout << "This seat is already taken\n";
			seatInvalid = true;
		}
		if (taken[choiceSeat + 9] == false && choiceMenu == 1)
		{
			seatInvalid = false;
			cout << "Please enter your name to be reserved: ";
			cin >> username;
			user[choiceSeat + 9] = username;
			taken[choiceSeat + 9] = true;
			cout << "Successfully reserved a seat for " << username << endl;
			timeInvalid = false;
		}
	}
	if (choiceTime == 4)
	{
		if (choiceMenu == 2 && taken[choiceSeat + 14] == false)
		{
			cout << "This seat is still available\n";
			cout << "Please select a reserved seat to be cancelled\n";
			seatInvalid = true;
		}
		if (choiceMenu == 2 && taken[choiceSeat + 14])
		{
			cout << "Successfully cancelled flight reservation for " << user[choiceSeat + 14] << endl;
			taken[choiceSeat + 14] = false;
			user[choiceSeat + 14] = "available";
			seatInvalid = false;
			timeInvalid = false;
		}
		if (taken[choiceSeat + 14])
		{
			cout << "This seat is already taken\n";
			seatInvalid = true;
		}
		if (taken[choiceSeat + 14] == false && choiceMenu == 1)
		{
			seatInvalid = false;
			cout << "Please enter your name to be reserved: ";
			cin >> username;
			user[choiceSeat + 14] = username;
			taken[choiceSeat + 14] = true;
			cout << "Successfully reserved a seat for " << username << endl;
			timeInvalid = false;
		}
	}
	if (choiceTime == 5)
	{
		if (choiceMenu == 2 && taken[choiceSeat + 19] == false)
		{
			cout << "This seat is still available\n";
			cout << "Please select a reserved seat to be cancelled\n";
			seatInvalid = true;
		}
		if (choiceMenu == 2 && taken[choiceSeat + 19])
		{
			seatInvalid = false;
			cout << "Successfully cancelled flight reservation for " << user[choiceSeat + 19] << endl;
			taken[choiceSeat + 19] = false;
			user[choiceSeat + 19] = "available";
			timeInvalid = false;
		}
		if (taken[choiceSeat + 19])
		{
			cout << "This seat is already taken\n";
			seatInvalid = true;
		}
		if (taken[choiceSeat + 19] == false && choiceMenu == 1)
		{
			seatInvalid = false;
			cout << "Please enter your name to be reserved: ";
			cin >> username;
			user[choiceSeat + 19] = username;
			taken[choiceSeat + 19] = true;
			cout << "Successfully reserved a seat for " << username << endl;
			timeInvalid = false;
		}
	}
	
}
void Cancellation(bool taken[], string time[], string username, int choiceSeat, int seats[], int choiceMenu, int choiceTime, bool seatInvalid,
	bool choiceInvalid, string user[], bool timeInvalid);
int main() {
	string user[25] =
	{ "available","available", "available", "available", "available",
	"available", "available", "available", "available", "available",
	"available", "available", "available", "available", "available", 
	"available", "available", "available", "available", "available",
	"available", "available", "available", "available", "available" };
	bool taken[25] = { false };
	string time[5] = { "7:00","10:00","15:00","18:00","21:00" };
	string username;
	int choiceSeat = 0;
	int seats [5] = { 1,2,3,4,5 };
	int choiceMenu,choiceTime = 0;
	bool seatInvalid = false, flightAgain, choiceInvalid = false,timeInvalid = false;

	//Ensures that user enters correct number of corresponding choice
	do
	{
	design();
	cout << "Welcome to Fly or Die\n";
	cout << "1. Reserve a flight\n";
	cout << "2. Cancel reservation\n";
	cout << "3. Exit\n";
	cin >> choiceMenu;
	design();
	switch (choiceMenu)
	{
		//Reserve a flight
	case 1:
		do{
			timeInvalid = false;
		cout << "Select time of flight\n";
		for (int o = 1; o < 6; o++)
		{
			cout << o << ". " << time[o - 1] << endl;
		}
		cout << "6. Back\n";
		cout << "Enter number of corresponding time of flight: ";
		cin >> choiceTime;
		switch (choiceTime)
		{
			//Flight 7:00
		case 1:

			//Ensures that the user selects a valid seat number
			do
			{
				seatInvalid = false;
				cout << "[Seat selection for flight 7:00]\n";
				for (int u = 1; u < 6; u++)
				{
					cout << "Seat " << u << " " << "[" << user[u - 1] << "]" << endl;
				}
				cout << "[Enter 0 to return]\n";
				cout << "Enter number of seat: ";
				cin >> choiceSeat;
				switch (choiceSeat)
				{
				case 1:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 2:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 3:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 4:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 5:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 0:
					break;
				default:
					cout << "You have entered an invalid seat number\n";
					seatInvalid = true;
					break;
				}
			} while (seatInvalid);
			break;
			//Flight 10:00
		case 2:
			do {
				seatInvalid = false;
				cout << "[Seat selection for flight 10:00]\n";
				for (int u = 1; u < 6; u++)
				{
					cout << "Seat " << u << " " << "[" << user[u + 4] << "]" << endl;


				}
				cout << "[Enter 0 to return]\n";
				cout << "Enter number of seat: ";
				cin >> choiceSeat;
				switch (choiceSeat)
				{
				case 1:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 2:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 3:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 4:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 5:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 0:
					break;
				default:
					cout << "You have entered an invalid seat number\n";
					seatInvalid = true;
					break;
				}
			} while (seatInvalid);
			break;
			//Flight 15:00
		case 3:
			//Ensures that the user selects a valid seat number
			do
			{
				seatInvalid = false;
				cout << "[Seat selection for flight 15:00]\n";
				for (int u = 1; u < 6; u++)
				{
					cout << "Seat " << u << " " << "[" << user[u + 9] << "]" << endl;
				}
				cout << "[Enter 0 to return]\n";
				cout << "Enter number of seat: ";
				cin >> choiceSeat;
				switch (choiceSeat)
				{
				case 1:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 2:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 3:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 4:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 5:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 0:
					break;
				default:
					cout << "You have entered an invalid seat number\n";
					seatInvalid = true;
					break;
				}
			} while (seatInvalid);
			break;
			//Flight 18:00
		case 4:
			do
			{
				seatInvalid = false;
				cout << "[Seat selection for flight 18:00]\n";
				for (int u = 1; u < 6; u++)
				{
					cout << "Seat " << u << " " << "[" << user[u + 14] << "]" << endl;
				}
				cout << "[Enter 0 to return]\n";
				cout << "Enter number of seat: ";
				cin >> choiceSeat;
				switch (choiceSeat)
				{
				case 1:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 2:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 3:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 4:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 5:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 0:
					break;
				default:
					cout << "You have entered an invalid seat number\n";
					seatInvalid = true;
					break;
				}
			} while (seatInvalid);
			break;
			//Flight 21:00
		case 5:
			do
			{
				seatInvalid = false;
				cout << "[Seat selection for flight 21:00]\n";
				for (int u = 1; u < 6; u++)
				{
					cout << "Seat " << u << " " << "[" << user[u + 19] << "]" << endl;
				}
				cout << "[Enter 0 to return]\n";
				cout << "Enter number of seat: ";
				cin >> choiceSeat;
				switch (choiceSeat)
				{
				case 1:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 2:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 3:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 4:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 5:
					reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
					break;
				case 0:
					break;
				default:
					cout << "You have entered an invalid seat number\n";
					seatInvalid = true;
					break;
				}
			} while (seatInvalid);
			break;
			break;
			//Return to menu
		case 6:
			break;
		default:
			timeInvalid = true;
			cout << "Invalid entered time\n";
			break;
		}
		break;
	}while (timeInvalid);
	break;


	//Cancelling reservations
	case 2:
		Cancellation(taken, time, username, choiceSeat, seats, choiceMenu, choiceTime, seatInvalid, choiceInvalid, user, timeInvalid);
		break;
	//Exitting the system
	case 3:
			system("cls");
			for (int b = 0; b < 1000; b++)
			{
			cout << "YOU DIED ";
			}
			break;
	default:
		cout << "We don't do that here\n";
		break;
	}
	} while (choiceMenu != 3);
}
void Cancellation(bool taken[], string time[], string username, int choiceSeat, int seats[], int choiceMenu, int choiceTime, bool seatInvalid,
	bool choiceInvalid, string user[], bool timeInvalid) {
	cout << "Select time of flight\n";
	for (int o = 1; o < 6; o++)
	{
		cout << o << ". " << time[o - 1] << endl;
	}
	cout << "6. Back\n";
	cout << "Enter number of corresponding time of flight: ";
	cin >> choiceTime;
	switch (choiceTime)
	{
		//Flight 7:00
	case 1:

		//Ensures that the user selects a valid seat number
		do
		{
			seatInvalid = false;
			cout << "[Seat selection for flight 7:00]\n";
			for (int u = 1; u < 6; u++)
			{
				cout << "Seat " << u << " " << "[" << user[u - 1] << "]" << endl;
			}
			cout << "[Enter 0 to return]\n";
			cout << "Enter number of seat: ";
			cin >> choiceSeat;
			switch (choiceSeat)
			{
			case 1:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 2:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 3:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 4:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 5:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 0:
				break;

			default:
				cout << "You have entered an invalid seat number\n";
				seatInvalid = true;
				break;
			}
		} while (seatInvalid);
		break;
		//Flight 10:00
	case 2:
		do {
			seatInvalid = false;
			cout << "[Seat selection for flight 10:00]\n";
			for (int u = 1; u < 6; u++)
			{
				cout << "Seat " << u << " " << "[" << user[u + 4] << "]" << endl;


			}
			cout << "[Enter 0 to return]\n";
			cout << "Enter number of seat: ";
			cin >> choiceSeat;
			/*
			if (!(cin >> choiceSeat)) { // Check if the input is invalid
				cin.clear(); // Clear the error state
				cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Discard invalid input
				cout << "Invalid input. Please enter a number between 0 and 5.\n";
				seatInvalid = true;
				continue;
			}
			*/
			switch (choiceSeat)
			{
			case 1:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 2:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 3:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 4:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 5:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 0:
				break;
			default:
				cout << "You have entered an invalid seat number\n";
				seatInvalid = true;
				break;
			}
		} while (seatInvalid);
		break;
		//Flight 15:00
	case 3:
		//Ensures that the user selects a valid seat number
		do
		{
			seatInvalid = false;
			cout << "[Seat selection for flight 15:00]\n";
			for (int u = 1; u < 6; u++)
			{
				cout << "Seat " << u << " " << "[" << user[u + 9] << "]" << endl;
			}
			cout << "[Enter 0 to return]\n";
			cout << "Enter number of seat: ";
			cin >> choiceSeat;
			switch (choiceSeat)
			{
			case 1:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 2:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 3:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 4:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 5:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 0:
				break;
			default:
				cout << "You have entered an invalid seat number\n";
				seatInvalid = true;
				break;
			}
		} while (seatInvalid);
		break;
		//Flight 18:00
	case 4:
		do
		{
			seatInvalid = false;
			cout << "[Seat selection for flight 18:00]\n";
			for (int u = 1; u < 6; u++)
			{
				cout << "Seat " << u << " " << "[" << user[u + 14] << "]" << endl;
			}
			cout << "[Enter 0 to return]\n";
			cout << "Enter number of seat: ";
			cin >> choiceSeat;
			switch (choiceSeat)
			{
			case 1:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 2:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 3:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 4:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 5:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 0:
				break;
			default:
				cout << "You have entered an invalid seat number\n";
				seatInvalid = true;
				break;
			}
		} while (seatInvalid);
		break;
		//Flight 21:00
	case 5:
		do
		{
			seatInvalid = false;
			cout << "[Seat selection for flight 21:00]\n";
			for (int u = 1; u < 6; u++)
			{
				cout << "Seat " << u << " " << "[" << user[u + 19] << "]" << endl;
			}
			cout << "[Enter 0 to return]\n";
			cout << "Enter number of seat: ";
			cin >> choiceSeat;
			switch (choiceSeat)
			{
			case 1:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 2:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 3:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 4:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 5:
				reservation(taken, choiceSeat, seatInvalid, user, username, choiceTime, choiceMenu, timeInvalid);
				break;
			case 0:
				break;
			default:
				cout << "You have entered an invalid seat number\n";
				seatInvalid = true;
				break;
			}
		} while (seatInvalid);
		break;
		break;
		//Return to menu
	case 6:
		break;
	default:
		cout << "Invalid entered time\n";
		break;
	}
}