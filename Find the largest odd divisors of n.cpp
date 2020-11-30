#include<iostream>
using namespace std;


int main()
{
	int n, max;
	int i = 1;
	cout << "Nhap n:";
	cin >> n;
	while (n < 0)
	{
		cout << "Nhap n:";
		cin >> n;
	}
	while (i < n)
	{
		if (n % i == 0)
		{
			if (i % 2 == 1)
			{
				max = i;
			}
		} 
		i++;
	}
	cout << "Uoc le lon nhat =" << max << endl;
	return 0;
}