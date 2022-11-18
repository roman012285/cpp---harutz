/* Lesson8 ex2*/

#include<iostream>
#include<string>
#include<fstream>

using namespace std;

int main() {

	string f_name = "my_words.txt";

	ofstream myFile(f_name);
	
	if(!myFile){
		cout << "OOPS, error opening file" << endl;
		exit(1);
	}

	string f_sentence = "I like eating Shawarma";

	myFile << "My name is roman\n" << "I live in israel\n";
	myFile << f_sentence;
	
	cout << "finished writing into file " << f_name << endl;

	myFile.close();

	ifstream rd_myFile(f_name);

	if (!rd_myFile) {
		cout << "OOPS, error opening file" << endl;
		exit(1);
	}

	string w1, w2, w3;

	getline(rd_myFile, w1);
	getline(rd_myFile, w2);
	getline(rd_myFile, w3);


	cout << endl;

	cout << "First sentence is : \"" << w1 << "\"" << endl;
	cout << "Second sentence is : \"" << w2 << "\"" << endl;
	cout << "Third sentence is : \"" << w3 << "\"" << endl;

	return 0;
}

