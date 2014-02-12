#include <iostream>
#include <math.h>
using namespace std;


int main()
{


int count;

count=0;

int n1;
int n2;
int n3;
int n4;
int n5;
int n6;
int x;
int i;
int j;
int last;

int happynumbers[10000];


// Checking to see if the value is a happy number or not, and running until 10,000 happy numbers are found and put into the array happynumbers

for (i=1; count < 10001; i++)
{ 
	x=i;
	
	n1= x % 10;
	x/=10;
	n2= x % 10;
	x/=10;
	n3= x % 10;
	x/=10;
	n4= x % 10;
	x/=10;
	n5= x % 10;
	x/=10;
	n6= x % 10;
	x/=10;

	x = pow (n1, 2)  + pow (n2, 2)  + pow (n3, 2)  + pow (n4, 2)  + pow (n5, 2)  + pow (n6, 2) ;

	last=0;

	while (x!=1 && x!=4 && x!=last)
	{ 
		last=x;

		n1= x % 10;
		x/=10;
		n2= x % 10;
		x/=10;
		n3= x % 10;
		x/=10;
		n4= x % 10;
		x/=10;
		n5= x % 10;
		x/=10;
		n6= x % 10;
		x/=10;

		x = pow (n1, 2)  + pow (n2, 2)  + pow (n3, 2)  + pow (n4, 2)  + pow (n5, 2)  + pow (n6, 2) ;


	}

	if (x==1)
	{
		happynumbers[count]=i;
		count++;
	}
		
		
}
	



// Loop to display the 10,000 Happy Numbers, 10 per line
int newcount;

for (newcount=0; newcount < 10000; newcount++)
{
	cout<<happynumbers[newcount]<<" ";

	if (newcount % 10 == 9) 
		{
			cout<<endl;	
		}
	
}
	





return 0;
	
}