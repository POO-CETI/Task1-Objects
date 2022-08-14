#include <iostream>
#include "Persona.h"

using namespace std;

int main()
{
   /*Persona persona1;
   persona1.setName("Luis Manuel");
   persona1.setFirstName("Rios");
   persona1.setAge(20);

   persona1.toString();*/
	Persona persona1 = Persona("Luis Manuel", "Torres", 20);
	persona1.toString();

	Persona persona2 = Persona("Luis", "Rios", 20);
	persona2.toString();

	Persona persona3 = Persona("Maria", "Guadalupe", 19);
	persona3.toString();

	Persona persona4 = Persona("Banana", "Split", 20);
	persona4.toString();

	Persona persona5 = Persona("Michel", "Rios", 19);
	persona5.toString();
}