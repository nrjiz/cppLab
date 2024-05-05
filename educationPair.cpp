

#include <iostream>
#include <string>

using namespace std;

template<typename T1, typename T2>
class EducationPair {
private:
	T1 name;
	T2 gpa;
public:
	EducationPair(T1 _name,T2 _gpa ):name(_name),gpa(_gpa){}

	friend ostream& operator<<(ostream& out, EducationPair& ed){
		out<<"name is : "<<ed.name<<"\n";
		out<<"gpa is : "<<ed.gpa<<"\n";
		return out;
	}

	bool operator!=( EducationPair& other)  {
		return (name != other.name || gpa != other.gpa);
	}

};
int main() {



	EducationPair<string, double> student1("John Doe", 3.8);
	EducationPair<string, double> student2("Jane Smith", 3.9);

	cout << "Student 1: " << student1 << endl;
	cout << "Student 2: " << student2 << endl;

	if (student1!=student2){
		cout<<"go to hell";
	}






}
