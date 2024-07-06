#include<iostream>
using namespace std;

int f(int n)
{
	if (n <= 1) return 1;
	return f(n-1)*n;
}

int main()
{
	int n = 0;
	cin >> n;
	printf("%d",f(n));
}