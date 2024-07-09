#include <iostream>

using namespace std;

int num = 1;
int choice = 1;
int choice_value = 0;

int f(int n)
{
	if (n % 2 == 0)
	{
		num++;
		return f(n / 2);
	}
	else if (n / 2 && n % 2)
	{
		num++;
		return f(3 * n + 1);
	}
	return num;
}


int ff(int n, int m)
{
	if (n == m)return choice;
	if ( 2 * choice_value  < f(n + 1)) 
	{	
		choice_value = f(n + 1);
		choice = n + 1;
	}

	num = 1;
	return ff(n + 1, m);

}


int main()
{
	int n, m;
	cin >> n >> m;
	//cout << n << endl;
	choice = n;
	choice_value = f(n);
	ff(n, m);
	cout << choice << endl;
	cout << f(choice) << endl;

}