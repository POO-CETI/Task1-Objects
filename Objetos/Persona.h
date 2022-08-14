#include <iostream>
#include <string>

using namespace std;


class Persona
{
private:
	string _name;
	string _firstName;
	int _age = 0;

public:
	Persona() {
		cout << "Bienvenido\n";
	}

	Persona(string name, string fistName, int age) {
		this->_name = name;
		this->_firstName = fistName;
		this->_age = age;
	}

	string getName() {
		return this->_name;
	}

	string getFirstName() {
		return this->_firstName;
	}

	int getAge() {
		return this->_age;
	}

	void setName(string name) {
		this->_name = name;
	}

	void setFirstName(string firstName) {
		this->_firstName = firstName;
	}

	void setAge(int age) {
		this->_age = age;
	}

	void toString() {
		cout << "Nombre: " << _name << "\n";
		cout << "Apellido: " << _firstName << "\n";
		cout << "Edad: " << _age << "\n";
	}
};
