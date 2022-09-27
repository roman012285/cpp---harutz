/* Exercise 1.5 */

#include<iostream>

using namespace std;

int main() {
	
	double grade;
	double credit;

	double sum_grade, sum_credit;

	double average;
	
	// first course detais
	cout << "Enter first grade: " << endl;
	cin >> grade;
	cout << "Enter credits: " << endl;
	cin >> credit;

	sum_credit = credit;   
	sum_grade = grade * credit; 

	// second course details
	cout << "Enter second grade: " << endl;
	cin >> grade; 
	cout << "Enter credits: " << endl;
	cin >> credit; 

	sum_credit = sum_credit + credit; 
	sum_grade = sum_grade + grade * credit; 

	// third course details
	cout << "Enter third grade: " << endl;
	cin >> grade;
	cout << "Enter credits: " << endl;
	cin >> credit;

	sum_credit = sum_credit + credit; 
	sum_grade = sum_grade + grade * credit; 

	average = sum_grade / sum_credit;

	cout << "The weighted average is: " << average << endl;

	return 0;

}
