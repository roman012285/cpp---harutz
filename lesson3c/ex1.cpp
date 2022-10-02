/* Assignment number 1. Exercise1
   Calculation of Euclidean distance
   Email : roman329@gmail.com
 */

#include <iostream>
#include <cmath>
using namespace std;

int main() {
	
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

	return 0;
}


