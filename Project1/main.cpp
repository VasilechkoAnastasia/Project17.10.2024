#include <iostream>
using namespace std;
#include "Movie.h"

int main()
{
	/*Movie obj1("Avatar", 2.10, 2012);
	obj1.Print();*/

	/*Movie arr[3]{ {"Avatar", 2.10, 2012 }, { "Titanic", 3.10, 1992 }, { "Bad boy", 2.40, 1998 } };
	for (int i = 0; i < 3; i++)
	{
		arr[i].Print();
	}*/
	Movie* arrptr[2]{ new Movie("Avatar", 2.10, 2009), new Movie("Bad boys", 2.40, 1998) };

	for (int i = 0; i < 2; i++)
	{
		arrptr[i]->Print();
	}

	for (int i = 0; i < 2; i++)
	{
		
		delete arrptr[i];
	}

}