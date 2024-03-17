#include <iostream>
#include <string>

using namespace std;

string convert_to_string(int** matrix, int length, int heigth) {
	string msg = "";

	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < length; j++)
		{

			msg += to_string(*(*(matrix + i) + j)) + " ";
		}
		msg += "\n";
	}

	return msg;
}

void random_init(int** matrix, int heigth, int length, int min, int max) {
	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < length; j++)
		{
			*(*(matrix + i) + j) = rand() % (max - min + 1) + min;
		}
	}
}