/* Lesson8 ex5 */

#include<iostream>
#include<string>
#include<fstream>

using namespace std;



int main() {

	string f_name = "my_details.txt";

	ifstream rd_file;
	rd_file.open(f_name);

	if (!rd_file) {
		cout << "FATAL ERROR";
		exit(1);
	}

	int id;
	string name;
	string garbage;

	rd_file >> id;
	cout << id << "\n";

	getline(rd_file, garbage);

	getline(rd_file, name);
	cout << name << "\n";

	rd_file.close();

	return 0;
}


