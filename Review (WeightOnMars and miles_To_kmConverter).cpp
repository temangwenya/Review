#include <iostream>
using namespace std;

double weight;
double miles;
double km;

int main() {
	//Weight on Mars 
	cout << "Enter the item's weight: \n";
	cin >> weight;
	weight = weight * 0.38;
	cout << "Your item would weight " << weight << "kgs on Mars.\n";

	cout << "\n";

	//Miles to km converter
	cout << "Enter the distance in miles: \n";
	cin >> miles;
	km = miles / 0.621371;
	cout << "The converted distance is " << km << "kms.\n";

	return 0;
}