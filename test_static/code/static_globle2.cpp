#include <iostream>
#include <exception>
using namespace std;



int main()
{
	//extern int globle_static;
	//cout << "In static_globle2.cpp, globle_static: " << globle_static << endl;
	extern int globle;
	cout << "In static_globle2.cpp, globle: " << globle << endl;
	return 0;
}