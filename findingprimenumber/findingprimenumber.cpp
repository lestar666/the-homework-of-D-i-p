#include "iostream"
#include <math.h>
#define n 100
int prime[n];
using namespace std;

int primefinder(int m)
{
	for (int i = 3; i <= sqrt(m); i += 2)
	{
		if (m%i == 0) {
			return 0;
		}
		else
			return 1;
	}
}

int main()
{
   
	for (int i = 2; i <= n; i++) {
		if (primefinder(i) == 1) {
			cout << "the primenumber is: " << i << endl;
		}
	}
	system("pause");
	return 0;
}