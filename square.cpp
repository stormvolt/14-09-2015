#include <iostream>
using namespace std;

void square(int *ptr)
{
	*ptr= *ptr * *ptr;
}


int main()
{
	int x=5;
	square(&x);
	cout << x << "\n";
}
