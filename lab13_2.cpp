#include <iostream>
using namespace std;

const int N = 5;

void inputMatrix(double[][N]);

void findLocalMax(const double[][N], bool[][N]);

void showMatrix(const bool[][N]);

int main()
{
	double A[N][N];
	bool B[N][N];
	cout << "Input the matrix.....\n";
	inputMatrix(A);
	findLocalMax(A, B);
	cout << "Result is \n";
	showMatrix(B);
	return 0;
}

// Write definition of inputMatrix(),matrixMultiply() and showMatrix() here
void inputMatrix(double A[][N])
{
	for (int i = 0; i < N; i++)
	{
		cout << "Row " << i + 1 << ": ";
		for (int j = 0; j < N; j++)
		{
			cin >> A[j][i];
		}
	}
}
void findLocalMax(const double A[][N], bool B[][N])
{
	for (int i = 1; i < N - 1; i++)
		for (int j = 1; j < N - 1; j++)
		{
			if (A[j][i] >= A[j][i - 1] && A[j][i] >= A[j][i + 1] && A[j][i] >= A[j - 1][i] && A[j][i] >= A[j + 1][i])
				B[j][i] = true;
			else
				B[j][i] = false;
		}
	for (int i = 0; i < N; i++)
		B[0][i] = false;
	for (int i = 0; i < N; i++)
		B[N - 1][i] = false;
	for (int i = 0; i < N; i++)
		B[i][0] = false;
	for (int i = 0; i < N; i++)
		B[i][N - 1] = false;
}
void showMatrix(const bool B[][N])
{
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			cout << B[j][i] << " ";
		}
		cout << "\n";
	}
}
