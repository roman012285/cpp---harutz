/* Exam Solution */

#include<iostream>
#include<fstream>
#include<string>

using namespace std;

int main() {
	
	double sum = 0;
	double sum_diag = 0;

	double arr[10][10];
	string f_name = "numbers10.txt";

	ifstream myFile;
	myFile.open(f_name);

	if (!myFile) {
		cout << "error";
		exit(1);
	}

	for(int i = 0; i < 10; i++)
		for (int j = 0; j < 10; j++) {
			myFile >> arr[i][j];
			sum += arr[i][j];
			if (i == j)
				sum_diag += arr[i][j];
		}
	
	cout << "The average is: " << sum / 100 << endl;
	cout << "The sum of diagonale is: " << sum_diag << endl;

	myFile.close();

	return 0;                      
}

