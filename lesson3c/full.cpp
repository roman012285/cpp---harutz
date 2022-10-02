/* Assignment number 1. final
   Store managment system
   Email : roman329@gmail.com
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {

	int option;

	cout << "0. Exit" << endl;
	cout << "1. Euclidian distance" << endl;
	cout << "2. change money" << endl;
	cout << "0. what is your total payment" << endl;

	cin >> option;

	if(option == 1){
		int x1, y1; // cordinates of first dot
		int x2, y2; // cordinates of second dot

		double E_distance; // Euclidean distance

		// Recieving first cordinates
		cout << "Please enter the x value of the first point:" << endl;
		cin >> x1;

		cout << "Please enter the y value of the first point:" << endl;
		cin >> y1;

		// Recieving second cordinates
		cout << "Please enter the x value of the second point:" << endl;
		cin >> x2;

		cout << "Please enter the y value of the second point:" << endl;
		cin >> y2;

		E_distance = sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2));

		cout << "The distance between(" << x1 << "," << y1 << ") and (" << x2 << "," << y2 << ") is " << E_distance << endl;

	} // option1

	if (option == 2) {
		int number;
		int temp;
		int c_100, c_50, c_20, c_10, c_5, c_2;

		cin >> number;
		temp = number;

		c_100 = number / 100;
		number = number % 100;

		c_50 = number / 50;
		number = number % 50;

		c_20 = number / 20;
		number = number % 20;

		c_10 = number / 10;
		number = number % 10;

		c_5 = number / 5;
		number = number % 5;

		c_2 = number / 2;
		number = number % 2;

		cout << temp << " = 100*" << c_100 << " + 50*" << c_50 << " + 20*" << c_20;
		cout << " + 10*" << c_10 << " + 5*" << c_5 << " + 2*" << c_2 << " + 1*" << number << "NIS" << endl;

	} // option2

	if (option == 3) {
		int num_of_prod; // Number of products
		int total_prod_price = 0; // Total price of all products
		int one_prod_price; // Single product price
		int min_price = 0; // Holds minimum price of a product for 50% discount
		int i; // for - loop variable

		int discount30 = 0; // Discount for total price over 300;
		double discount50 = 0; //  Keeps the value of 50% discount

		double total_discount = 0;
		double final_payment; // Payment after discount


		cout << "Hi, how many items did you purchase? " << endl;
		cin >> num_of_prod;

		// Main Loop
		for (i = 0; i < num_of_prod; i++) {

			cout << "Please enter the price of item number " << i + 1 << ":" << endl;
			cin >> one_prod_price;
			total_prod_price = total_prod_price + one_prod_price;

			if (i == 0)
				min_price = one_prod_price;
			if (num_of_prod >= 3)  // 50% discount is given for cheapest product
				if (one_prod_price < min_price)
					min_price = one_prod_price;
		}

		discount30 = (total_prod_price / 300) * 30;
		discount50 = 0.5 * min_price;

		if (num_of_prod < 3)
			total_discount = discount30;
		else
			if (discount30 >= discount50)
				total_discount = discount30;
			else
				total_discount = discount50;

		final_payment = total_prod_price - total_discount;

		cout << "Your discount is : " << total_discount << " NIS,  and thus your total payment is : " << final_payment << " NIS" << endl;

	} // option3

}  // Main






