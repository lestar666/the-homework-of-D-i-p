#include "iostream"
#define m 100
using namespace std;

int primefinder(int n)
{
	int i;
	if (n > 2 && !(n & 1) || n < 2)
		return 0;
	for (i = 3; i*i <= n; i += 2)
		if (!(n%i))
			return 0;
	return n;
}

int main()
{
	for(int i = 2; i <= m; i++) {
		if (primefinder(i)) {
			cout << "the primenumber is: " << i << endl;
		}
	}
	system("pause");
	return 0;
}