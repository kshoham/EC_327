#include <iostream>

using namespace std;

class MyString
{

public:
	MyString();
	MyString(char *,int);
	//~MyString();
	void printString();
	void printString();
private:
	char c[SIZE];


};


MyString::MyString(char *s, int size){

for (int i = 0; i < size; ++i)
{
	c[i]=s[i];
}

//char c[SIZE];



}
MyString::MyString(){

//char c[SIZE];
c[0]='\0';


}

int main() {

MyString m;
MyString m1("test string",12);


m.printString();


return 0;
}