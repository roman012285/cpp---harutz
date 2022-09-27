/* lesson2 exercise 3 ver1 */

#include<iostream>
using namespace std;

int main() {

	double age;
	int grade;

	int flag = 0; // 0 - grade and age is ok. 1 - grade or age is not ok

	cout << "Please Enter your age: " << endl;
	cin >> age;

	if ((age < 0) || (age > 120)) {
		cout << "Something wrong with your age, try next time!!!" << endl;
		flag = 1;
	}

	cout << "Please Enter your grade: " << endl;
	cin >> grade;

	if ((grade < 200) || (grade > 800)) {
		cout << "Something wrong with your grade, try next time!!!" << endl;
		flag = 1;
	}

	if ((age >= 16) && (grade > 550) && (flag == 0))
		cout << "accepted" << endl;
	else
		cout << "Sorry, not accepted" << endl;


	return 0;
}