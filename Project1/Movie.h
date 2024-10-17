#pragma once
class Movie
{
	//режисер
	//жанр
	//дата
	char* name;
	double time;
	int year;
public:
	Movie(); //constructor by def.
	Movie(const char* n, double t, int y); //constructor by params
	Movie(const Movie & obj); //copy container
	~Movie(); //destructor
	void Print();
};
