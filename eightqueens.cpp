#include <iostream>
#include <fstream>
#include <string>
#include <cmath>
#include <cstdlib>

using namespace std;

int main()
{

int checks1=0;
int checks2=0;
int checks3=0;
int checks4=0;

// char str[45]={"attack.fen"};
// char EightQueens [100] ;
// int count=0;
  
//TRY ONE, gets character by character


  // std::ifstream is(str);     // open file

  // while (is.good())          // loop while extraction from file is possible
  // {
  //   char c = is.get();       // get character from file
  //   if (is.good())
  //     std::cout << c;

  // 	EightQueens[count]=c;   //save character into an array to test in the future
  // 	count++;
  // }

  // is.close();                // close file

//TRY 2 to open by line

fstream input("attack.fen");

string EightQueensLine [4];

if (input.fail())
{
	cout<<"File Does Not Exist";
	return 0;
}


string Test;
int count=0;

while(!input.eof())
{
	std::getline(input, Test);
	//cout<< Test << endl;
	EightQueensLine [count]=Test;
	count++;
}



input.close();


int LOne;
int LTwo;
int LThree;
int LFour;

//cout<< EightQueensLine [0]<<endl;
LOne= EightQueensLine[0].length();
// EightQueensLine[0].erase(LOne-9,LOne);
//cout<<EightQueensLine[0]<<endl;


//cout<< EightQueensLine [1]<<endl;
LTwo=EightQueensLine [1].length();
//EightQueensLine[1].erase(LTwo-9,LTwo);
//cout<<EightQueensLine[1]<<endl;

//cout<< EightQueensLine [2]<<endl;
LThree=EightQueensLine [2].length();
//EightQueensLine[2].erase(LThree-9,LThree);
//cout<<EightQueensLine[2]<<endl;

//cout<< EightQueensLine [3]<<endl;
LFour=EightQueensLine [3].length();
//EightQueensLine[3].erase(LFour-9,LFour);
//cout<<EightQueensLine[3]<<endl;


//TRY 3, by line like in the sudoku program
	// establishing a 2D array for the sudoku data to go into


// 	char EightQueensLine [4] [1];
// 	//int RealSudokuBoard [9] [9]={0};




// //reading in the file
// ifstream fin("attack.fen");



// for (int i=0;i<4;i++)
// {

// fin >> EightQueensLine [i] [0];
// cout<< EightQueensLine [i] <<endl;
// }

int PositionsOne [8];
int PositionsTwo [8];
int PositionsThree [8];
int PositionsFour [8];

int NewCount;

//To find the locations of the / , for line 1
	NewCount=1;
	for (int j=0;j<(LOne);j++)
	{ 
		char ToCheck=EightQueensLine[0].at (j);
		
		if (ToCheck == '/')
		{
			PositionsOne [NewCount]=(j+1);
			NewCount++;
			
		}
	}

PositionsOne [0]= 0;




//To find the locations of the / , for line 2
	NewCount=1;
	for (int j=0;j<(LTwo);j++)
	{ 
		char ToCheck=EightQueensLine[1].at (j);
		
		if (ToCheck == '/')
		{
			PositionsTwo [NewCount]=(j+1);
			NewCount++;
			
		}
	}



PositionsTwo [0]= 0;


//To find the locations of the / , for line 3

	NewCount=1;
	for (int j=0;j<(LThree);j++)
	{ 
		char ToCheck=EightQueensLine[2].at (j);
		
		if (ToCheck == '/')
		{
			PositionsThree [NewCount]=(j+1);
			NewCount++;
			
		}
	}

PositionsThree [0]= 0;



//To find the locations of the / , for line 4
	NewCount=1;
	for (int j=0;j<(LFour);j++)
	{ 
		char ToCheck=EightQueensLine[3].at (j);
		
		if (ToCheck == '/')
		{
			PositionsFour [NewCount]=(j+1);
			NewCount++;
			
		}
	}


PositionsFour [0]= 0;



int MatrixOne [8] [8]={0};
int MatrixTwo [8] [8]={0};
int MatrixThree [8] [8]={0};
int MatrixFour [8] [8]={0};

//To make matrix 1

for (int i=0;i<8;i++)
{
	char ToCheck0 = EightQueensLine [0].at (PositionsOne [i]);
	
	int iTocheck0 = ToCheck0-'0';
	int Value=iTocheck0;
	if (Value!=33)
	{
		for(int j=0;j<9;j++)
		{
			if (Value == j)
			{
			MatrixOne [i] [j] = 1;
		}
		}
	}
	if (Value ==33)
	{
		Value=0;

		for(int j=0;j<9;j++)
		{
			if (Value == j)
			{
			MatrixOne [i] [j] = 1;
			}
		}
	}
}


//To make matrix 2

for (int i=0;i<8;i++)
{
	char ToCheck0 = EightQueensLine [1].at (PositionsTwo [i]);
	
	int iTocheck0 = ToCheck0-'0';
	int Value=iTocheck0;
	if (Value!=33)
	{
		for(int j=0;j<9;j++)
		{
			if (Value == j)
			{
			MatrixTwo [i] [j] = 1;
		}
		}
	}
	if (Value ==33)
	{
		Value=0;

		for(int j=0;j<9;j++)
		{
			if (Value == j)
			{
			MatrixTwo [i] [j] = 1;
			}
		}
	}
}


//To make matrix 3

for (int i=0;i<8;i++)
{
	char ToCheck0 = EightQueensLine [2].at (PositionsThree [i]);
	
	int iTocheck0 = ToCheck0-'0';
	int Value=iTocheck0;
	if (Value!=33)
	{
		for(int j=0;j<9;j++)
		{
			if (Value == j)
			{
			MatrixThree [i] [j] = 1;
		}
		}
	}
	if (Value ==33)
	{
		Value=0;

		for(int j=0;j<9;j++)
		{
			if (Value == j)
			{
			MatrixThree [i] [j] = 1;
			}
		}
	}
}

// cout << "\n\nOutput view of 2D array:\n";
//    for (int i = 0; i < 8; i++)
//    {
//       for (int j = 0; j <8; j++)
//       {
//          cout << MatrixThree[i][j];
//       }
//       cout << endl;
//    }


//cout<<"first position matrix three:" << MatrixThree [0] [0]<< endl;

//To make matrix 4

for (int i=0;i<8;i++)
{
	char ToCheck0 = EightQueensLine [3].at (PositionsFour [i]);
	
	int iTocheck0 = ToCheck0-'0';
	int Value=iTocheck0;
	if (Value!=33)
	{
		for(int j=0;j<9;j++)
		{
			if (Value == j)
			{
			MatrixFour [i] [j] = 1;
		}
		}
	}
	if (Value ==33)
	{
		Value=0;

		for(int j=0;j<9;j++)
		{
			if (Value == j)
			{
			MatrixFour [i] [j] = 1;
			}
		}
	}
}

MatrixThree [0] [0]=0;

//To test if the matrices 

//Row Sum-Mat1
  int RowsOne[8]={0};

   int rowTotal = 0;
   
   //cout << "Total of each row:\n";
   for (int i = 0; i < 8; i++)
   {
      rowTotal = 0; // Resets each row to 0 after each iteration.

      for (int j = 0; j < 8; j++)
      {
         rowTotal += MatrixOne[i][j];
      }
      RowsOne[i]=rowTotal;
      //cout << "Row " << (i + 1) << " total: " << rowTotal << endl;
   }


for (int i=0 ;i<8; i++)
{
	if (RowsOne [i]==1)
		{
			checks1++; 
		}

}
//cout<<"Value of checks 1:" <<checks1<<endl;

//Column Test-Mat1
   
   int j;
   int ColTotal=0;
   int ColsOne[8]= {0};  

  //cout << "Total of each column:\n";
  
   for (int i = 0; i < 8; i++)
   {
      ColTotal = 0; // Resets each row to 0 after each iteration.

      for (j = 0; j < 8; j++)
      {
         ColTotal += MatrixOne[j][i];
      }
      ColsOne[i]=ColTotal;
      //cout << "Column " << (i + 1) << " total: " << ColTotal << endl;
   }

for (int i=0 ;i<8; i++)
{
	if (ColsOne [i]==1)
		{
			checks1++; 
		}
}
//cout<<"Value of checks 1:" <<checks1<<endl;
  

  //Row Sum-Mat2
    int RowsTwo[8]={0};

   //cout << "Total of each row:\n";
   for (int i = 0; i < 8; i++)
   {
      rowTotal = 0; // Resets each row to 0 after each iteration.

      for (int j = 0; j < 8; j++)
      {
         rowTotal += MatrixTwo[i][j];
      }
      RowsTwo[i]=rowTotal;
      //cout << "Row " << (i + 1) << " total: " << rowTotal << endl;
   }

for (int i=0 ;i<8; i++)
{
	if (RowsTwo [i]==1)
		{
			checks2++; 
		}

}
//cout<<"Value of checks 2:" <<checks2<<endl;


//Column Test-Mat2
int ColsTwo[8]= {0};

  //cout << "Total of each column:\n";
  
   for (int i = 0; i < 8; i++)
   {
      ColTotal = 0; // Resets each row to 0 after each iteration.

      for (j = 0; j < 8; j++)
      {
         ColTotal += MatrixTwo[j][i];
      }
      ColsTwo[i]=ColTotal;
      //cout << "Column " << (i + 1) << " total: " << ColTotal << endl;
   }

for (int i=0 ;i<8; i++)
{
	if (ColsTwo [i]==1)
		{
			checks2++; 
		}
}

//cout<<"Value of checks 2:" <<checks2<<endl;

//Row Sum-Mat3
    int RowsThree[8]={0};
   
   //cout << "Total of each row:\n";
   for (int i = 0; i < 8; i++)
   {
      rowTotal = 0; // Resets each row to 0 after each iteration.

      for (int j = 0; j < 8; j++)
      {
         rowTotal += MatrixThree[i][j];
      }
       RowsThree[i]=rowTotal;
      //cout << "Row " << (i + 1) << " total: " << rowTotal << endl;
   }

for (int i=0 ;i<8; i++)
{
	if (RowsThree [i]==1)
		{
			checks3++; 
		}

}
//cout<<"Value of checks 3:" <<checks3<<endl;

//Column Test-Mat3
 
 int ColsThree[8]= {0};

  //cout << "Total of each column:\n";
  
   for (int i = 0; i < 8; i++)
   {
      ColTotal = 0; // Resets each row to 0 after each iteration.

      for (j = 0; j < 8; j++)
      {
         ColTotal += MatrixThree[j][i];
      }
      ColsThree[i]=ColTotal;
      //cout << "Column " << (i + 1) << " total: " << ColTotal << endl;
   }

for (int i=0 ;i<8; i++)
{
	if (ColsThree [i]==1)
		{
			checks3++; 
		}
}

//cout<<"Value of checks 3:" <<checks3<<endl;

// int Mat3SumR1,Mat3SumR2, Mat3SumR3, Mat3SumR4, Mat3SumR5, Mat3SumR6, Mat3SumR7, Mat3SumR8;


// Mat3SumR1=(MatrixThree [0] [0] + MatrixThree [0] [1] + MatrixThree [0] [2] + MatrixThree [0] [3] + MatrixThree [0] [4] + MatrixThree [0] [5] + MatrixThree [0] [6] + MatrixThree [0] [7]);
// Mat3SumR2=(MatrixThree [1] [0] + MatrixThree [1] [1] + MatrixThree [1] [2] + MatrixThree [1] [3] + MatrixThree [1] [4] + MatrixThree [1] [5] + MatrixThree [1] [6] + MatrixThree [1] [7]);
// Mat3SumR3=(MatrixThree [2] [0] + MatrixThree [2] [1] + MatrixThree [2] [2] + MatrixThree [2] [3] + MatrixThree [2] [4] + MatrixThree [2] [5] + MatrixThree [2] [6] + MatrixThree [2] [7]);
// Mat3SumR4=(MatrixThree [3] [0] + MatrixThree [3] [1] + MatrixThree [3] [2] + MatrixThree [3] [3] + MatrixThree [3] [4] + MatrixThree [3] [5] + MatrixThree [3] [6] + MatrixThree [3] [7]);
// Mat3SumR5=(MatrixThree [4] [0] + MatrixThree [4] [1] + MatrixThree [4] [2] + MatrixThree [4] [3] + MatrixThree [4] [4] + MatrixThree [4] [5] + MatrixThree [4] [6] + MatrixThree [4] [7]);
// Mat3SumR6=(MatrixThree [5] [0] + MatrixThree [5] [1] + MatrixThree [5] [2] + MatrixThree [5] [3] + MatrixThree [5] [4] + MatrixThree [5] [5] + MatrixThree [5] [6] + MatrixThree [5] [7]);
// Mat3SumR7=(MatrixThree [6] [0] + MatrixThree [6] [1] + MatrixThree [6] [2] + MatrixThree [6] [3] + MatrixThree [6] [4] + MatrixThree [6] [5] + MatrixThree [6] [6] + MatrixThree [6] [7]);
// Mat3SumR8=(MatrixThree [7] [0] + MatrixThree [7] [1] + MatrixThree [7] [2] + MatrixThree [7] [3] + MatrixThree [7] [4] + MatrixThree [7] [5] + MatrixThree [7] [6] + MatrixThree [7] [7]);

// cout<< "Sum 1: "<< Mat3SumR1<< endl;
// cout<< "Sum 2: "<< Mat3SumR2<< endl;

// cout<< "Sum3: "<< Mat3SumR3<< endl;
// cout<< "Sum 4: "<< Mat3SumR4<< endl;

// cout<< "Sum 5: "<< Mat3SumR5<< endl;
// cout<< "Sum 6: "<< Mat3SumR6<< endl;

// cout<< "Sum 7: "<< Mat3SumR7<< endl;
// cout<< "Sum 8: "<< Mat3SumR8<< endl;


   //Row Sum-Mat4
   int RowsFour[8]={0};

   //cout << "Total of each row:\n";

   for (int i = 0; i < 8; i++)
   {
      rowTotal = 0; // Resets each row to 0 after each iteration.

      for (int j = 0; j < 8; j++)
      {
         rowTotal += MatrixFour[i][j];
      }
      
      RowsFour[i]=rowTotal;
      //cout << "Row " << (i + 1) << " total: " << rowTotal << endl;
   }

for (int i=0 ;i<8; i++)
{
	if (RowsFour [i]==1)
		{
			checks4++; 
		}

}

//cout<<"Value of checks 4:" <<checks4<<endl;

//Column Test-Mat4
 int ColsFour[8]= {0};

    // cout << "Total of each column:\n";
  
   for (int i = 0; i < 8; i++)
   {
      ColTotal = 0; // Resets each row to 0 after each iteration.

      for (j = 0; j < 8; j++)
      {
         ColTotal += MatrixFour[j][i];
      }

      ColsFour[i]=ColTotal;
      //cout << "Column " << (i + 1) << " total: " << ColTotal << endl;
   }

for (int i=0 ;i<8; i++)
{
	if (ColsFour [i]==1)
		{
			checks4++; 
		}
}

//cout<<"Value of checks 4:" <<checks4<<endl;

//Diagonal Test

//Mat 1-

int Mat1Diag1,Mat1Diag2, Mat1Diag3, Mat1Diag4, Mat1Diag5, Mat1Diag6, Mat1Diag7, Mat1Diag8, Mat1Diag9, Mat1Diag10, Mat1Diag11, Mat1Diag12, Mat1Diag13, Mat1Diag14,Mat1Diag15, Mat1Diag16, Mat1Diag17, Mat1Diag18, Mat1Diag19, Mat1Diag20, Mat1Diag21, Mat1Diag22, Mat1Diag23, Mat1Diag24, Mat1Diag25, Mat1Diag26;


Mat1Diag1= (MatrixOne [0] [1] + MatrixOne [1] [0]);
Mat1Diag2= (MatrixOne [0] [2] + MatrixOne [1] [1] + MatrixOne [2] [0] );
Mat1Diag3= (MatrixOne [0] [3] + MatrixOne [1] [2] + MatrixOne [2] [1] + MatrixOne [3] [0]);
Mat1Diag4= (MatrixOne [0] [4] + MatrixOne [1] [3] + MatrixOne [2] [2] + MatrixOne [3] [1] + MatrixOne [4] [0] );
Mat1Diag5= (MatrixOne [0] [5] + MatrixOne [1] [4] + MatrixOne [2] [3] + MatrixOne [3] [2] + MatrixOne [4] [1] + MatrixOne [5] [0] );
Mat1Diag6= (MatrixOne [0] [6] + MatrixOne [1] [5] + MatrixOne [2] [4] + MatrixOne [3] [3] + MatrixOne [4] [2] + MatrixOne [5] [1] + MatrixOne [6] [0] );
Mat1Diag7= (MatrixOne [0] [7] + MatrixOne [1] [6] + MatrixOne [2] [5] + MatrixOne [3] [4] + MatrixOne [4] [3] + MatrixOne [5] [2] + MatrixOne [6] [1] + MatrixOne [7] [0]);
Mat1Diag8= (MatrixOne [1] [7] + MatrixOne [2] [6] + MatrixOne [3] [5] + MatrixOne [4] [4] + MatrixOne [5] [3] + MatrixOne [6] [2] + MatrixOne [7] [1] );
Mat1Diag9= (MatrixOne [2] [7] + MatrixOne [3] [6] + MatrixOne [4] [5] + MatrixOne [5] [4] + MatrixOne [6] [3] + MatrixOne [7] [2]);
Mat1Diag10= (MatrixOne [3] [7] + MatrixOne [4] [6] + MatrixOne [5] [5] + MatrixOne [6] [4] + MatrixOne [7] [3]);
Mat1Diag11= (MatrixOne [4] [7] + MatrixOne [5] [6] + MatrixOne [6] [5] + MatrixOne [7] [4]);
Mat1Diag12= (MatrixOne [5] [7] + MatrixOne [6] [6] + MatrixOne [7] [5]);
Mat1Diag13= (MatrixOne [6] [7] + MatrixOne [7] [6]);

Mat1Diag14= (MatrixOne [0] [6] + MatrixOne [1] [7]);
Mat1Diag15= (MatrixOne [0] [5] + MatrixOne [1] [6] + MatrixOne [2] [7] );
Mat1Diag16= (MatrixOne [0] [4] + MatrixOne [1] [5] + MatrixOne [2] [6] + MatrixOne [3] [7]);
Mat1Diag17= (MatrixOne [0] [3] + MatrixOne [1] [4] + MatrixOne [2] [5] + MatrixOne [3] [6] + MatrixOne [4] [7] );
Mat1Diag18= (MatrixOne [0] [2] + MatrixOne [1] [3] + MatrixOne [2] [4] + MatrixOne [3] [5] + MatrixOne [4] [6] + MatrixOne [5] [7] );
Mat1Diag19= (MatrixOne [0] [1] + MatrixOne [1] [2] + MatrixOne [2] [3] + MatrixOne [3] [4] + MatrixOne [4] [5] + MatrixOne [5] [6] + MatrixOne [6] [7] );
Mat1Diag20= (MatrixOne [0] [0] + MatrixOne [1] [1] + MatrixOne [2] [2] + MatrixOne [3] [3] + MatrixOne [4] [4] + MatrixOne [5] [5] + MatrixOne [6] [6] + MatrixOne [7] [7]);
Mat1Diag21= (MatrixOne [1] [0] + MatrixOne [2] [1] + MatrixOne [3] [2] + MatrixOne [4] [3] + MatrixOne [5] [4] + MatrixOne [6] [5] + MatrixOne [7] [6] );
Mat1Diag22= (MatrixOne [2] [0] + MatrixOne [3] [1] + MatrixOne [4] [2] + MatrixOne [5] [3] + MatrixOne [6] [4] + MatrixOne [7] [5]);
Mat1Diag23=(MatrixOne [3] [0] + MatrixOne [4] [1] + MatrixOne [5] [2] + MatrixOne [6] [3] + MatrixOne [7] [4]);
Mat1Diag24=(MatrixOne [4] [0] + MatrixOne [5] [1] + MatrixOne [6] [2] + MatrixOne [7] [3]);
Mat1Diag25=(MatrixOne [5] [0] + MatrixOne [6] [1] + MatrixOne [7] [2]);
Mat1Diag26=(MatrixOne [6] [0] + MatrixOne [7] [1]);

int DiagonalSums1 [26];

DiagonalSums1 [0]=Mat1Diag1;
DiagonalSums1 [1]=Mat1Diag2;
DiagonalSums1 [2]=Mat1Diag3;
DiagonalSums1 [3]=Mat1Diag4;
DiagonalSums1 [4]=Mat1Diag5;
DiagonalSums1 [5]=Mat1Diag6;
DiagonalSums1 [6]=Mat1Diag7;
DiagonalSums1 [7]=Mat1Diag8;
DiagonalSums1 [8]=Mat1Diag9;
DiagonalSums1 [9]=Mat1Diag10;
DiagonalSums1 [10]=Mat1Diag11;
DiagonalSums1 [11]=Mat1Diag12;
DiagonalSums1 [12]=Mat1Diag13;
DiagonalSums1 [13]=Mat1Diag14;
DiagonalSums1 [14]=Mat1Diag15;
DiagonalSums1 [15]=Mat1Diag16;
DiagonalSums1 [16]=Mat1Diag17;
DiagonalSums1 [17]=Mat1Diag18;
DiagonalSums1 [18]=Mat1Diag19;
DiagonalSums1 [19]=Mat1Diag20;
DiagonalSums1 [20]=Mat1Diag21;
DiagonalSums1 [21]=Mat1Diag22;
DiagonalSums1 [22]=Mat1Diag23;
DiagonalSums1 [23]=Mat1Diag24;
DiagonalSums1 [24]=Mat1Diag25; 
DiagonalSums1 [25]=Mat1Diag26;

for (int i=0 ;i<26; i++)
{
	if (DiagonalSums1 [i]==1 | DiagonalSums1 [i]==0)
		{
			checks1++; 
		}
}
//cout<<"value of checks-final:"<<checks1<<endl;

//Mat2

int Mat2Diag1,Mat2Diag2, Mat2Diag3, Mat2Diag4, Mat2Diag5, Mat2Diag6, Mat2Diag7, Mat2Diag8, Mat2Diag9, Mat2Diag10, Mat2Diag11, Mat2Diag12, Mat2Diag13, Mat2Diag14,Mat2Diag15, Mat2Diag16, Mat2Diag17, Mat2Diag18, Mat2Diag19, Mat2Diag20, Mat2Diag21, Mat2Diag22, Mat2Diag23, Mat2Diag24, Mat2Diag25, Mat2Diag26;


Mat2Diag1= (MatrixTwo [0] [1] + MatrixTwo [1] [0]);
Mat2Diag2= (MatrixTwo [0] [2] + MatrixTwo [1] [1] + MatrixTwo [2] [0] );
Mat2Diag3= (MatrixTwo [0] [3] + MatrixTwo [1] [2] + MatrixTwo [2] [1] + MatrixTwo [3] [0]);
Mat2Diag4= (MatrixTwo [0] [4] + MatrixTwo [1] [3] + MatrixTwo [2] [2] + MatrixTwo [3] [1] + MatrixTwo [4] [0] );
Mat2Diag5= (MatrixTwo [0] [5] + MatrixTwo [1] [4] + MatrixTwo [2] [3] + MatrixTwo [3] [2] + MatrixTwo [4] [1] + MatrixTwo [5] [0] );
Mat2Diag6= (MatrixTwo [0] [6] + MatrixTwo [1] [5] + MatrixTwo [2] [4] + MatrixTwo [3] [3] + MatrixTwo [4] [2] + MatrixTwo [5] [1] + MatrixTwo [6] [0] );
Mat2Diag7= (MatrixTwo [0] [7] + MatrixTwo [1] [6] + MatrixTwo [2] [5] + MatrixTwo [3] [4] + MatrixTwo [4] [3] + MatrixTwo [5] [2] + MatrixTwo [6] [1] + MatrixTwo [7] [0]);
Mat2Diag8= (MatrixTwo [1] [7] + MatrixTwo [2] [6] + MatrixTwo [3] [5] + MatrixTwo [4] [4] + MatrixTwo [5] [3] + MatrixTwo [6] [2] + MatrixTwo [7] [1] );
Mat2Diag9= (MatrixTwo [2] [7] + MatrixTwo [3] [6] + MatrixTwo [4] [5] + MatrixTwo [5] [4] + MatrixTwo [6] [3] + MatrixTwo [7] [2]);
Mat2Diag10= (MatrixTwo [3] [7] + MatrixTwo [4] [6] + MatrixTwo [5] [5] + MatrixTwo [6] [4] + MatrixTwo [7] [3]);
Mat2Diag11= (MatrixTwo [4] [7] + MatrixTwo [5] [6] + MatrixTwo [6] [5] + MatrixTwo [7] [4]);
Mat2Diag12= (MatrixTwo [5] [7] + MatrixTwo [6] [6] + MatrixTwo [7] [5]);
Mat2Diag13= (MatrixTwo [6] [7] + MatrixTwo [7] [6]);

Mat2Diag14= (MatrixTwo [0] [6] + MatrixTwo [1] [7]);
Mat2Diag15= (MatrixTwo [0] [5] + MatrixTwo [1] [6] + MatrixTwo [2] [7] );
Mat2Diag16= (MatrixTwo [0] [4] + MatrixTwo [1] [5] + MatrixTwo [2] [6] + MatrixTwo [3] [7]);
Mat2Diag17= (MatrixTwo [0] [3] + MatrixTwo [1] [4] + MatrixTwo [2] [5] + MatrixTwo [3] [6] + MatrixTwo [4] [7] );
Mat2Diag18= (MatrixTwo [0] [2] + MatrixTwo [1] [3] + MatrixTwo [2] [4] + MatrixTwo [3] [5] + MatrixTwo [4] [6] + MatrixTwo [5] [7] );
Mat2Diag19= (MatrixTwo [0] [1] + MatrixTwo [1] [2] + MatrixTwo [2] [3] + MatrixTwo [3] [4] + MatrixTwo [4] [5] + MatrixTwo [5] [6] + MatrixTwo [6] [7] );
Mat2Diag20= (MatrixTwo [0] [0] + MatrixTwo [1] [1] + MatrixTwo [2] [2] + MatrixTwo [3] [3] + MatrixTwo [4] [4] + MatrixTwo [5] [5] + MatrixTwo [6] [6] + MatrixTwo [7] [7]);
Mat2Diag21= (MatrixTwo [1] [0] + MatrixTwo [2] [1] + MatrixTwo [3] [2] + MatrixTwo [4] [3] + MatrixTwo [5] [4] + MatrixTwo [6] [5] + MatrixTwo [7] [6] );
Mat2Diag22= (MatrixTwo [2] [0] + MatrixTwo [3] [1] + MatrixTwo [4] [2] + MatrixTwo [5] [3] + MatrixTwo [6] [4] + MatrixTwo [7] [5]);
Mat2Diag23=(MatrixTwo [3] [0] + MatrixTwo [4] [1] + MatrixTwo [5] [2] + MatrixTwo [6] [3] + MatrixTwo [7] [4]);
Mat2Diag24=(MatrixTwo [4] [0] + MatrixTwo [5] [1] + MatrixTwo [6] [2] + MatrixTwo [7] [3]);
Mat2Diag25=(MatrixTwo [5] [0] + MatrixTwo [6] [1] + MatrixTwo [7] [2]);
Mat2Diag26=(MatrixTwo [6] [0] + MatrixTwo [7] [1]);

int DiagonalSums2 [26];

DiagonalSums2 [0]=Mat2Diag1;
DiagonalSums2 [1]=Mat2Diag2;
DiagonalSums2 [2]=Mat2Diag3;
DiagonalSums2 [3]=Mat2Diag4;
DiagonalSums2 [4]=Mat2Diag5;
DiagonalSums2 [5]=Mat2Diag6;
DiagonalSums2 [6]=Mat2Diag7;
DiagonalSums2 [7]=Mat2Diag8;
DiagonalSums2 [8]=Mat2Diag9;
DiagonalSums2 [9]=Mat2Diag10;
DiagonalSums2 [10]=Mat2Diag11;
DiagonalSums2 [11]=Mat2Diag12;
DiagonalSums2 [12]=Mat2Diag13;
DiagonalSums2 [13]=Mat2Diag14;
DiagonalSums2 [14]=Mat2Diag15;
DiagonalSums2 [15]=Mat2Diag16;
DiagonalSums2 [16]=Mat2Diag17;
DiagonalSums2 [17]=Mat2Diag18;
DiagonalSums2 [18]=Mat2Diag19;
DiagonalSums2 [19]=Mat2Diag20;
DiagonalSums2 [20]=Mat2Diag21;
DiagonalSums2 [21]=Mat2Diag22;
DiagonalSums2 [22]=Mat2Diag23;
DiagonalSums2 [23]=Mat2Diag24;
DiagonalSums2 [24]=Mat2Diag25; 
DiagonalSums2 [25]=Mat2Diag26;



for (int i=0 ;i<26; i++)
{
	if (DiagonalSums2 [i]==1 | DiagonalSums2 [i]==0)
		{
			checks2++; 
		}
}
//cout<<"value of checks2-final:"<<checks2<<endl;


//Mat 3

int Mat3Diag1,Mat3Diag2, Mat3Diag3, Mat3Diag4, Mat3Diag5, Mat3Diag6, Mat3Diag7, Mat3Diag8, Mat3Diag9, Mat3Diag10, Mat3Diag11, Mat3Diag12, Mat3Diag13, Mat3Diag14,Mat3Diag15, Mat3Diag16, Mat3Diag17, Mat3Diag18, Mat3Diag19, Mat3Diag20, Mat3Diag21, Mat3Diag22, Mat3Diag23, Mat3Diag24, Mat3Diag25, Mat3Diag26;


Mat3Diag1= (MatrixThree [0] [1] + MatrixThree [1] [0]);
Mat3Diag2= (MatrixThree [0] [2] + MatrixThree [1] [1] + MatrixThree [2] [0] );
Mat3Diag3= (MatrixThree [0] [3] + MatrixThree [1] [2] + MatrixThree [2] [1] + MatrixThree [3] [0]);
Mat3Diag4= (MatrixThree [0] [4] + MatrixThree [1] [3] + MatrixThree [2] [2] + MatrixThree [3] [1] + MatrixThree [4] [0] );
Mat3Diag5= (MatrixThree [0] [5] + MatrixThree [1] [4] + MatrixThree [2] [3] + MatrixThree [3] [2] + MatrixThree [4] [1] + MatrixThree [5] [0] );
Mat3Diag6= (MatrixThree [0] [6] + MatrixThree [1] [5] + MatrixThree [2] [4] + MatrixThree [3] [3] + MatrixThree [4] [2] + MatrixThree [5] [1] + MatrixThree [6] [0] );
Mat3Diag7= (MatrixThree [0] [7] + MatrixThree [1] [6] + MatrixThree [2] [5] + MatrixThree [3] [4] + MatrixThree [4] [3] + MatrixThree [5] [2] + MatrixThree [6] [1] + MatrixThree [7] [0]);
Mat3Diag8= (MatrixThree [1] [7] + MatrixThree [2] [6] + MatrixThree [3] [5] + MatrixThree [4] [4] + MatrixThree [5] [3] + MatrixThree [6] [2] + MatrixThree [7] [1] );
Mat3Diag9= (MatrixThree [2] [7] + MatrixThree [3] [6] + MatrixThree [4] [5] + MatrixThree [5] [4] + MatrixThree [6] [3] + MatrixThree [7] [2]);
Mat3Diag10= (MatrixThree [3] [7] + MatrixThree [4] [6] + MatrixThree [5] [5] + MatrixThree [6] [4] + MatrixThree [7] [3]);
Mat3Diag11= (MatrixThree [4] [7] + MatrixThree [5] [6] + MatrixThree [6] [5] + MatrixThree [7] [4]);
Mat3Diag12= (MatrixThree [5] [7] + MatrixThree [6] [6] + MatrixThree [7] [5]);
Mat3Diag13= (MatrixThree [6] [7] + MatrixThree [7] [6]);

Mat3Diag14= (MatrixThree [0] [6] + MatrixThree [1] [7]);
Mat3Diag15= (MatrixThree [0] [5] + MatrixThree [1] [6] + MatrixThree [2] [7] );
Mat3Diag16= (MatrixThree [0] [4] + MatrixThree [1] [5] + MatrixThree [2] [6] + MatrixThree [3] [7]);
Mat3Diag17= (MatrixThree [0] [3] + MatrixThree [1] [4] + MatrixThree [2] [5] + MatrixThree [3] [6] + MatrixThree [4] [7] );
Mat3Diag18= (MatrixThree [0] [2] + MatrixThree [1] [3] + MatrixThree [2] [4] + MatrixThree [3] [5] + MatrixThree [4] [6] + MatrixThree [5] [7] );
Mat3Diag19= (MatrixThree [0] [1] + MatrixThree [1] [2] + MatrixThree [2] [3] + MatrixThree [3] [4] + MatrixThree [4] [5] + MatrixThree [5] [6] + MatrixThree [6] [7] );
Mat3Diag20= (MatrixThree [0] [0] + MatrixThree [1] [1] + MatrixThree [2] [2] + MatrixThree [3] [3] + MatrixThree [4] [4] + MatrixThree [5] [5] + MatrixThree [6] [6] + MatrixThree [7] [7]);
Mat3Diag21= (MatrixThree [1] [0] + MatrixThree [2] [1] + MatrixThree [3] [2] + MatrixThree [4] [3] + MatrixThree [5] [4] + MatrixThree [6] [5] + MatrixThree [7] [6] );
Mat3Diag22= (MatrixThree [2] [0] + MatrixThree [3] [1] + MatrixThree [4] [2] + MatrixThree [5] [3] + MatrixThree [6] [4] + MatrixThree [7] [5]);
Mat3Diag23=(MatrixThree [3] [0] + MatrixThree [4] [1] + MatrixThree [5] [2] + MatrixThree [6] [3] + MatrixThree [7] [4]);
Mat3Diag24=(MatrixThree [4] [0] + MatrixThree [5] [1] + MatrixThree [6] [2] + MatrixThree [7] [3]);
Mat3Diag25=(MatrixThree [5] [0] + MatrixThree [6] [1] + MatrixThree [7] [2]);
Mat3Diag26=(MatrixThree [6] [0] + MatrixThree [7] [1]);

int DiagonalSums3 [26];

DiagonalSums3 [0]=Mat3Diag1;
DiagonalSums3 [1]=Mat3Diag2;
DiagonalSums3 [2]=Mat3Diag3;
DiagonalSums3 [3]=Mat3Diag4;
DiagonalSums3 [4]=Mat3Diag5;
DiagonalSums3 [5]=Mat3Diag6;
DiagonalSums3 [6]=Mat3Diag7;
DiagonalSums3 [7]=Mat3Diag8;
DiagonalSums3 [8]=Mat3Diag9;
DiagonalSums3 [9]=Mat3Diag10;
DiagonalSums3 [10]=Mat3Diag11;
DiagonalSums3 [11]=Mat3Diag12;
DiagonalSums3 [12]=Mat3Diag13;
DiagonalSums3 [13]=Mat3Diag14;
DiagonalSums3 [14]=Mat3Diag15;
DiagonalSums3 [15]=Mat3Diag16;
DiagonalSums3 [16]=Mat3Diag17;
DiagonalSums3 [17]=Mat3Diag18;
DiagonalSums3 [18]=Mat3Diag19;
DiagonalSums3 [19]=Mat3Diag20;
DiagonalSums3 [20]=Mat3Diag21;
DiagonalSums3 [21]=Mat3Diag22;
DiagonalSums3 [22]=Mat3Diag23;
DiagonalSums3 [23]=Mat3Diag24;
DiagonalSums3 [24]=Mat3Diag25; 
DiagonalSums3 [25]=Mat3Diag26;

for (int i=0 ;i<26; i++)
{
	if (DiagonalSums3 [i]==1 | DiagonalSums3 [i]==0)
		{
			checks3++; 
		}
}
//cout<<"value of checks3-final:"<<checks3<<endl;

//Mat 4-
int Mat4Diag1,Mat4Diag2, Mat4Diag3, Mat4Diag4, Mat4Diag5, Mat4Diag6, Mat4Diag7, Mat4Diag8, Mat4Diag9, Mat4Diag10, Mat4Diag11, Mat4Diag12, Mat4Diag13, Mat4Diag14,Mat4Diag15, Mat4Diag16, Mat4Diag17, Mat4Diag18, Mat4Diag19, Mat4Diag20, Mat4Diag21, Mat4Diag22, Mat4Diag23, Mat4Diag24, Mat4Diag25, Mat4Diag26;


Mat4Diag1= (MatrixFour [0] [1] + MatrixFour [1] [0]);
Mat4Diag2= (MatrixFour [0] [2] + MatrixFour [1] [1] + MatrixFour [2] [0] );
Mat4Diag3= (MatrixFour [0] [3] + MatrixFour [1] [2] + MatrixFour [2] [1] + MatrixFour [3] [0]);
Mat4Diag4= (MatrixFour [0] [4] + MatrixFour [1] [3] + MatrixFour [2] [2] + MatrixFour [3] [1] + MatrixFour [4] [0] );
Mat4Diag5= (MatrixFour [0] [5] + MatrixFour [1] [4] + MatrixFour [2] [3] + MatrixFour [3] [2] + MatrixFour [4] [1] + MatrixFour [5] [0] );
Mat4Diag6= (MatrixFour [0] [6] + MatrixFour [1] [5] + MatrixFour [2] [4] + MatrixFour [3] [3] + MatrixFour [4] [2] + MatrixFour [5] [1] + MatrixFour [6] [0] );
Mat4Diag7= (MatrixFour [0] [7] + MatrixFour [1] [6] + MatrixFour [2] [5] + MatrixFour [3] [4] + MatrixFour [4] [3] + MatrixFour [5] [2] + MatrixFour [6] [1] + MatrixFour [7] [0]);
Mat4Diag8= (MatrixFour [1] [7] + MatrixFour [2] [6] + MatrixFour [3] [5] + MatrixFour [4] [4] + MatrixFour [5] [3] + MatrixFour [6] [2] + MatrixFour [7] [1] );
Mat4Diag9= (MatrixFour [2] [7] + MatrixFour [3] [6] + MatrixFour [4] [5] + MatrixFour [5] [4] + MatrixFour [6] [3] + MatrixFour [7] [2]);
Mat4Diag10= (MatrixFour [3] [7] + MatrixFour [4] [6] + MatrixFour [5] [5] + MatrixFour [6] [4] + MatrixFour [7] [3]);
Mat4Diag11= (MatrixFour [4] [7] + MatrixFour [5] [6] + MatrixFour [6] [5] + MatrixFour [7] [4]);
Mat4Diag12= (MatrixFour [5] [7] + MatrixFour [6] [6] + MatrixFour [7] [5]);
Mat4Diag13= (MatrixFour [6] [7] + MatrixFour [7] [6]);

Mat4Diag14= (MatrixFour [0] [6] + MatrixFour [1] [7]);
Mat4Diag15= (MatrixFour [0] [5] + MatrixFour [1] [6] + MatrixFour [2] [7] );
Mat4Diag16= (MatrixFour [0] [4] + MatrixFour [1] [5] + MatrixFour [2] [6] + MatrixFour [3] [7]);
Mat4Diag17= (MatrixFour [0] [3] + MatrixFour [1] [4] + MatrixFour [2] [5] + MatrixFour [3] [6] + MatrixFour [4] [7] );
Mat4Diag18= (MatrixFour [0] [2] + MatrixFour [1] [3] + MatrixFour [2] [4] + MatrixFour [3] [5] + MatrixFour [4] [6] + MatrixFour [5] [7] );
Mat4Diag19= (MatrixFour [0] [1] + MatrixFour [1] [2] + MatrixFour [2] [3] + MatrixFour [3] [4] + MatrixFour [4] [5] + MatrixFour [5] [6] + MatrixFour [6] [7] );
Mat4Diag20= (MatrixFour [0] [0] + MatrixFour [1] [1] + MatrixFour [2] [2] + MatrixFour [3] [3] + MatrixFour [4] [4] + MatrixFour [5] [5] + MatrixFour [6] [6] + MatrixFour [7] [7]);
Mat4Diag21= (MatrixFour [1] [0] + MatrixFour [2] [1] + MatrixFour [3] [2] + MatrixFour [4] [3] + MatrixFour [5] [4] + MatrixFour [6] [5] + MatrixFour [7] [6] );
Mat4Diag22= (MatrixFour [2] [0] + MatrixFour [3] [1] + MatrixFour [4] [2] + MatrixFour [5] [3] + MatrixFour [6] [4] + MatrixFour [7] [5]);
Mat4Diag23=(MatrixFour [3] [0] + MatrixFour [4] [1] + MatrixFour [5] [2] + MatrixFour [6] [3] + MatrixFour [7] [4]);
Mat4Diag24=(MatrixFour [4] [0] + MatrixFour [5] [1] + MatrixFour [6] [2] + MatrixFour [7] [3]);
Mat4Diag25=(MatrixFour [5] [0] + MatrixFour [6] [1] + MatrixFour [7] [2]);
Mat4Diag26=(MatrixFour [6] [0] + MatrixFour [7] [1]);

int DiagonalSums4 [26];

DiagonalSums4 [0]=Mat4Diag1;
DiagonalSums4 [1]=Mat4Diag2;
DiagonalSums4 [2]=Mat4Diag3;
DiagonalSums4 [3]=Mat4Diag4;
DiagonalSums4 [4]=Mat4Diag5;
DiagonalSums4 [5]=Mat4Diag6;
DiagonalSums4 [6]=Mat4Diag7;
DiagonalSums4 [7]=Mat4Diag8;
DiagonalSums4 [8]=Mat4Diag9;
DiagonalSums4 [9]=Mat4Diag10;
DiagonalSums4 [10]=Mat4Diag11;
DiagonalSums4 [11]=Mat4Diag12;
DiagonalSums4 [12]=Mat4Diag13;
DiagonalSums4 [13]=Mat4Diag14;
DiagonalSums4 [14]=Mat4Diag15;
DiagonalSums4 [15]=Mat4Diag16;
DiagonalSums4 [16]=Mat4Diag17;
DiagonalSums4 [17]=Mat4Diag18;
DiagonalSums4 [18]=Mat4Diag19;
DiagonalSums4 [19]=Mat4Diag20;
DiagonalSums4 [20]=Mat4Diag21;
DiagonalSums4 [21]=Mat4Diag22;
DiagonalSums4 [22]=Mat4Diag23;
DiagonalSums4 [23]=Mat4Diag24;
DiagonalSums4 [24]=Mat4Diag25; 
DiagonalSums4 [25]=Mat4Diag26;

for (int i=0 ;i<26; i++)
{
	if (DiagonalSums4 [i]==1 | DiagonalSums4 [i]==0)
		{
			checks4++; 
		}
}
//cout<<"value of checks4-final:"<<checks4<<endl;

//to append files

// making and writing to the ouput file

ofstream output;

output.open("attack.sol");  //creating a file to write to

//mat 1
if(checks1==42)
	{
		output<<EightQueensLine [0]<<" "<<"8 queens solution" <<endl;
	}
else
{
	output<<EightQueensLine [0]<<endl;
}

//mat 2
if(checks2==42)
	{
		output<<EightQueensLine [1]<<" "<<"8 queens solution" <<endl;
	}
else
{
	output<<EightQueensLine [1]<<endl;
}

//mat 3
if(checks3==42)
	{
		output<<EightQueensLine [2]<<" "<<"8 queens solution" <<endl;
	}
else
{
	output<<EightQueensLine [2]<<endl;
}

//mat 4
if(checks4==42)
	{
		output<<EightQueensLine [3]<<" "<<"8 queens solution" <<endl;
	}
else
{
	output<<EightQueensLine [3]<<endl;
}


return 0;
	
}