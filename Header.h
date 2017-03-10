#include <string>
#include <iostream>
#include "stdafx.h"
using namespace std;
class Cat
{
protected:
	string name;
	int age, weight;
public:
	void setData();
	void getData();

};
class Tiger :public Cat
{
public:
	Tiger();
	Tiger(int);
	~Tiger();
	void show_length();
private:
	int length;

};
