#include <iostream>
using namespace std;

int main()
{

int x;

//starting from 2 and cycling until 1000, this will find all the divisors of a number (not including itself) and then sum and print the result

for (int i=2; i<1001; i++)
{
	int sum=0;
	for (int j=1; j<i ; j++)
	{
		x=i%j;
		if (x==0)
		{
			sum+=j;
		}
	}
	cout<<sum<<endl;
}

return 0;
	
}