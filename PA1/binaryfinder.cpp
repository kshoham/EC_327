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

//determines how many digits are in the inputPattern number
count=floor(log10(abs(inputPattern)))+1;

	int digits[count];

	if (inputPattern!=0)

{
	int temp;
	temp=abs(inputPattern);

//puts proper 1 or 0 into the array, digits
	for (int j=0;j<count;j++)
		{
			digits[j]=temp % 10;
			temp=temp/10;
		}
//checks to make sure inputted sequence only contains 1s and 0s
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

//to find if inputPattern is present in inputNum, a bitwise and comparison was used between 
//the mask and the inputted number, if the result of the this operator (temp1) is then divisible
//evenly by the sum which is the value corresponding to the binary input, inputPattern, 
//then the inputPattern occurs in the inputNum.
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

//the bitwise and comparison needs to be done one more time after the last time that
//the mask is smaller then the inputNum to accurately search all values
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