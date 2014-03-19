#include <iostream>
using namespace std;

int main()
{


	int TestMat [1] [4];
	TestMat [0] [0] =2;
	TestMat [0] [1] =1;
	TestMat [0] [2] =4;
	TestMat [0] [3] =3;


	cout<< TestMat [0] [0] <<TestMat [0] [1] << TestMat [0] [2] <<  TestMat [0] [3]<< endl;
	

int count=0;

	if (TestMat [0][0]!=TestMat [0][1] && TestMat [0][0]!=TestMat [0][2] && TestMat[0][0]!=TestMat[0][3])
		{
			count++;
		}

	else
	{
		cout<<"invalid"<<endl;

		return 0;
	}
		
		

	if (TestMat [0][1]!=TestMat [0][2] && TestMat[0][1]!=TestMat[0][3])
	{
		count++;
	}	
	
	else
	{	
		cout<<"invalid"<<endl;
		return 0;
	}
	
	 if (TestMat[0][2]!=TestMat[0][3])
	 	{
	 		count++;
		}
	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}
		

cout<< count << endl;



return 0;
	
}









if (BlockTwo [0] != BlockOne [1] && BlockOne [0] != BlockOne [2] && BlockOne [0] != BlockOne [3] && BlockOne [0] != BlockOne [4] && BlockOne [0] != BlockOne [5] && BlockOne [0] != BlockOne [6] && BlockOne [0] != BlockOne [7] && BlockOne [0] != BlockOne [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockOne [1] != BlockOne [2] && BlockOne [1] != BlockOne [3] && BlockOne [1] != BlockOne [4] && BlockOne [1] != BlockOne [5] && BlockOne [1] != BlockOne [6] && BlockOne [1] != BlockOne [7] && BlockOne [1] != BlockOne [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockOne [2] != BlockOne [3] && BlockOne [2] != BlockOne [4] && BlockOne [2] != BlockOne [5] && BlockOne [2] != BlockOne [6] && BlockOne [2] != BlockOne [7] && BlockOne [2] != BlockOne [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockOne [3] != BlockOne [4] && BlockOne [3] != BlockOne [5] && BlockOne [3] != BlockOne [6] && BlockOne [3] != BlockOne [7] && BlockOne [3] != BlockOne [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockOne [4] != BlockOne [5] && BlockOne [4] != BlockOne [6] && BlockOne [4] != BlockOne [7] && BlockOne [4] != BlockOne [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockOne [5] != BlockOne [6] && BlockOne [5] != BlockOne [7] && BlockOne [5] != BlockOne [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockOne [6] != BlockOne [7] && BlockOne [6] != BlockOne [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockOne [7] != BlockOne [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}
