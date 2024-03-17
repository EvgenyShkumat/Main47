#include <iostream>
using namespace std;

string convert_to_string(int** matrix, int length, int heigth);
void random_init(int** matrix, int heigth, int length, int min, int max);

int main() {
	int heigth = 5;
	int length = 5;

	int** matrix = new int* [heigth];

	for (int i = 0; i < heigth; i++)
	{
		*(matrix + i) = new int[length];
	}

	random_init(matrix, heigth, length, 0, 9);
	cout << convert_to_string(matrix, length, heigth);

	for (int i = 0; i < heigth; i++)
	{
		delete[] *(matrix + i);
	}

	delete[] matrix;

	return 0;
}