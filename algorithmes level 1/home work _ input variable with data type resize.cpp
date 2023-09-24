

#include <iostream>
using namespace std;

int main()
{
	float ferst_number;
	float last_number;

	cout << " please enter the ferst number ( A ) :\n";
	cin >> ferst_number;
	cout << "And enter last number ( B ) :\n";
	cin >> last_number;
	cout << "\n\n";
	cout << ferst_number << " + " << last_number << " = " << ferst_number + last_number << endl;
	cout << ferst_number << " - " << last_number << " = " << ferst_number - last_number << "\n";
	cout << ferst_number << " * " << last_number << " = " << ferst_number * last_number << "\n";
	cout << ferst_number << " / " << last_number << " = " << ferst_number / last_number << "\n";
	cout << ferst_number << " % " << last_number << " = " << ferst_number % last_number << "\n";
	return 0;
}