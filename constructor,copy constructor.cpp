#include<iostream>
#include<string>
using namespace std;

class Employee {
	int id;
	string name;
	int salary;
public:
	Employee(int id, string name, int salary) {
		this->id = id;
		this->name = name;
		this->salary = salary;
	}

	Employee(int id, string name) {
		this->id = id;
		this->name = name;
	}

	void getID() {
		cout << id << endl;
	}

	void getName() {
		cout << name << endl;
	}

	void getSalary() {
		cout << salary << endl;
	}

	Employee(Employee& i) {
		salary = i.salary;
	}
};

int main() {
	Employee e1(1, "Ali", 50000);
	Employee e2(2, "Abdullah");
	e2 = e1;
	e2.getID();
	e2.getName();
	e2.getSalary();
	return 0;
}