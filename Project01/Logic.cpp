#include <string>
using namespace std;

int find_column_sum(int** matrix, int heigth, int column_index) {
	int sum = 0;
	
	for (int i = 0; i < heigth; i++)
	{
		sum += matrix[i][column_index];
	}

	return sum;
}

int find_column_max_sum_index(int** matrix, int heigth, int length) {
	int max_index = 0;

	for (int i = 0; i < length; i++)
	{
		int sum = find_column_sum(matrix, heigth, i);

		if (sum > find_column_sum(matrix, heigth, max_index)) {
			max_index = i;
		}
	}

	return max_index;
}

string neighbour_matrix_elemetns(int** matrix, int heigth, int length) {
	string msg = "";
	int count = 0;
	for (int i = 0; i < heigth; i++)
	{
		for (int j = 0; j < length; j++)
		{
			msg += to_string(*(*(matrix + i) + j)) + "(" + to_string(count) + " element): ";
			if (i != 0) {
				msg += to_string(*(*(matrix + i - 1) + j)) + " ";
			}
			if (i != heigth - 1) {
				msg += to_string(*(*(matrix + i + 1) + j)) + " ";
			}
			if (j != 0) {
				msg += to_string(*(*(matrix + i) + j - 1)) + " ";
			}
			if (j != length - 1) {
				msg += to_string(*(*(matrix + i) + j  + 1)) + " ";
			}
			msg += "\n";
			count++;
		}
	}

	return msg;
}