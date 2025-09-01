#pragma once
#include <iostream>

using std::cout;
using std::endl;
using std::cin;

namespace human
{
	void Greting()
	{
		cout << "Hello Humans!!" << endl;
	}
}

namespace alien
{
	void Greting()
	{
		cout << "Hello Aliens!!!" << endl;
	}

	void CinGet()
	{
		cin.get(); // ¬вод в консоль
	}
}