#include <iostream>
using namespace std;

bool is_perfect (long int n);

int main()
{

int x;

while (!cin.eof())
{
	cout<< "Enter a number to test for perfectness: "<<" ";
	cin>>x;
	
	if (x == 0)
	{
		cout<<"Goodbye."<<endl;
		return 0;
	}
	if (cin.eof())
	{
		cout<<endl<<"Goodbye."<<endl;
		return 0;
	}
	
	if(is_perfect(x))
	{
		cout<<x<<" "<<"is perfect"<<endl;
	}
	else 
	{
		cout<<x<<" "<<"is not perfect"<<endl;
	}

}

//cout<<"Goodbye."<<endl;

return 0;
}


//Establishing the function perfect
bool is_perfect (long int n) 

{

//How to decide whether or not CIN is a Happy Number or not
int sum=0;
int z;


	for (int i=1; i < n ; i++)
	{
		z=n%i;

		if (z==0)
		{
			sum+=i;
		}
	}


//boolean logic for the function
if (sum == n)

	{
		return true;
	}
	
	else 
	{
		return false;
	}
}

