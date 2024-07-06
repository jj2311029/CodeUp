#pragma warning(disable:4996)
#include<stdio.h>
#include<vector>
using namespace std;

int n;
int arr[1000];
int k = 0;//
int m = 0;//length

int f(int num)
{
	if (num == 0)
		return m;
	if (arr[num] > arr[k])
	{
		m++;
		k = num;
		f(num - 1);
	}
	else
	{
		f(num - 1);
	}
	
}

int main()
{
	
	scanf("%d",&n);
	k = n;
	for (int i = 0; i < n;i++)
	{
		scanf("%d", &arr[i]);
	}
	printf("%d", f(n));

}