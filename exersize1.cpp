#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	double a[7][4]; int i, j;
	cout << "Input elements of matrix 7x4:\n";
	for (i = 0; i < 7; i++)
		for (j = 0; j < 4; j++)
			cin >> a[i][j];
	for (i = 0; i < 7; i += 2) {
		for (j = 0; j < 4; j++) {
			a[i][j] = (a[i][j] > 0) ? 1 : 0;
		}
	}
	cout << "Changed matrix" << endl;
	cout << fixed << setprecision(2);
	for (i = 0; i < 7; i++) {
		for (j = 0; j < 4; j++) {
			cout << a[i][j] << "\t";
		}
		cout << endl;
	}
	return 0;
}