#include "Header.h"
#include "stdafx.h"
void Cat::setData()
{
	cout << "Enter information " << endl;
	cin >> name;
	cin >> age;
	cin >> weight;
}
void Cat::getData()
{
	cout << " Name=" << name << endl;
	cout << " Age=" << age << endl;
	cout << " Weight=" << weight << endl;
}

	Tiger::Tiger(int input)
	{
		length = input;
	}
	void Tiger::show_length()
	{
		cout << length << endl;
	}

	Tiger::Tiger()
	{
		length = 5;
	}

	Tiger::~Tiger()
	{
	}



