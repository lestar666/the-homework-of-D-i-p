#include "iostream"
#include <math.h>
#define n 1000
int prime[n];
using namespace std;

int main()
{
	int i, j, k;
    for (int i = 2; i < n; i++)
	{
		if (i&1 == 1) //按照按位与来判断奇数和偶数
			prime[i] = 1;// 奇数存为1
		else
			prime[i] = 0;//偶数存为0
	}
	prime[2] = 1;//2为素数
	for (int i = 3; i < n; i += 2)//留下奇数
	{
		if (prime[i] == 1)
		{
			for (int k = 2; k <= sqrt(i); k++)//对剩下的奇数到根号判断
				if (i%k == 0)
					prime[i] = 0;//如果可被整除，排除
			if (prime[i])//i为素数时，其倍数均排除
			{
				for (int j = 2 * i; j < n; j += i)
					prime[j] = 0;
			}
		}
	}
	for (int i = 2; i <= n; i++) {
		if (prime[i] == 1) {
			cout << "the primenumber is: " << i << endl;
		}
	}
	system("pause");
	return 0;
}