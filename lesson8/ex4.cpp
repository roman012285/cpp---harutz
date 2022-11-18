/* Lesson8 ex4*/

#include<iostream>
#include<fstream>

using namespace std;



int main() {

	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };

	string f_name = "biggest_smallest.txt";

	ofstream wr_file;
	wr_file.open(f_name);

	if (!wr_file) {
		cout << "FATAL ERROR";
		exit(1);
	}
	int min, max;

	min = arr[0];
	max = arr[0];

	for (int i = 1; i < sizeof(arr) / sizeof(int); i++) {
		if (arr[i] > max)
			max = arr[i];
		if (arr[i] < min)
			min = arr[i];
	}

	wr_file << "The biggest number is: " << max << endl;
	wr_file << "The smallest number is: " << min << endl;

	wr_file.close();

	cout << "DONE!!!";

	return 0;
}


