double avg_arr(double** arr, int size) {  // we assume that matrix is squared

	double sum_diag = 0;

	for (int i = 0; i < size; i++)
		sum_diag = sum_diag + arr[i][i];

	
	return sum_diag;

}