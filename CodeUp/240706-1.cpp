#include <iostream>

using namespace std;

//https://codeup.kr/problem.php?id=1929

void f(int n,int i,int* arr)
{
	if (n % 2 == 0)
	{
		arr[i] = n / 2;
		f(n / 2,i+1,arr);
		cout << arr[i] << endl;
	}
	else if (n / 2 && n % 2)
	{
		arr[i]= 3 * n + 1;
		f(3 * n + 1, i + 1, arr);
		cout << arr[i] << endl;
	}
	return;

}

int main()
{
	int arr[1000] = { 0 };
	int n;
	cin >> n;
	f(n, 0, arr);
	cout << n << endl;

}