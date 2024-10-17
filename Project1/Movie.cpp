#include "Movie.h"
#include<iostream>
using namespace std;

Movie::Movie()
{
	name = nullptr;
	time = 0.0;
	year = 0;
}

Movie::Movie(const char* n, double t, int y)
{
	name = new char[strlen(n) + 1];
	strcpy_s(name, strlen(n) + 1, n);
	time = t;
	year = y;
}

Movie::Movie(const Movie& obj)
{
	name = new char[strlen(obj.name)+1];
	strcpy_s(name, strlen(obj.name) + 1, obj.name);
	time = obj.time;
	year = obj.year;
}

Movie::~Movie()
{
	delete[] name;
}

void Movie::Print()
{
	cout << "Name: " << name << "\t"
		<< "Time: " << time << "\t"
		<< "Year: " << year << endl;

}
