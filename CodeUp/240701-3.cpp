#include <iostream>
using namespace std;

int f(int n,int* arr)
{
	if (arr[n]||n==0) return arr[n];
	return arr[n] = f(n - 1, arr) + f(n - 2, arr);
}

int main()
{
	int arr[21] = {0,1};
	int n;
	cin >> n;
	cout << f(n,arr) << endl;
}