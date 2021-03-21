#include <iostream>
using namespace std;

int main()
{
	int N, T,H[100];
	do
	{
		cin >> T;
	} while (T<1||T>100);

	for (int i = 0; i < T; i++)
	{
		int counter = 0;
		do
		{
			cin >> N;
		} while (N < 1 || N>100);

		for (int x = 0; x < N; x++)
		{
			cin >> H[x];
		}
		for (int y = 1; y < N-1; y++)
		{
			if (H[y] > H[y + 1] && H[y] > H[y - 1])
			{
				counter++;
			}
		}
		cout << "Case #" << i + 1 << ": " << counter << endl;
	}

}
