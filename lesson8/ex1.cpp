/* Lesson8 ex1*/

#include<iostream>
#include<fstream>

using namespace std;

int main() {

	ofstream myFile("my_details.txt");
	
	if(!myFile){
		cout << "OOPS, error opening file" << endl;
		exit(1);
	}

	myFile << "308991678" << endl << "roman gilgor" << endl;

	cout << "Writing into file named my_details.txt is done!" << endl;

	myFile.close();

	return 0;
}

