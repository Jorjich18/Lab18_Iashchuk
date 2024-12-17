#include <iostream>
using namespace std;

int main()
{
	int a[5][5], i, j, sum, sum1, sum2, sum3 ,sum4;
	cout << "Input elements of matrix 5x5:\n";
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++)
			cin >> a[i][j];
	for (i = 0; i < 5; i++)
		for (j = 0; j < 5; j++) {
			if (a[0][0]) {
				for (i = 0, j = 0; j < 5; j++)
					sum += a[i][j];
				a[0][0] = sum;
			}
			if (a[1][1]) {
				for (i = 1, j = 0; j < 5; j++)
					sum1 += a[i][j];
				a[1][1] = sum1;
			}
			if (a[2][2]) {
				for (i = 2, j = 0; j < 5; j++)
					sum2 += a[i][j];
				a[2][2] = sum2;
			}
			if (a[3][3]) {
				for (i = 3, j = 0; j < 5; j++)
					sum3 += a[i][j];
				a[3][3] = sum3;
			}
			if (a[4][4]) {
				for (i = 4, j = 0; j < 5; j++)
					sum4 += a[i][j];
				a[4][4] = sum4;
			}
		}
	cout << "Changed matrix:" << endl;
	for (i = 0; i < 5; i++) {
		for (j = 0; j < 5; j++)
			cout << a[i][j] << "\t";
		cout << endl;
	}
	return 0;
}