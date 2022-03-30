#include <iostream>
#include <ctime> 

using namespace std;

int main()
{
	int A[M][N];
	for (int i = 0; i < M; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = i + j;
			cout << A[i][j] << ' ';
		}
		cout << endl;
	}
	cout << endl;

	int sum = 0; // for the sum of the elements in the row
	time_t t;
	time(&t);
	int day = localtime(&t)->tm_mday; // day of the month

	for (int x = 0; x < N; x++)
	{
		sum += A[day % N][x];
	}
	cout << sum << endl;

	return 0;
}