#include <iostream>
using namespace std;

int main()
{
	
}

void ExampleOr()
{
	int health = 24;

	if (health <= 25)
	{
		cout << "I'm dead! DOH!" << endl;
	}
	else
	{
		cout << "I'm dying! Ineed a medipack!" << endl;
	}

	if (!(health > 25 or health < 75)) // false
	{
		cout << "I'm fine! Let's move before they find us!" << endl;
	}

	if (health >= 75)
	{
		cout << "I'm ready to fight!" << endl;
	}
}

void ExampleAnd()
{
	int x = 50;

	if (x > 5 and x < 10)
	{
		cout << x << " is an integer between 5 and 10." << endl;
	}
	else
	{
		cout << x << " is not an integer between 5 and 10" << endl;
	}
}
