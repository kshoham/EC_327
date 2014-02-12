#include <iostream>

using namespace std;

int main()
{

// need to put into function format, and figure out how to make the program quit and say goodbye when the user inputs 0
int x;
int z;

while (!cin.eof())
{

cout<< "Enter a number to test for perfectness: "<<" ";
cin>>x;


int sum=0;

	for (int i=1; i < x ; i++)
	{
		z=x%i;
		if (x==0)
		{
			break;
		cout<<"Goodbye."<<endl;
		}
			

		else if (z==0)
		{
			sum+=i;

		}
	
	
}

bool perfect= true;

if (sum == x)

{
cout<<x<<" "<<"is perfect"<<endl;
}

else
{
	cout<<x<<" "<<"is not perfect"<<endl;
}

}

cout<<"Goodbye."<<endl;


return 0;
	
}