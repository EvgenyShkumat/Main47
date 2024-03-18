#include <iostream>
using namespace std;

string convert_to_string(int** matrix, int length, int heigth);
void random_init(int** matrix, int heigth, int length, int min, int max);

int find_column_max_sum_index(int** matrix, int heigth, int length);
string neighbour_matrix_elemetns(int** matrix, int heigth, int length);
void chessboard(char** matrix, int heigth, int length);

int main() {
	srand(time(NULL));

	int heigth = 8;
	int length = 8;

	char** matrix = new char* [heigth];

	for (int i = 0; i < heigth; i++)
	{
		*(matrix + i) = new char[length];
	}

	chessboard(matrix, heigth, length);

	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < length; j++)
		{
			cout << *(*(matrix + i) + j);
		}
		cout << endl;
	}
	

	for (int i = 0; i < heigth; i++)
	{
		delete[] *(matrix + i);
	}

	delete[] matrix;

	return 0;
}