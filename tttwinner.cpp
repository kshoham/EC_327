#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
  char str[45]={"tictactoeboards.txt"};
  char TicTacToeLine [9] ;
  
  int xes=0;
  int oos=0;
  int spaces=0;
  int count=0;


  std::ifstream is(str);     // open file

  while (is.good())          // loop while extraction from file is possible
  {
    char c = is.get();       // get character from file
    if (is.good())
      //std::cout << c<<endl;

  	if(c=='x') 				//check if character is an x
  	{
  		xes++;
  	}
  	if (c=='o')				// check if character is an o
  	{
  		oos++;
  	}
  	if (c=='#')				//check if character is a space
  	{
  		spaces++;
  	}
  	TicTacToeLine[count]=c;   //save character into an array to test in the future
  	count++;
  }

  is.close();                // close file

// converting x's,o's, and #'s, to 1,-1 and 0

int TicTacToeNumbers [9]={0};

for (int i=0;i<10;i++)
{
	if (TicTacToeLine [i]=='x')
	{
		TicTacToeNumbers [i]=1;
	}
	if (TicTacToeLine [i]=='o')
	{
		TicTacToeNumbers [i]=-1;
	}
	
}


//Summing all rows, columns, and diagonals

int Sums[8];

Sums [0]= TicTacToeNumbers [0] + TicTacToeNumbers [1] + TicTacToeNumbers [2];
Sums [1]= TicTacToeNumbers [3] + TicTacToeNumbers [4] + TicTacToeNumbers [5];
Sums [2]= TicTacToeNumbers [6] + TicTacToeNumbers [7] + TicTacToeNumbers [8];

Sums [3]= TicTacToeNumbers [0] + TicTacToeNumbers [3] + TicTacToeNumbers [6];
Sums [4]= TicTacToeNumbers [1] + TicTacToeNumbers [4] + TicTacToeNumbers [7];
Sums [5]= TicTacToeNumbers [2] + TicTacToeNumbers [5] + TicTacToeNumbers [8];

Sums [6]= TicTacToeNumbers [0] + TicTacToeNumbers [4] + TicTacToeNumbers [8];
Sums [7]= TicTacToeNumbers [2] + TicTacToeNumbers [4] + TicTacToeNumbers [6];


// making and writing to the ouput file

ofstream output;

output.open("tttstatus.txt");  //creating a file to write to

//testing for an invalid board based on values of x's and o's

if(xes>5)
{
	output<< TicTacToeLine [0]<< TicTacToeLine [1] << TicTacToeLine [2] << TicTacToeLine [3] << TicTacToeLine [4] << TicTacToeLine [5] << TicTacToeLine [6] << TicTacToeLine [7] << TicTacToeLine [8] << " " << "i"<<endl;
	return 0;
}

if(oos>4)
{
	output<< TicTacToeLine [0]<< TicTacToeLine [1] << TicTacToeLine [2] << TicTacToeLine [3] << TicTacToeLine [4] << TicTacToeLine [5] << TicTacToeLine [6] << TicTacToeLine [7] << TicTacToeLine [8] << " " << "i"<<endl;
	return 0;

}

if(xes<oos)
{
	output<< TicTacToeLine [0]<< TicTacToeLine [1] << TicTacToeLine [2] << TicTacToeLine [3] << TicTacToeLine [4] << TicTacToeLine [5] << TicTacToeLine [6] << TicTacToeLine [7] << TicTacToeLine [8] << " " << "i"<<endl;
	return 0;
}

if (xes>(oos+1))
{
	output<< TicTacToeLine [0]<< TicTacToeLine [1] << TicTacToeLine [2] << TicTacToeLine [3] << TicTacToeLine [4] << TicTacToeLine [5] << TicTacToeLine [6] << TicTacToeLine [7] << TicTacToeLine [8] << " " << "i"<<endl;
	return 0;
}


int d=0;

for (int i=0; i<9;i++)
{
	if (xes==oos && Sums[i]== -3)
	{
		d++;
	}
	if (xes==oos && Sums[i]== 3)
	{
		d++;
	}
}

if (d==2)
{
	output<< TicTacToeLine [0]<< TicTacToeLine [1] << TicTacToeLine [2] << TicTacToeLine [3] << TicTacToeLine [4] << TicTacToeLine [5] << TicTacToeLine [6] << TicTacToeLine [7] << TicTacToeLine [8] << " " << "i"<<endl;
	return 0;
}


// to test for a tie game

int k=0;

for (int i=0;i<8;i++)
{
	if (Sums[i] != 3 && Sums[i] != -3)
	{
		k++;
	}
}


if (xes==5 && oos==4 && k==8)
{
	output<< TicTacToeLine [0]<< TicTacToeLine [1] << TicTacToeLine [2] << TicTacToeLine [3] << TicTacToeLine [4] << TicTacToeLine [5] << TicTacToeLine [6] << TicTacToeLine [7] << TicTacToeLine [8] << " " << "t"<<endl;
	return 0;
}

// to test if x won 

for (int i=0;i<8; i++)
{
	if (xes==(oos+1) && Sums[i]==3)
	{
		output<< TicTacToeLine [0]<< TicTacToeLine [1] << TicTacToeLine [2] << TicTacToeLine [3] << TicTacToeLine [4] << TicTacToeLine [5] << TicTacToeLine [6] << TicTacToeLine [7] << TicTacToeLine [8] << " " << "x"<<endl;
		return 0;
	}
}

// to test if o won 

for (int i=0;i<8; i++)
{
	if (xes==oos && Sums[i]== -3)
	{
		output<< TicTacToeLine [0]<< TicTacToeLine [1] << TicTacToeLine [2] << TicTacToeLine [3] << TicTacToeLine [4] << TicTacToeLine [5] << TicTacToeLine [6] << TicTacToeLine [7] << TicTacToeLine [8] << " " << "o"<<endl;
		return 0;
	}
}

//to test if game should continue

for (int i=0;i<8; i++)
{
	if ((xes==oos || xes==(oos+1)) && Sums[i] != 3 && Sums[i] != -3)
	{
		output<< TicTacToeLine [0]<< TicTacToeLine [1] << TicTacToeLine [2] << TicTacToeLine [3] << TicTacToeLine [4] << TicTacToeLine [5] << TicTacToeLine [6] << TicTacToeLine [7] << TicTacToeLine [8] << " " << "c"<<endl;
		return 0;
	}
}



return 0;
	
}