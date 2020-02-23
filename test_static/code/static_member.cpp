#include <iostream>
using namespace std;


class Student
{
public:
	Student(const char* name, const char* id, int score);
	void show();
private:
	static int num_passed;
	static int max_score;
	const char* name;
	const char* id;
	int score;
};
int Student::num_passed = 0;
int Student::max_score = 0;
Student::Student(const char* name, const char* id, int score) :name(name), id(id), score(score)
{
	if (score >= 60)
	{
		num_passed++;
	}
	if (score > max_score)
	{
		max_score = score;
	}
}
void Student::show()
{
	cout << "name: " << name << " id: " << id << " score: " << score 
		<< " ( " << num_passed << " students pass the exam. The max score is " << max_score << " .) " << endl;
}
int main()
{
	Student("a", "101", 80).show();
	Student("b", "102", 60).show();
	Student("c", "103", 57).show();
	Student("d", "104", 97).show();
}