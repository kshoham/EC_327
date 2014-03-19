#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

int num;

//closing if the file is not found
// ifstream input ("sudokuboard.txt"); 
// input.open("sudokuboard.txt");

// if (input.fail())
// {
// 	cout<<"FAILED TO FIND FILE"<<endl;
// 	return 0;
// }


// establishing a 2D array for the sudoku data to go into


	int LineSudokuBoard [9] [1];
	int RealSudokuBoard [9] [9]={0};




//reading in the file
ifstream fin("sudokuboard.txt");



for (int i=0;i<9;i++)
{

fin >> LineSudokuBoard [i] [0];
}

for (int i=0;i<9;i++)
{

num=LineSudokuBoard [i] [0];

RealSudokuBoard [i] [8]=num%10;
num=num/10;

RealSudokuBoard [i] [7]=num%10;
num=num/10;

RealSudokuBoard [i] [6]=num%10;
num=num/10;

RealSudokuBoard [i] [5]=num%10;
num=num/10;

RealSudokuBoard [i] [4]=num%10;
num=num/10;

RealSudokuBoard [i] [3]=num%10;
num=num/10;

RealSudokuBoard [i] [2]=num%10;
num=num/10;

RealSudokuBoard [i] [1]=num%10;
num=num/10;


RealSudokuBoard [i] [0]=num%10;
num=num/10;

}

// cout<< "Number in position 1,1 is: "<< RealSudokuBoard [8] [0]<<endl;
// cout<< "Number in position 2,1 is: "<< RealSudokuBoard [8] [1]<<endl;
// cout<< "Number in position 3,1 is: "<< RealSudokuBoard [8] [2]<<endl;
// cout<< "Number in position 4,1 is: "<< RealSudokuBoard [8] [3]<<endl;
// cout<< "Number in position 5,1 is: "<< RealSudokuBoard [8] [4]<<endl;
// cout<< "Number in position 6,1 is: "<< RealSudokuBoard [8] [5]<<endl;
// cout<< "Number in position 7,1 is: "<< RealSudokuBoard [8] [6]<<endl;
// cout<< "Number in position 8,1 is: "<< RealSudokuBoard [8] [7]<<endl;
// cout<< "Number in position 9,1 is: "<< RealSudokuBoard [8] [8]<<endl;




//at this point in the code, the txt file has sucessfully been read into a 9x9 array with one value in each spot


// want to write a function to test rows, columns, 9 square boxes.
int count=0;

//this for loop checks all the rows for validity
for (int i=0; i<9 ; i++)
{
	{
	if (RealSudokuBoard [i][0]!=RealSudokuBoard [i][1] && RealSudokuBoard [i][0]!=RealSudokuBoard [i][2] && RealSudokuBoard [i][0]!=RealSudokuBoard [i][3] && RealSudokuBoard [i][0]!=RealSudokuBoard [i][4] && RealSudokuBoard [i][0]!=RealSudokuBoard [i][5] && RealSudokuBoard [i][0]!=RealSudokuBoard [i][6] && RealSudokuBoard [i][0]!=RealSudokuBoard [i][7] && RealSudokuBoard [i][0]!=RealSudokuBoard [i][8])
	{}	

	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}

	if (RealSudokuBoard [i][1]!=RealSudokuBoard [i][2] && RealSudokuBoard [i][1]!=RealSudokuBoard [i][3] && RealSudokuBoard [i][1]!=RealSudokuBoard [i][4] && RealSudokuBoard [i][1]!=RealSudokuBoard [i][5] && RealSudokuBoard [i][1]!=RealSudokuBoard [i][6] && RealSudokuBoard [i][1]!=RealSudokuBoard [i][7] && RealSudokuBoard [i][1]!=RealSudokuBoard [i][8])
	{}

	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}

	if (RealSudokuBoard [i][2]!=RealSudokuBoard [i][3] && RealSudokuBoard [i][2]!=RealSudokuBoard [i][4] && RealSudokuBoard [i][2]!=RealSudokuBoard [i][5] && RealSudokuBoard [i][2]!=RealSudokuBoard [i][6] && RealSudokuBoard [i][2]!=RealSudokuBoard [i][7] && RealSudokuBoard [i][2]!=RealSudokuBoard [i][8])
	{}
	
	else
	{
		cout<<"invalid"<<endl;
		return 0;

	}	

	if (RealSudokuBoard [i][3]!=RealSudokuBoard [i][4] && RealSudokuBoard [i][3]!=RealSudokuBoard [i][5] && RealSudokuBoard [i][3]!=RealSudokuBoard [i][6] && RealSudokuBoard [i][3]!=RealSudokuBoard [i][7] && RealSudokuBoard [i][3]!=RealSudokuBoard [i][8])
	{}

	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}
		
	if (RealSudokuBoard [i][4]!=RealSudokuBoard [i][5] && RealSudokuBoard [i][4]!=RealSudokuBoard [i][6] && RealSudokuBoard [i][4]!=RealSudokuBoard [i][7] && RealSudokuBoard [i][4]!=RealSudokuBoard [i][8])
	{}
	
	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}
		

	if (RealSudokuBoard [i][5]!=RealSudokuBoard [i][6] && RealSudokuBoard [i][5]!=RealSudokuBoard [i][7] && RealSudokuBoard [i][5]!=RealSudokuBoard [i][8])
	{}
	
	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}

	if (RealSudokuBoard [i][6]!=RealSudokuBoard [i][7] && RealSudokuBoard [i][6]!=RealSudokuBoard [i][8])
		{}
	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}
		
	 if (RealSudokuBoard [i][7]!=RealSudokuBoard [i][8])
	 {}

	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}
	
		
}
}



//this for loop checks all the columns for validity
for (int i=0; i<9 ; i++)
{
	{
	if (RealSudokuBoard [0][i]!=RealSudokuBoard [1][i] && RealSudokuBoard [0][i]!=RealSudokuBoard [2][i] && RealSudokuBoard [0][i]!=RealSudokuBoard [3][i] && RealSudokuBoard [0][i]!=RealSudokuBoard [4][i] && RealSudokuBoard [0][i]!=RealSudokuBoard [5][i] && RealSudokuBoard [0][i]!=RealSudokuBoard [6][i] && RealSudokuBoard [0][i]!=RealSudokuBoard [7][i] && RealSudokuBoard [0][i]!=RealSudokuBoard [8][i])
	{}	

	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}

	if (RealSudokuBoard [1][i]!=RealSudokuBoard [2][i] && RealSudokuBoard [1][i]!=RealSudokuBoard [3][i] && RealSudokuBoard [1][i]!=RealSudokuBoard [4][i] && RealSudokuBoard [1][i]!=RealSudokuBoard [5][i] && RealSudokuBoard [1][i]!=RealSudokuBoard [6][i] && RealSudokuBoard [1][i]!=RealSudokuBoard [7][i] && RealSudokuBoard [1][i]!=RealSudokuBoard [8][i])
	{}

	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}

	if (RealSudokuBoard [2][i]!=RealSudokuBoard [3][i] && RealSudokuBoard [2][i]!=RealSudokuBoard [4][i] && RealSudokuBoard [2][i]!=RealSudokuBoard [5][i] && RealSudokuBoard [2][i]!=RealSudokuBoard [6][i] && RealSudokuBoard [2][i]!=RealSudokuBoard [7][i] && RealSudokuBoard [2][i]!=RealSudokuBoard [8][i])
	{}
	
	else
	{
		cout<<"invalid"<<endl;
		return 0;

	}	

	if (RealSudokuBoard [3][i]!=RealSudokuBoard [4][i] && RealSudokuBoard [3][i]!=RealSudokuBoard [5][i] && RealSudokuBoard [3][i]!=RealSudokuBoard [6][i] && RealSudokuBoard [3][i]!=RealSudokuBoard [7][i] && RealSudokuBoard [3][i]!=RealSudokuBoard [8][i])
	{}

	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}
		
	if (RealSudokuBoard [4][i]!=RealSudokuBoard [5][i] && RealSudokuBoard [4][i]!=RealSudokuBoard [6][i] && RealSudokuBoard [4][i]!=RealSudokuBoard [7][i] && RealSudokuBoard [4][i]!=RealSudokuBoard [8][i])
	{}
	
	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}
		

	if (RealSudokuBoard [5][i]!=RealSudokuBoard [6][i] && RealSudokuBoard [5][i]!=RealSudokuBoard [7][i] && RealSudokuBoard [5][i]!=RealSudokuBoard [8][i])
	{}
	
	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}

	if (RealSudokuBoard [6][i]!=RealSudokuBoard [7][i] && RealSudokuBoard [6][i]!=RealSudokuBoard [8][i])
		{}
	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}
		
	 if (RealSudokuBoard [7][i]!=RealSudokuBoard [8][i])
	 {}

	else
	{
		cout<<"invalid"<<endl;
		return 0;
	}
		
}
}

// if the code reaches this point, then all the rows and columns pass the sudoku validity test


int BlockOne [9];
int BlockTwo [9];
int BlockThree [9];
int BlockFour [9];
int BlockFive [9];
int BlockSix [9];
int BlockSeven [9];
int BlockEight [9];
int BlockNine [9];

BlockOne [0]=RealSudokuBoard [0] [0];
BlockOne [1]=RealSudokuBoard [0] [1];
BlockOne [2]=RealSudokuBoard [0] [2];
BlockOne [3]=RealSudokuBoard [1] [0];
BlockOne [4]=RealSudokuBoard [1] [1];
BlockOne [5]=RealSudokuBoard [1] [2];
BlockOne [6]=RealSudokuBoard [2] [0];
BlockOne [7]=RealSudokuBoard [2] [1];
BlockOne [8]=RealSudokuBoard [2] [2];

if (BlockOne [0] != BlockOne [1] && BlockOne [0] != BlockOne [2] && BlockOne [0] != BlockOne [3] && BlockOne [0] != BlockOne [4] && BlockOne [0] != BlockOne [5] && BlockOne [0] != BlockOne [6] && BlockOne [0] != BlockOne [7] && BlockOne [0] != BlockOne [8])
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



BlockTwo [0]=RealSudokuBoard [0] [3];
BlockTwo [1]=RealSudokuBoard [0] [4];
BlockTwo [2]=RealSudokuBoard [0] [5];
BlockTwo [3]=RealSudokuBoard [1] [3];
BlockTwo [4]=RealSudokuBoard [1] [4];
BlockTwo [5]=RealSudokuBoard [1] [5];
BlockTwo [6]=RealSudokuBoard [2] [3];
BlockTwo [7]=RealSudokuBoard [2] [4];
BlockTwo [8]=RealSudokuBoard [2] [5];

if (BlockTwo [0] != BlockTwo [1] && BlockTwo [0] != BlockTwo [2] && BlockTwo [0] != BlockTwo [3] && BlockTwo [0] != BlockTwo [4] && BlockTwo [0] != BlockTwo [5] && BlockTwo [0] != BlockTwo [6] && BlockTwo [0] != BlockTwo [7] && BlockTwo [0] != BlockTwo [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockTwo [1] != BlockTwo [2] && BlockTwo [1] != BlockTwo [3] && BlockTwo [1] != BlockTwo [4] && BlockTwo [1] != BlockTwo [5] && BlockTwo [1] != BlockTwo [6] && BlockTwo [1] != BlockTwo [7] && BlockTwo [1] != BlockTwo [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockTwo [2] != BlockTwo [3] && BlockTwo [2] != BlockTwo [4] && BlockTwo [2] != BlockTwo [5] && BlockTwo [2] != BlockTwo [6] && BlockTwo [2] != BlockTwo [7] && BlockTwo [2] != BlockTwo [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockTwo [3] != BlockTwo [4] && BlockTwo [3] != BlockTwo [5] && BlockTwo [3] != BlockTwo [6] && BlockTwo [3] != BlockTwo [7] && BlockTwo [3] != BlockTwo [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockTwo [4] != BlockTwo [5] && BlockTwo [4] != BlockTwo [6] && BlockTwo [4] != BlockTwo [7] && BlockTwo [4] != BlockTwo [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockTwo [5] != BlockTwo [6] && BlockTwo [5] != BlockTwo [7] && BlockTwo [5] != BlockTwo [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockTwo [6] != BlockTwo [7] && BlockTwo [6] != BlockTwo [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockTwo [7] != BlockTwo [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}



BlockThree [0]=RealSudokuBoard [0] [6];
BlockThree [1]=RealSudokuBoard [0] [7];
BlockThree [2]=RealSudokuBoard [0] [8];
BlockThree [3]=RealSudokuBoard [1] [6];
BlockThree [4]=RealSudokuBoard [1] [7];
BlockThree [5]=RealSudokuBoard [1] [8];
BlockThree [6]=RealSudokuBoard [2] [6];
BlockThree [7]=RealSudokuBoard [2] [7];
BlockThree [8]=RealSudokuBoard [2] [8];

if (BlockThree [0] != BlockThree [1] && BlockThree [0] != BlockThree [2] && BlockThree [0] != BlockThree [3] && BlockThree [0] != BlockThree [4] && BlockThree [0] != BlockThree [5] && BlockThree [0] != BlockThree [6] && BlockThree [0] != BlockThree [7] && BlockThree [0] != BlockThree [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockThree [1] != BlockThree [2] && BlockThree [1] != BlockThree [3] && BlockThree [1] != BlockThree [4] && BlockThree [1] != BlockThree [5] && BlockThree [1] != BlockThree [6] && BlockThree [1] != BlockThree [7] && BlockThree [1] != BlockThree [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockThree [2] != BlockThree [3] && BlockThree [2] != BlockThree [4] && BlockThree [2] != BlockThree [5] && BlockThree [2] != BlockThree [6] && BlockThree [2] != BlockThree [7] && BlockThree [2] != BlockThree [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockThree [3] != BlockThree [4] && BlockThree [3] != BlockThree [5] && BlockThree [3] != BlockThree [6] && BlockThree [3] != BlockThree [7] && BlockThree [3] != BlockThree [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockThree [4] != BlockThree [5] && BlockThree [4] != BlockThree [6] && BlockThree [4] != BlockThree [7] && BlockThree [4] != BlockThree [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockThree [5] != BlockThree [6] && BlockThree [5] != BlockThree [7] && BlockThree [5] != BlockThree [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockThree [6] != BlockThree [7] && BlockThree [6] != BlockThree [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockThree [7] != BlockThree [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}



BlockFour [0]=RealSudokuBoard [3] [0];
BlockFour [1]=RealSudokuBoard [3] [1];
BlockFour [2]=RealSudokuBoard [3] [2];
BlockFour [3]=RealSudokuBoard [4] [0];
BlockFour [4]=RealSudokuBoard [4] [1];
BlockFour [5]=RealSudokuBoard [4] [2];
BlockFour [6]=RealSudokuBoard [5] [0];
BlockFour [7]=RealSudokuBoard [5] [1];
BlockFour [8]=RealSudokuBoard [5] [2];

if (BlockFour [0] != BlockFour [1] && BlockFour [0] != BlockFour [2] && BlockFour [0] != BlockFour [3] && BlockFour [0] != BlockFour [4] && BlockFour [0] != BlockFour [5] && BlockFour [0] != BlockFour [6] && BlockFour [0] != BlockFour [7] && BlockFour [0] != BlockFour [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockFour [1] != BlockFour [2] && BlockFour [1] != BlockFour [3] && BlockFour [1] != BlockFour [4] && BlockFour [1] != BlockFour [5] && BlockFour [1] != BlockFour [6] && BlockFour [1] != BlockFour [7] && BlockFour [1] != BlockFour [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockFour [2] != BlockFour [3] && BlockFour [2] != BlockFour [4] && BlockFour [2] != BlockFour [5] && BlockFour [2] != BlockFour [6] && BlockFour [2] != BlockFour [7] && BlockFour [2] != BlockFour [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockFour [3] != BlockFour [4] && BlockFour [3] != BlockFour [5] && BlockFour [3] != BlockFour [6] && BlockFour [3] != BlockFour [7] && BlockFour [3] != BlockFour [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockFour [4] != BlockFour [5] && BlockFour [4] != BlockFour [6] && BlockFour [4] != BlockFour [7] && BlockFour [4] != BlockFour [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockFour [5] != BlockFour [6] && BlockFour [5] != BlockFour [7] && BlockFour [5] != BlockFour [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockFour [6] != BlockFour [7] && BlockFour [6] != BlockFour [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockFour [7] != BlockFour [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}


BlockFive [0]=RealSudokuBoard [3] [3];
BlockFive [1]=RealSudokuBoard [3] [4];
BlockFive [2]=RealSudokuBoard [3] [5];
BlockFive [3]=RealSudokuBoard [4] [3];
BlockFive [4]=RealSudokuBoard [4] [4];
BlockFive [5]=RealSudokuBoard [4] [5];
BlockFive [6]=RealSudokuBoard [5] [3];
BlockFive [7]=RealSudokuBoard [5] [4];
BlockFive [8]=RealSudokuBoard [5] [5];

if (BlockFive [0] != BlockFive [1] && BlockFive [0] != BlockFive [2] && BlockFive [0] != BlockFive [3] && BlockFive [0] != BlockFive [4] && BlockFive [0] != BlockFive [5] && BlockFive [0] != BlockFive [6] && BlockFive [0] != BlockFive [7] && BlockFive [0] != BlockFive [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockFive [1] != BlockFive [2] && BlockFive [1] != BlockFive [3] && BlockFive [1] != BlockFive [4] && BlockFive [1] != BlockFive [5] && BlockFive [1] != BlockFive [6] && BlockFive [1] != BlockFive [7] && BlockFive [1] != BlockFive [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockFive [2] != BlockFive [3] && BlockFive [2] != BlockFive [4] && BlockFive [2] != BlockFive [5] && BlockFive [2] != BlockFive [6] && BlockFive [2] != BlockFive [7] && BlockFive [2] != BlockFive [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockFive [3] != BlockFive [4] && BlockFive [3] != BlockFive [5] && BlockFive [3] != BlockFive [6] && BlockFive [3] != BlockFive [7] && BlockFive [3] != BlockFive [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockFive [4] != BlockFive [5] && BlockFive [4] != BlockFive [6] && BlockFive [4] != BlockFive [7] && BlockFive [4] != BlockFive [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockFive [5] != BlockFive [6] && BlockFive [5] != BlockFive [7] && BlockFive [5] != BlockFive [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockFive [6] != BlockFive [7] && BlockFive [6] != BlockFive [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockFive [7] != BlockFive [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}


BlockSix [0]=RealSudokuBoard [3] [6];
BlockSix [1]=RealSudokuBoard [3] [7];
BlockSix [2]=RealSudokuBoard [3] [8];
BlockSix [3]=RealSudokuBoard [4] [6];
BlockSix [4]=RealSudokuBoard [4] [7];
BlockSix [5]=RealSudokuBoard [4] [8];
BlockSix [6]=RealSudokuBoard [5] [6];
BlockSix [7]=RealSudokuBoard [5] [7];
BlockSix [8]=RealSudokuBoard [5] [8];

if (BlockSix [0] != BlockSix [1] && BlockSix [0] != BlockSix [2] && BlockSix [0] != BlockSix [3] && BlockSix [0] != BlockSix [4] && BlockSix [0] != BlockSix [5] && BlockSix [0] != BlockSix [6] && BlockSix [0] != BlockSix [7] && BlockSix [0] != BlockSix [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockSix [1] != BlockSix [2] && BlockSix [1] != BlockSix [3] && BlockSix [1] != BlockSix [4] && BlockSix [1] != BlockSix [5] && BlockSix [1] != BlockSix [6] && BlockSix [1] != BlockSix [7] && BlockSix [1] != BlockSix [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockSix [2] != BlockSix [3] && BlockSix [2] != BlockSix [4] && BlockSix [2] != BlockSix [5] && BlockSix [2] != BlockSix [6] && BlockSix [2] != BlockSix [7] && BlockSix [2] != BlockSix [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockSix [3] != BlockSix [4] && BlockSix [3] != BlockSix [5] && BlockSix [3] != BlockSix [6] && BlockSix [3] != BlockSix [7] && BlockSix [3] != BlockSix [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockSix [4] != BlockSix [5] && BlockSix [4] != BlockSix [6] && BlockSix [4] != BlockSix [7] && BlockSix [4] != BlockSix [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockSix [5] != BlockSix [6] && BlockSix [5] != BlockSix [7] && BlockSix [5] != BlockSix [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockSix [6] != BlockSix [7] && BlockSix [6] != BlockSix [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockSix [7] != BlockSix [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}


BlockSeven [0]=RealSudokuBoard [6] [0];
BlockSeven [1]=RealSudokuBoard [6] [1];
BlockSeven [2]=RealSudokuBoard [6] [2];
BlockSeven [3]=RealSudokuBoard [7] [0];
BlockSeven [4]=RealSudokuBoard [7] [1];
BlockSeven [5]=RealSudokuBoard [7] [2];
BlockSeven [6]=RealSudokuBoard [8] [0];
BlockSeven [7]=RealSudokuBoard [8] [1];
BlockSeven [8]=RealSudokuBoard [8] [2];

if (BlockSeven [0] != BlockSeven [1] && BlockSeven [0] != BlockSeven [2] && BlockSeven [0] != BlockSeven [3] && BlockSeven [0] != BlockSeven [4] && BlockSeven [0] != BlockSeven [5] && BlockSeven [0] != BlockSeven [6] && BlockSeven [0] != BlockSeven [7] && BlockSeven [0] != BlockSeven [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockSeven [1] != BlockSeven [2] && BlockSeven [1] != BlockSeven [3] && BlockSeven [1] != BlockSeven [4] && BlockSeven [1] != BlockSeven [5] && BlockSeven [1] != BlockSeven [6] && BlockSeven [1] != BlockSeven [7] && BlockSeven [1] != BlockSeven [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockSeven [2] != BlockSeven [3] && BlockSeven [2] != BlockSeven [4] && BlockSeven [2] != BlockSeven [5] && BlockSeven [2] != BlockSeven [6] && BlockSeven [2] != BlockSeven [7] && BlockSeven [2] != BlockSeven [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockSeven [3] != BlockSeven [4] && BlockSeven [3] != BlockSeven [5] && BlockSeven [3] != BlockSeven [6] && BlockSeven [3] != BlockSeven [7] && BlockSeven [3] != BlockSeven [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockSeven [4] != BlockSeven [5] && BlockSeven [4] != BlockSeven [6] && BlockSeven [4] != BlockSeven [7] && BlockSeven [4] != BlockSeven [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockSeven [5] != BlockSeven [6] && BlockSeven [5] != BlockSeven [7] && BlockSeven [5] != BlockSeven [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockSeven [6] != BlockSeven [7] && BlockSeven [6] != BlockSeven [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockSeven [7] != BlockSeven [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}


BlockEight [0]=RealSudokuBoard [6] [3];
BlockEight [1]=RealSudokuBoard [6] [4];
BlockEight [2]=RealSudokuBoard [6] [5];
BlockEight [3]=RealSudokuBoard [7] [3];
BlockEight [4]=RealSudokuBoard [7] [4];
BlockEight [5]=RealSudokuBoard [7] [5];
BlockEight [6]=RealSudokuBoard [8] [3];
BlockEight [7]=RealSudokuBoard [8] [4];
BlockEight [8]=RealSudokuBoard [8] [5];


if (BlockEight [0] != BlockEight [1] && BlockEight [0] != BlockEight [2] && BlockEight [0] != BlockEight [3] && BlockEight [0] != BlockEight [4] && BlockEight [0] != BlockEight [5] && BlockEight [0] != BlockEight [6] && BlockEight [0] != BlockEight [7] && BlockEight [0] != BlockEight [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockEight [1] != BlockEight [2] && BlockEight [1] != BlockEight [3] && BlockEight [1] != BlockEight [4] && BlockEight [1] != BlockEight [5] && BlockEight [1] != BlockEight [6] && BlockEight [1] != BlockEight [7] && BlockEight [1] != BlockEight [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockEight [2] != BlockEight [3] && BlockEight [2] != BlockEight [4] && BlockEight [2] != BlockEight [5] && BlockEight [2] != BlockEight [6] && BlockEight [2] != BlockEight [7] && BlockEight [2] != BlockEight [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockEight [3] != BlockEight [4] && BlockEight [3] != BlockEight [5] && BlockEight [3] != BlockEight [6] && BlockEight [3] != BlockEight [7] && BlockEight [3] != BlockEight [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockEight [4] != BlockEight [5] && BlockEight [4] != BlockEight [6] && BlockEight [4] != BlockEight [7] && BlockEight [4] != BlockEight [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockEight [5] != BlockEight [6] && BlockEight [5] != BlockEight [7] && BlockEight [5] != BlockEight [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockEight [6] != BlockEight [7] && BlockEight [6] != BlockEight [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockEight [7] != BlockEight [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

BlockNine [0]=RealSudokuBoard [6] [6];
BlockNine [1]=RealSudokuBoard [6] [7];
BlockNine [2]=RealSudokuBoard [6] [8];
BlockNine [3]=RealSudokuBoard [7] [6];
BlockNine [4]=RealSudokuBoard [7] [7];
BlockNine [5]=RealSudokuBoard [7] [8];
BlockNine [6]=RealSudokuBoard [8] [6];
BlockNine [7]=RealSudokuBoard [8] [7];
BlockNine [8]=RealSudokuBoard [8] [8];

if (BlockNine [0] != BlockNine [1] && BlockNine [0] != BlockNine [2] && BlockNine [0] != BlockNine [3] && BlockNine [0] != BlockNine [4] && BlockNine [0] != BlockNine [5] && BlockNine [0] != BlockNine [6] && BlockNine [0] != BlockNine [7] && BlockNine [0] != BlockNine [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockNine [1] != BlockNine [2] && BlockNine [1] != BlockNine [3] && BlockNine [1] != BlockNine [4] && BlockNine [1] != BlockNine [5] && BlockNine [1] != BlockNine [6] && BlockNine [1] != BlockNine [7] && BlockNine [1] != BlockNine [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockNine [2] != BlockNine [3] && BlockNine [2] != BlockNine [4] && BlockNine [2] != BlockNine [5] && BlockNine [2] != BlockNine [6] && BlockNine [2] != BlockNine [7] && BlockNine [2] != BlockNine [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockNine [3] != BlockNine [4] && BlockNine [3] != BlockNine [5] && BlockNine [3] != BlockNine [6] && BlockNine [3] != BlockNine [7] && BlockNine [3] != BlockNine [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockNine [4] != BlockNine [5] && BlockNine [4] != BlockNine [6] && BlockNine [4] != BlockNine [7] && BlockNine [4] != BlockNine [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockNine [5] != BlockNine [6] && BlockNine [5] != BlockNine [7] && BlockNine [5] != BlockNine [8])
{}
else
{
	cout<<"invalid" <<endl;
	return 0;
}

if (BlockNine [6] != BlockNine [7] && BlockNine [6] != BlockNine [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}

if (BlockNine [7] != BlockNine [8])
{}
else
{
	cout<<"invalid"<<endl;
	return 0;
}


cout<<"valid"<<endl;







return 0;

}
