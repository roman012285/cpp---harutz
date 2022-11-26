/* Exam Solution */

#include<iostream>

using namespace std;

int countZero(int n);

int main() {
	
	int n;

	cin >> n;
	cout << "Number os zero's is: " << countZero(n);

	return 0;                      
}

int countZero(int n) {

	int cnt = 0;
	int one_Digit;

	while (n > 9) {

		one_Digit = n % 10;

		if (one_Digit == 0)
			cnt++;

		n = n / 10;

	}

	return cnt;

}


