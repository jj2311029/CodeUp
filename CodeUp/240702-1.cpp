#include <iostream>
using namespace std;

void f(int n)
{
	if (n % 2 == 0)
	{
		cout << n / 2 << endl;
		return f(n / 2);
	}
	else if (n / 2 && n % 2)
	{
		cout << 3*n + 1 << endl;
		return f(3*n + 1);
	}
	return;
}



int main()
{
	int n;
	cin >> n;
	cout << n << endl;
	f(n);
}