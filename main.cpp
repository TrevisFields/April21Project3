#include <iostream>
#include <string>
#include <memory>
#include "Guild.h"

using namespace std;

void DisplayGuildInfo(const shared_ptr<Guild> guild);
void AddAdventurer(const shared_ptr<Guild> guild);
void Attack(const shared_ptr<Guild> guild);

int main()
{
	cout << "Welcome to the adventure guild simulator." << endl << "Enter a name for your guild: ";
	string name;
	getline(cin, name);
	auto guild = make_shared<Guild>(name);

	int choice = -1;
	while (choice != 0)
	{
		system("cls");
		cout << "Now Managing " << guild->GetName() << endl << "*************************" << endl;
		cout << "1) Display Guild Information" << endl;
		cout << "2) Add An Adventurer" << endl;
		cout << "3) Attack!" << endl;

		cin >> choice;

		switch (choice)
		{
		case 1:
			DisplayGuildInfo(guild);
			break;
		case 2:
			AddAdventurer(guild);
			break;
		case 3:
			Attack(guild);
			break;
		default:
			return 0;
			break;
		}
	}
	return 0;
}

void DisplayGuildInfo(const shared_ptr<Guild> guild)
{
	system("cls");
	cout << guild->GetInfo();
	system("pause");
}

void AddAdventurer(const shared_ptr<Guild> guild)
{
	system("cls");
	cout << "Enter a name for your adventurer: ";
	string name;
	cin >> name;

	system("cls");
	cout << "What type of adventurer would you like to add?" << endl;
	cout << "1) Mage" << endl;
	cout << "2) Paladin" << endl;
	cout << "3) Ranger" << endl;
	cout << "4) Warrior" << endl;

	int choice = -1;
	cin >> choice;
	switch (choice)
	{
	case 1: guild->AddMage(name);
		break;
	case 2: guild->AddPaladin(name);
		break;
	case 3: guild->AddRanger(name);
		break;
	case 4: guild->AddWarrior(name);
		break;
	default:
		cout << "Invalid choice!";
		break;
	}
	system("pause");
}

void Attack(const shared_ptr<Guild> guild)
{
	system("cls");
	cout << "1) Attack with Mages" << endl;
	cout << "2) Attack with Paladins" << endl;
	cout << "3) Attack with Rangers" << endl;
	cout << "4) Attack with Warriors" << endl;
	cout << "5) Attack with everything!" << endl;

	int choice = -1;
	cin >> choice;

	switch (choice)
	{
	case 1:
		cout << guild->AttackWithMages() << endl;
		break;
	case 2:
		cout << guild->AttackWithPaladins() << endl;
		break;
	case 3:
		cout << guild->AttackWithRangers() << endl;
		break;
	case 4:
		cout << guild->AttackWithWarriors() << endl;
		break;
	case 5:
		cout << guild->AttackWithAllAdventurers() << endl;
		break;
	default: cout << "You run away like a coward" << endl;
		break;
	}
	system("pause");
}
