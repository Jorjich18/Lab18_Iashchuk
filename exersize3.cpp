#include <iostream>
using namespace std;

int main()
{
	double a[4][8]; int i, j;
	cout << "Input elements of matrix 4x8:\n";
	for (i = 0; i < 4; i++)
		for (j = 0; j < 8; j++)
			cin >> a[i][j];
	for (i = 0; i < 4; i++) {
		double rowSum = 0;
		for (j = 0; j < 8; j++) {
			if (a[i][j] > 0)
				rowSum += a[i][j];
		}
		for (j = 0; j < 8; j++) {
			if (a[i][j] < 0)
				a[i][j] = rowSum;
		}
	}
	cout << "Changed matrix" << endl;
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 8; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	return 0;
}
