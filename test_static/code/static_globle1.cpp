#include <iostream>

using namespace std;

int globle = 10;
static int static_globle = 15;

int main()
{
	cout << "globle: " << globle << endl;
	cout << "static globle: " << static_globle << endl;
	return 0;
}
