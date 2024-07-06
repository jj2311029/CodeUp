#include <iostream>

using namespace std;

void print(int k, int i)
{
	if (k == i)
	{
		printf("*\n");
		return;
	}
	i++;
	printf("*");
	return print(k, i);
}

void f(int n,int k)
{
	if (n == k) return;
	print(k, 0);
	return f(n, k + 1);
}


int main()
{
	int n;
	cin >> n;
	f(n, 0);
}