/* Ex1.2 2022 semester A */

#include<iostream>

using namespace std;

int main() {
	
	int year;
	int month;

	cin >> year >> month;

	if ((month == 1) || (month == 3) || (month == 5) || (month == 7) || (month == 8) || (month == 10) || (month == 12)) {
		if (month == 1)
			cout << "There is 31 days in January " << year;
		if (month == 3)
			cout << "There is 31 days in March " << year;
		if (month == 5)
			cout << "There is 31 days in May " << year;
		if (month == 7)
			cout << "There is 31 days in July " << year;
		if (month == 8)
			cout << "There is 31 days in August " << year;
		if (month == 10)
			cout << "There is 31 days in October " << year;
		if (month == 12)
			cout << "There is 31 days in December " << year;
	}
	else{
		if (month == 4)
			cout << "There is 30 days in April " << year;
		if (month == 6)
			cout << "There is 30 days in June " << year;
		if (month == 9)
			cout << "There is 30 days in September " << year;
		if (month == 11)
			cout << "There is 30 days in November " << year;
	
	}
	
	if (month == 2)
		if ((year == 2000) || (year % 4 != 0))
			cout << "There is 28 days in February " << year;
		else
			cout << "There is 29 days in February " << year;


	return 0;                      
}

