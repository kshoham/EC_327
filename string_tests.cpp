//string_tests.cpp

#include <iostream>
#include <string>

using namespace std;

int main() {
	string j; 

    //three methods for reading in a file
    
	cin >> j; //takes all non white space characters and put it into j
    cout << "from cin:" <<"\" " << j << "\" "<<endl; //stores the first character 
    cout<< j.size()<< endl;

    getline(cin,j); //add another comma with what you want it to stop on //reads from cin until it finds a new line character
    cout << "from getline(cin,j): " << j << endl;
    cout << "j.empty(): x" << j.empty() << endl;
    
    
    char g[50];
    cin.getline(g,50); // need to give getline a length
    cout << "from cin.getline(g,50): " << g << endl; // method of cin that uses standard strings, stops after 50 characters

	return 0;
}