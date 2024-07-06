#include<iostream>
using namespace std;
int n;
int a, b;
void f()
{
	//start a end b
	if (n % 2)	cout << n<<"";
	if (n >= b) return;
	n++;
	return f();
}

int main()
{
	cin >> a >> b;
	n = a;
	f();
	
}