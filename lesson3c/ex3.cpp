/* Assignment number 1. Exercise3
   Store Managment system
   Email : roman329@gmail.com
 */


#include <iostream>
using namespace std;

int main() {
	
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


	return 0;
}



