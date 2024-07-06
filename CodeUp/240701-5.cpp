#include <iostream>
#include<cmath>
using namespace std;
int set = 0;
int ff(int n)
{
	if (n / 2 == 0)return set;
	return set++,ff(n / 2);
}
void f(int n)
{
	
	if (n / (int)pow( 2,set) == 0)
	{
		int k = pow(2, set);
		cout << 0;
	}
	else
	{
		int k = pow( 2,set);
		n -= pow( 2,set);
		cout << 1;
	}
	set--;
	if (set < 0) return;
	return f(n);
}

int main()
{
	int n;
	cin >> n;
	ff(n);
	f(n);
}