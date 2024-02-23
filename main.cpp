#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int n;
	cin >> n;
	int i = 2;

	while (i < n)
	{
		if (n % i == 0)
		{
			cout << "Not Prime For : " << i << endl;
      Sleep(250);
		}
		else
		{
			cout << "Prime For : " << i << endl;
		}
		i = i + 1;	
    Sleep(250);
	}
	cin.get();
}
