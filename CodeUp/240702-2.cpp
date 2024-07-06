#include <iostream>
using namespace std;

void f(int n, int k)
{
	if ((n / 2) % 2)
	{

	}
	if ((k - 1) / 3 == n)
	{
		cout << (k - 1) / 3 << endl;
		return;
	}
	if (n == 1) return;
	cout << k * 2 << endl;
	return f(n, k * 2);
}
void ff(int n, int k,int* arr)
{
	if (n % 2 == 0)
	{
		arr[29 - k] = n / 2;
		return ff(n / 2,k+1,arr);
	}
	else if (n / 2 && n % 2)
	{
		arr[29 - k] = 3 * n + 1;
		return ff(3 * n + 1, k + 1, arr);
	}
	return;
}


int main()
{
	int n;
	cin >> n;
	int arr[30]{ 0 };
	arr[29] = 0;
	cout << 1 << endl;

	ff(n,1,arr);
}