#include <iostream>
using namespace std;

int main()
{
int x;
int y;
int count;
int a,b;

cout<< "Enter the number to test for palindromicity:";
cin>>y;

count=0;
int temp;



for (int i=2;i<y;i++)
{
	temp=y;
	count = 0;	

//the point of this loop is to find out how many times the inputted 
//value, y, is divisible by x

	while (temp!=0)
	{
		temp=temp/i;
		count++;
	}


int numtotest[count];
int newtemp;
newtemp=y;

	for (int j=0;j<count;j++)
	{
		numtotest[j]=newtemp%i;
		newtemp=newtemp/i;

	}

	int palcount;
	palcount=0;
	
//this loop tests for palindromicity
	for (int k=0; k<count;k++)
	{
		if (numtotest[k]==numtotest[count-1-k])
		{
			palcount++;
		}
	}

	if (palcount==count)
	{
		cout<<i<<endl;
	} 

}
















//for (i=2;i<y;i++)
//{
//	a=y/i;
//	b=y%i;
//	y=a;







//}









return 0;
	
}