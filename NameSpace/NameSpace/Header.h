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

	void GinGet()
	{
		setlocale(LC_ALL,"");
		cout << "Нажмите любую клавишу...";
		cin.get(); // Ввод в консоль
	}
}