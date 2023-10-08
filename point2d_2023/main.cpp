#include<iostream>
#include"Point2d.h"

using namespace std;

int main() {

	Point2D my_point;

	cout << "my_point " << sizeof(my_point) << endl;

	my_point.setX(15.4);

	cout << "Dodaj wsp. Y\n";
	float promth;
	cin >> promth;
	if (promth >= 0) {
		my_point.setY(promth);
	} else
	{
		cout << "Liczba jest mniej niz 0> Wpowadz ponad 0";
		cin >> promth;
		my_point.setY(promth);
	}


	cout << "\n____________________\n";

	//Point2D new_point2d(1.1, 2.2);
	//new_point2d.display();


	return 0;
}