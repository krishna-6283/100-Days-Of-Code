#include <iostream>
using namespace std;

int main()
{

	int n;
	cin >> n;
	int ans = 0;
	int base = 1;
	while (n != 0)
	{
		int digit = n & 1;
		if (digit == 0)
		{
			ans = (1 * base) + ans;
		}
		else
		{
			ans = (0 * base) + ans;
		}
		base = base * 2;
		n = n>>1;
	}
	cout<<ans<<endl;
	
	return 0;
}