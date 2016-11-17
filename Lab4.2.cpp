#include "stdafx.h"
#include "iostream"
#include "ctime"

using namespace std;

void bubble_sort(int **a, int length0, int length1)
{
	for (int k = 0; k<length0; k++) {
		for (int i = 0; i < length1 - 1; i++) {
			for (int j = 0; j < length1 - i - 1; j++) {
				if (a[k][j] > a[k][j + 1]) {
					int b = a[k][j];
					a[k][j] = a[k][j + 1];
					a[k][j + 1] = b;
				}
			}
		}
	}
}
void bubble_sort2(int **a, int length0, int length1)
{
	for (int k = 0; k<length1; k++) {
		for (int i = 0; i < length0 - 1; i++) {
			for (int j = 0; j < length0 - i - 1; j++) {
				if (a[j][k] > a[j + 1][k]) {
					int b = a[j][k];
					a[j][k] = a[j + 1][k];
					a[j + 1][k] = b;
				}
			}
		}
	}
}
void output(int **b, int n, int m)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < m; j++)
			cout << b[i][j] << " ";
		cout << "\n";
	}
}
int main() {
	int n;
	int m;
	srand(time(0));
	cin >> n;
	cin >> m;
    srand(time(0));
	int **arr = new int*[n];
    for (int i = 0; i < n; i++)
		arr[i] = new int[m];
    for (int j = 0; j < n; j++)
		for (int k = 0; k < m; k++)
			arr[j][k] = (rand() % 10);
	cout << "\n";
	output(arr, n, m);
	bubble_sort2(arr, n, m);
	bubble_sort(arr, n, m);
	cout << "\n";
	output(arr, n, m);
	system("pause");
}
