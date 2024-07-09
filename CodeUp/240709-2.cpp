//https://codeup.kr/problem.php?id=3004

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

struct person {
	string name;
	int rank;
};

bool comparePersons(const person& a, const person& b) {
	return a.rank > b.rank; // 높은 순서대로 정렬
}

void f(std::vector<person>& arr) {
	std::sort(arr.begin(), arr.end(), comparePersons);
}

int main()
{
	int size = 0;
	person arr[50]{"", 0};
	cin >> size;
	for (int i = 0; i < size; i++)
	{
		cin >> arr[i].name >> arr[i].rank;
	}
	f(arr);

}