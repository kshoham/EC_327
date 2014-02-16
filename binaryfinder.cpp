#include <iostream>
#include <math.h>

using namespace std;

int main()
{


int inputNum;
int inputPattern;
int count;
bool lastvar=false;
cin>>inputNum>>inputPattern;
if (inputNum<=0)
{
	cout<<"Number must positive."<<endl;
	lastvar=true;
}
if(inputPattern<=0)
{
	cout<<"Sequence must be positive."<<endl;
	lastvar=true;
}

//determines how many digits are in the inputpattern number
count=floor(log10(abs(inputPattern)))+1;

	int digits[count];

	if (inputPattern!=0)
{


	


	int temp;
	temp=abs(inputPattern);

	for (int j=0;j<count;j++)
		{
			digits[j]=temp % 10;
			temp=temp/10;
		}

	for (int i=0;i<count;i++)
	{
		
		if (digits[i]>1)
		{
			cout<<"Sequence must be binary."<<endl;
			lastvar=true;
			break;
		}
	}
	
}
if(lastvar)
	{
		return 0;
	}

int sum=0;
//creates integer from binary input
for (int i=0;i<count;i++)
{
	sum+=digits[i]*pow (2, i);

}

//to create a mask
 int mask;
int temp1;
 mask=pow (2, count)-1;

bool check=false;
while (mask<inputNum)
 {
 	temp1=inputNum & mask;
 	if (temp1 % sum==0)
 		{
 			check=true;
 			cout<<"Sequence "<<inputPattern<<"occurs in "<<inputNum<<endl;
 		}
 		mask=mask*2;

 }

 	temp1=inputNum & mask;

 	if (temp1 % sum==0)
 		{
 			check=true;
 			cout<<"Sequence "<<inputPattern<<" occurs in "<<inputNum<<endl;
 		}
 		mask=mask*2;


if (check==false)
	{
		cout<<"Sequence "<<inputPattern<<" does not occur in "<<inputNum<<endl;
	}














	return 0;
	
}