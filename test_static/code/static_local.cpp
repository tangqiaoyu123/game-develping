#include <iostream>

using namespace std;

void consume_tree()
{
	static int times = 3;
	if (times > 0)
	{
		times--;
		cout << "You consume a tree and gain 7 health regeneration for 16 seconds. " << times << " times left. " << endl;
	} 
	else
	{
		cout << "You have no times. " << endl;
	}
}

int main()
{
	consume_tree();
	consume_tree();
	consume_tree();
	consume_tree();
}