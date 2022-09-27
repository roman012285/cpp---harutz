/*Created by Roman Gilgor
* Exercise 1. The program calculates the perimeter, area and volume coresponding to given Radius
* 25.9.2022
*/

#include<iostream>
#include<cmath>
#define PI 3.14
using namespace std;

int main() {

	// Define variables
	double radius;
	double perimeter, area, volume;

	cout << "Please enter the wanted radius: " << endl;
	cin >> radius;

	// Calculating parameters
	perimeter = 2 * PI * radius;
	area = PI * pow(radius, 2);
	volume = ( (double)4 / 3) * PI * pow(radius, 3); //casting

	cout << "The circle perimeter is: " << perimeter << endl;
	cout << "The circle area is: " << area << endl;
	cout << "The sphere volume is: " << volume << endl;

	return 0;
}

