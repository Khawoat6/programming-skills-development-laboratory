#include <iostream>
#include <string>
using namespace std;

int main()
{
	int n;
	cin >> n;
	if(n==1)
	{
		cout << "NO";
		return 0;
	}
	for(int i=2;i<=n/2;i++)
	{
		if(n % i == 0)
		{
			cout << "NO";
			return 0;
		}
	}
	cout << "YES";
}

