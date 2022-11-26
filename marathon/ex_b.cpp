double avg_arr(double** arr, int row, int col) {

	double sum = 0;

	for (int i = 0 ; i < row; i++)
		for (int j = 0 ; j < col; j++)
			sum = sum + arr[i][j];

	return sum / (row * col);


}