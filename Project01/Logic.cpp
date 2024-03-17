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

// 1 2 3
// 4 5 6 
// 7 8 9 