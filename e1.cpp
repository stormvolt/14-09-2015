#include <iostream>
using namespace std;

int main()
{
	long arr[]={6,0,9,6};
	long *ptr = arr;
	for(int i=0; i< sizeof arr/8; i++)
	{	
	cout << *ptr << "\n";
	ptr++;
	}
}
