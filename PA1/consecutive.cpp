
#include <iostream>
using namespace std;


int main()
{

int numbers [1000];

cout<<"Enter Four or More Integers"<<endl;
int count=0;

while (!cin.eof())
{
cin>> numbers[count];
count++;
}

int checker = 1;

//this loop checks for four consecutive numbers and prints them if they are found
for (int i=1;i<1001;i++)
{  
	
	if (numbers[i-1] == numbers[i]-1)
	{
		checker++;
	}
	else
	{
		checker=1;
	}
	if (checker == 4)
	{
		cout<<"Your Four Consecutive Numbers Are:"<<" "<<numbers[i-3]<<" "<<numbers[i-2]<<" "<<numbers[i-1]<<" "<<numbers[i]<<endl;
	break;
	}
}

return 0;
	
}