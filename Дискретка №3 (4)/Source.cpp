#include <iostream>
using namespace std;

long long a(const int n)
{
	return (pow(-1, n) * (14. / 9.)) + (pow(8, n) * (9. / 11.));
}
int main()
{
	for (int i = 0; i < 20; i++)
	{
		cout << "a(" << i << ") = " << a(i) << endl;
	}
}