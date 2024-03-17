#include <iostream>
using namespace std;

string convert_to_string(int** matrix, int length, int heigth);
void random_init(int** matrix, int heigth, int length, int min, int max);

int find_column_max_sum_index(int** matrix, int heigth, int length);

int main() {
	srand(time(NULL));

	int heigth = 5;
	int length = 6;

	int** matrix = new int* [heigth];

	for (int i = 0; i < heigth; i++)
	{
		*(matrix + i) = new int[length];
	}

	random_init(matrix, heigth, length, 0, 5);
	cout << convert_to_string(matrix, length, heigth);
	cout << "The index of column with the max sum is: " <<
		find_column_max_sum_index(matrix, heigth, length);

	for (int i = 0; i < heigth; i++)
	{
		delete[] *(matrix + i);
	}

	delete[] matrix;

	return 0;
}