#include <iostream>

using namespace std;

unsigned long long arr[50][50]{ 0 };



unsigned long long f(int r, int c)
{
	if (arr[r][c] != 0) return arr[r][c];
	if (r == 0 || c == 0)return arr[r][c] = 1;
	return arr[r][c] = (f(r - 1, c) + f(r, c - 1))%100000000;
}


int main()
{
	int r, c;
	cin >> r >> c;
	printf("%lld", f(r - 1, c - 1) );
}