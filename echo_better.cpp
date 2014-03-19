//string_tests.cpp

#include <iostream>
#include <string>

using namespace std;

int main() {
    string j;

    while(!cin.eof()) {
       // if (cin>>j) {
            cout<< "Echo:" << j << endl;

            cout<< "F"<< cin.fail()<<endl;
            cout<"G"<<cin.good()<<endl;
            cout<<"B"<<cin.bad()<<endl;
        

//        }
        
        }

	return 0;
}

// returns the last thing you typed twice, because j is still equal to what you had in it last. 