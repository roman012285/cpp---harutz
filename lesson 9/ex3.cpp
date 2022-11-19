/* Lesson9 ex3ab */

#include<iostream>
#include<string>
#include<fstream>
#include<iomanip>

using namespace std;

double** read_mat(string filename, int* size);
void printmatrix(double** arr, int size);

int main() {
	
	double** arr;
	int size;

	string filename = "my_arr.txt";

	arr = read_mat(filename, &size);

	printmatrix(arr, size);

	// delete rows
	for (int i = 0; i < size; i++)
		delete[]arr[i];

	delete[]arr;

	return 0;
}

double** read_mat(string filename, int* size) {

	ifstream myFile;
	myFile.open(filename);

	if (!myFile) {
		cout << "ERROR";
		exit(1);
	}

	myFile >> *size;

	double** arr = new double* [*size];  // allocation of rows
	for (int i = 0; i < *size; i++)
		arr[i] = new double[*size];

	for (int i = 0; i < *size; i++)
		for (int j = 0; j < *size; j++)
			myFile >> arr[i][j];


	myFile.close();
	return arr;

}


void printmatrix(double** arr, int size) {

	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++)
			cout << setw(5) << arr[i][j] << "   ";
		cout << endl;
	}

}
