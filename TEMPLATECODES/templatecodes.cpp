/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 001_example.cpp
 *   Title          : First OOP Code
 *   Description    : First Object Oriented Programming code with c++, which will explain how to
 *                    create a object and access the objects.
 *-----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
class Employee
{
private:
	// Members
	int id;
	string name, address;

public:
	// Methods
	void get_data(void)
	{
		cout << "Enter ID No: ";
		cin >> id;
		cout << "Enter Name: ";
		cin >> name;
		cout << "Enter Address: ";
		cin >> address;
	}
	void print_data(void)
	{
		cout << "The ID is: " << id << endl;
		cout << "The Name is: " << name << endl;
		cout << "The Address is: " << address << endl;
	}
};
int main()
{
	Employee emp1;
	emp1.get_data();
	emp1.print_data();
	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 002_example.cpp
 *   Title          : Access Specifiers
 *   Description    : This example shows different types of access specifiers - private,public and 
 *                    protected.
 *                    These define the accessibility of the members outside the class.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class Employee
{
    private:
		int id;
		string name, address;

	public:
		void get_data(void)
		{
			std::cout << "Enter ID No: ";
			std::cin >> id;
			std::cout << "Enter Name: ";
			std::cin >> name;
			std::cout << "Enter Address: ";
			std::cin >> address;
		}
		void print_data(void)
		{
			std::cout << "The ID is: " << id << endl;
			std::cout << "The Name is: " << name << endl;
			std::cout << "The Address is: " << address << endl;
		}
};

int main()
{
	Employee emp1;

	// Private Members
	// cannot be accessed
	emp1.id = 10;
	emp1.name = "Tingu";
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 003_example.cpp
 *   Title          : Access specifiers
 *   Description    : This program explains the public access specifiers and its behavior.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class Employee
{
	private:
		int id;

	public:
		string name, address;

		void get_data(void)
		{
			cout << "Enter ID No: ";
			cin >> id;
			cout << "Enter Name: ";
			cin >> name;
			cout << "Enter Address: ";
			cin >> address;
		}
		
		void print_data(void)
		{
			cout << "The ID is: " << id << endl;
			cout << "The Name is: " << name << endl;
			cout << "The Address is: " << address << endl;
		}
};

int main()
{
	Employee emp1;

	// Allowed
	emp1.name = "John";
	emp1.get_data();

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 004_example.cpp
 *   Title          : structure vs class
 *   Description    : This program demonstrates the difference between structure and class in c++.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

struct sEmployee
{
    int id;
    string name;
    string address;
};

class cEmployee
{
    int id;
    string name;
    string address;
};

int main()
{
    sEmployee emp1;
    cEmployee emp2;

    // Allowed, Since public by
    // default
    emp1.name = "Tingu";
    // Not allowed, Since private
    // by default
    emp2.name = "Pingu";

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 005_example.cpp
 *   Title          : structure vs class
 *   Description    : This program demonstrates the acces specifiers in class and structure.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

struct sEmployee
{
    int id;
private:
    string name;
    string address;
};

class cEmployee
{
    int id;
public:
    string name;
    string address;
};

int main()
{
    sEmployee emp1;
    cEmployee emp2;

    // Allowed, Since declared
    // private
    emp1.name = "Tingu";
    // Allowed, Since declared
    // public
    emp2.name = "Pingu";

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 006_example.cpp
 *   Title          : structure vs class
 *   Description    : This program demonstrates the sizeof operator with class and structure.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

struct sEmployee
{
    int id;
    string name;
    string address;
};

class cEmployee
{
    int id;
    string name;
    string address;
};

int main()
{
    sEmployee emp1;
    cEmployee emp2;

    cout << "sizeof emp1 is " << sizeof(emp1) << endl;
    cout << "sizeof emp2 is " << sizeof(emp2) << endl;

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 007_example.cpp
 *   Title          : Default Constructor
 *   Description    : This program demonstrate the default constructor and how to initialize 
 *                    the object.
 *-----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
	public:
		int id;
		char *name;

		Employee()
		{
			id = 0;
			name =(char *)malloc(sizeof(char)*10);
		}
};

int main()
{
	Employee emp1;

	cout << "The ID is " << emp1.id << endl;
	strcpy(emp1.name, "Tingu");
	cout << "The Name is " << emp1.name << endl;

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 008_example.cpp
 *   Title          : Parameterised Constructor
 *   Description    : This program demonstrate the parameterized constructor and how to initialize 
 *                    the object.
 *-----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
public:
	int id;
	char *name;

	Employee(int x, char *s);
};

Employee::Employee(int x, char *s) 
{
	id = 0;
	name = (char *)malloc(sizeof(char)*10);
	strcpy(name, s);
}

int main()
{
	Employee emp1(10, (char *) "Tingu");

	cout << "The ID is " << emp1.id << endl;
	cout << "The Name is " << emp1.name << endl;

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 009_example.cpp
 *   Title          : Function Overloading
 *   Description    : This program demonstrate the function overloading in cpp.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

// Function Overloading
int add(int n1, int n2)
{
    return n1 + n2;
}

double add(double n1, double n2)
{
    return n1 + n2;
}

string add(string s1, string s2)
{
	// Operator Overloading
    return s1 + s2;
}

int main()
{
    cout << add(5, 10) << endl;
    cout << add(3.5, 6.5) << endl;
	cout << add("Hell", "o") << endl;

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 010_example.cpp
 *   Title          : Destructors
 *   Description    : This program demonstrate the destructor and how to delete object member
 *                    form heap using 
 *-----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    public:
	int id;
	char *name;

	Employee(int i);
	Employee(int i, char *s);
	~Employee(void);
};

Employee::Employee(int i)
{   
    id = i;
}

Employee::Employee(int i, char *s)
{   
    id = i;
    name = (char *)malloc(sizeof(char)*10);
    strcpy(name, s);
}

Employee::~Employee(void)
{
    free(name);
}

int main()
{
    Employee e1(10), e2(11, (char *) "Tingu");

    cout << "ID: " << e1.id << endl;
    cout << "Name: " << e1.name << endl;
    cout << "ID: " << e2.id << endl;
    cout << "Name: " << e2.name << endl;

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 011_example.cpp
 *   Title          : Abstraction with new and delete
 *   Description    : This program demonstrate the second pillar of OOPs "Abstraction". Also 
 *                    constructor and destructor and how to use new and delete keyword in 
 *                    memory management.
 *-----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
	int id;
	char *name;
public:
	Employee(int i, char *s);
	~Employee(void);
	int get_id(void);
	char *get_name(void);
};

int Employee::get_id(void)
{
	return id;
}

char *Employee::get_name(void)
{
	return name;
}

Employee::Employee(int i, char *s)
{   
	id = i;
	name = new char [10]; 
	strcpy(name, s);
}

Employee::~Employee(void)
{ 
	delete name;
}

int main()
{
	Employee e1(10, (char *) "Tingu");

	cout << "ID: " << e1.get_id() << endl;
	cout << "Name: " << e1.get_name() << endl;

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 012_example.cpp
 *   Title          : Encapsulation
 *   Description    : This program demonstrates one of the pillar of OOPs i.e., Encapsulation.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

class Employee
{
	int id;
	public:
	int get_id(void) const {
		return id;
	}
	void set_id(int id) {
		this->id = id;
	}
};

int main()
{
	Employee e;

	e.set_id(10);
	cout << "The ID is " << e.get_id() << endl;

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 013_example.cpp
 *   Title          : Inheritance
 *   Description    : This program demonstrate the third pillar of OOPs i.e, Inheritance.
 *-----------------------------------------------------------------------------------------------

#include "013_example.h"

Candidate::Candidate(int id, string n, string a, string course, int year)
	  :EmertxeMember(id, n, a)
{
	this->course = course;
	this->year = year;
}

Mentor::Mentor(int id, string n, string a, string sub_taught, string rank)
       :EmertxeMember(id, n, a)
{
	this->sub_taught = sub_taught;
	this->rank = rank;
}

void EmertxeMember::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}

void Mentor::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Subject Taught: " << sub_taught << endl;
    cout << "Rank: " << rank << endl;
}

void Candidate::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Course" << course << endl;
    cout << "Year: " << year << endl;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 013_example.h
 *   Title          : Header file - Inheritance
 *   Description    : Header file which includes the defnition of all the class, inheritance, and
 *                    member function prototypes.
 *-----------------------------------------------------------------------------------------------

#define EXAMPLE_013_H
#define EXAMPLE_013_H

#include <iostream>

using namespace std;

class EmertxeMember
{
protected:
   	int id;
	string name;
	string address;
public:
	EmertxeMember(int id, string n, string a)
	{
		this->id = id;
		name = n;
		address = a; 
	}
	void display_profile(void);
	void change_profile(string na);
};

class Candidate : public EmertxeMember
{ 
	// Note have not considered all cases said in the slide
   	string course; 
	int year;
public:
	Candidate(int id, string n, string a, string course, int year);
	void display_profile(void);
};

class Mentor : public EmertxeMember
{ 
	// Note have not considered all cases said in the slide
   	string sub_taught; 
	string rank;
public:
	Mentor(int id, string n, string a, string sub_taught, string rank);
	void display_profile(void);
};*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 014_example.cpp
 *   Title          : Main file - Inheritance
 *   Description    : This program demonstrate the third pillar of OOPs i.e, Inheritance. 
 *                    Inheritance is a process of creating a new class from an existing class.
 *-----------------------------------------------------------------------------------------------

#include "013_example.h"

// Please compile along with emertxe.cpp

int main()
{
    EmertxeMember m1(100, "Ringu", "Mangalore");
    Mentor m2(108, "Tingu", "Mysore", "Linux Systems", "Senior");
    Candidate c1(120, "Pingu", "Bangalore", "ECEP", 2019);

    cout << "m1:-->\n"; m1.display_profile();
    cout << "m2:-->\n"; m2.display_profile();
    cout << "c1:-->\n"; c1.display_profile();

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 015_example.cpp
 *   Title          : Main file - Overriding
 *   Description    : This program demonstrate the function Overriding. 
 *                    Function overriding is a feature that allows us to have a same function in 
 *                    child class which is already present in the parent class.
 *-----------------------------------------------------------------------------------------------

#include "013_example.h"

// Please compile along with 013_example.h

int main()
{
    EmertxeMember *m1 = new EmertxeMember(200, "Tingu", "Mysore");
    EmertxeMember *m2 = new Candidate(300, "Pingu", "Bangalore", "ECEP", 2019);

    cout << "m1:-->\n"; m1->display_profile();
    cout << "m2:-->\n"; m2->display_profile();

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 015_example.cpp
 *   Title          : Main file - Run time polymorphism
 *   Description    : This program demonstrate the run time polymorphism. 
 *                    Defining in a base class a virtual function, with another version in a derived 
 *                    class,signals to the compiler that we don't want static linkage for this function. 
 *                    This sort of operation is referred to as dynamic linkage, or late binding.
 *                    This concepts are mainly used to achieve Runtime Polymorphism.
 *-----------------------------------------------------------------------------------------------

#include "016_example.h"

Candidate::Candidate(int id, string n, string a, string course, int year)
	  :EmertxeMember(id, n, a)
{
	this->course = course;
	this->year = year;
}

Mentor::Mentor(int id, string n, string a, string sub_taught, string rank)
       :EmertxeMember(id, n, a)
{
	this->sub_taught = sub_taught;
	this->rank = rank;
}

void EmertxeMember::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
}

void Mentor::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Subject Taught: " << sub_taught << endl;
    cout << "Rank: " << rank << endl;
}

void Candidate::display_profile(void)
{
    cout << "ID: " << id << endl;
    cout << "Name: " << name << endl;
    cout << "Address: " << address << endl;
    cout << "Course: " << course << endl;
    cout << "Year: " << year << endl;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 013_example.h
 *   Title          : Header file - Run time polymorphism
 *   Description    : Header file which includes the defnition of all the class, inheritance, and
 *                    member function prototypes.
 *-----------------------------------------------------------------------------------------------

#ifndef EXAMPLE_016_H
#define EXAMPLE_016_H

#include <iostream>
#include <cstring>

using namespace std;

class EmertxeMember
{
protected:
   	int id;
	string name;
	string address;
public:
	EmertxeMember(int id, string n, string a)
	{
		this->id = id;
		name = n;
		address = a; 
	}
	void change_profile(string na);
	virtual void display_profile(void);
};

class Candidate : public EmertxeMember
{ 
	// Note have not considered all cases said in the slide
   	string course; 
	int year;
public:
	Candidate(int id, string n, string a, string course, int year);
	void display_profile(void);
};

class Mentor : public EmertxeMember
{ 
	// Note have not considered all cases said in the slide
   	string sub_taught; 
	string rank;
public:
	Mentor(int id, string n, string a, string sub_taught, string rank);
	void display_profile(void);
};

#endif*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 017_example.cpp
 *   Title          : Runtime Polymorphism
 *   Description    : This program demonstrate the runtime polymorphism by using vurtual function.
 *-----------------------------------------------------------------------------------------------

#include "016_example.h"

// Please compile along with 016_example.cpp

int main()
{
    EmertxeMember *m1 = new EmertxeMember(200, "Tingu", "Mysore");
    EmertxeMember *m2 = new Candidate(300, "Pingu", "Bangalore", "ECEP", 2019);

    cout << "m1:-->\n"; m1->display_profile();
    cout << "m2:-->\n"; m2->display_profile();

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 018_example.cpp
 *   Title          : Abstract class
 *   Description    : This program demonstrates the abstract class nad pure virtual function.
 *                    If there is no meaningful definition you could give for the function in the 
 *                    base class. But still you want to include a virtual function in a base class 
 *                    so that it may be redefined in a derived class to suit the objects of that 
 *                    class.
 *                    A class is abstract if it has at least one pure virtual function.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;
//abstract class
class Polygon 
{
	protected:
		int width, height;
		string shape_name;
	public:
		Polygon() { }

		Polygon(int a, int b, string name) : width(a), height(b), shape_name(name) { }

		string get_name(void) {
			return shape_name;
		}

		// A pure virtual functions //
		virtual int get_area(void)=0;

		void print_area(void) {
			cout << "The area of " << this->get_name() << " is " 
								   << this->get_area() << endl;
		}
};

class Rectangle: public Polygon
{
	public:
		Rectangle(int a, int b, string name) : Polygon(a, b, name) { }

		int get_area()
		{ 
			return width * height; 
		}
};

class Triangle: public Polygon
{
	public:
		Triangle(int a, int b, string name) : Polygon(a, b, name) { }

		int get_area()
		{ 
			return width * height / 2;
		}
};

int main()
{
	Rectangle rect (4, 5, "Rectangle");
	Triangle trgl (4, 5, "Triangle");
	Polygon *shapes[] = {&rect, &trgl};

	for (int i = 0; i < 2; i++)
	{
		shapes[i]->print_area();
	}

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 019_example.cpp
 *   Title          : Naming Conflicts
 *   Description    : This program demonstrates the naming conflicts in program where you cannot 
 *                    use same name for variable although datatype is different.
 *-----------------------------------------------------------------------------------------------


#include <iostream>

using namespace std;

int main()
{
    int x = 10;
    cout << x << endl;

    double x = 15.5; // Not allowed to have the same name in a local space!
    cout << x << endl;

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 020_example.cpp
 *   Title          : Abstract class
 *   Description    : This program demonstrates the conflicts between global and local variable 
 *                    when the name is same.             
 *-----------------------------------------------------------------------------------------------


#include <iostream>

using namespace std;

int x = 10;

int main()
{
    double x = 15.5;
    cout << x << endl; // How to get the global x refernce here

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 021_example.cpp
 *   Title          : Namespace
 *   Description    : This program demonstrates how to resolve the naming conflicts by using 
 *                    namespace.
 *                    Namespace is an abstract space that contains a set of names
 *                    Is a declarative region that provides a scope to the identifiers 
 *                    (names of the types, function, variables etc) within it.
 *-----------------------------------------------------------------------------------------------


#include <iostream>

using namespace std;

namespace global
{
	int x = 10;
}

int main()
{
    double x = 15.5;
    cout << global::x << endl; // How to get the global x refernce here

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 022_example.cpp
 *   Title          : Namespace
 *   Description    : This program demonstrates how to resolve the naming conflicts by using 
 *                    namespace.
 *                    Namespace is an abstract space that contains a set of names
 *                    Is a declarative region that provides a scope to the identifiers 
 *                    (names of the types, function, variables etc) within it.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

namespace first
{
	int x = 10;
}

namespace second
{
	double x = 12.120;
}

int main()
{
	double x = 10.5;

	cout << x << endl;
	cout << first::x << endl;
	cout << second::x << endl;

	return 0;
}*/


/*#include <iostream>

using namespace std;

namespace first
{
	int x = 10;
}

namespace second
{
	double x = 12.120;
}

int main()
{
	using namespace second;

	cout << x << endl;

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 024_example.cpp
 *   Title          : Namespace - class
 *   Description    : This program demonstrates how to resolve the naming conflicts by using 
 *                    namespace.
 *                    Namespace is an abstract space that contains a set of names
 *                    Is a declarative region that provides a scope to the identifiers 
 *                    (names of the types, function, variables etc) within it.
 *-----------------------------------------------------------------------------------------------

#include <iostream>

using namespace std;

namespace MySpace
{
	class Employee
	{
		public:
			int id;
			string name;
	};
}

class Employee
{
	public:
		int id;
		string name;
};

int main()
{
	Employee emp1;
	MySpace::Employee emp2;

	emp1.name = "Tingu";
	emp2.name = "Pingu";

	cout << emp1.name << endl;
	cout << emp2.name << endl;

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 025_example.cpp
 *   Title          : Template Function
 *   Description    : This program demonstrates the use of funtion templates.
 *                    Function templates are special functions that can operate with generic types.
 *                    This allows us to create a function template whose functionality can be 
 *                    adapted to more than one type or class without repeating the entire code 
 *                    for each type.               
 *-----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
template <typename T>
T Max(T a, T b)
{
	return b < a ? a : b;
}
int main()
{
	cout << Max(10, 20) << endl;
	cout << Max(33.5, 20.2) << endl;
	cout << Max(3.5, 10.2) << endl;
	cout << Max('A', 'B') << endl;
	cout << Max('Z', 'Y') << endl;
	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 026_example.cpp
 *   Title          : Template Class
 *   Description    : This program demonstrates the use of class templates.
 *                    Class template provides a specification for generating classes based on 
 *                    parameters.
 *                    Class templates are generally used to implement containers.
 *                    A class template is instantiated by passing a given set of types to it 
 *                    as template arguments.              
 *-----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;
template <class T>
class MyTemplate
{
    T element;

public:
    MyTemplate(T arg)
    {
        element = arg;
    }
    T divideBy2()
    {
        return element / 2;
    }
};
int main()
{
    MyTemplate<int> m(10);
    cout <<"division : "<< m.divideBy2() << endl;
    MyTemplate<float> m1(10.50f);
    cout <<"division : "<< m.divideBy2() << endl;
    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 027_example-OperatorOverloading.cpp
 *   Title          : Polymorphism - Unary Operator Overloading
 *   Description    : This program demonstrates the use of operator with Objects.
 *                    Objects are user defined data types, so operator are not designed to use 
 *                    with them directly.
 *                    Operator Overloading is the process of writing your own function to perform
 *                    specific task on objects using opeators.
 *-----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    int id;
    char *name;
    int salary;

public:
    Employee(int i);
    Employee(int i, char *s,int sal);

    void display()
    {
        cout<<"Id: "<<id<<endl<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl;
    }

    //Operator overloading for '-'
    void operator-()
    {
        id*=-1;
    }

    //Operator overloading for pre increment '++'
    void operator++()
    {
        salary+=1000;
    }

    //Operator overloading for post increment '++'
    void operator++(int)
    {
        salary+=1000;
    }
};

Employee::Employee(int i)
{
    id = i;
}

Employee::Employee(int i, char *s, int sal)
{
    id = i;
    name = (char *)malloc(sizeof(char) * 10);
    strcpy(name, s);
    salary = sal;
}

int main()
{
    Employee e1(10), e2(11, (char *)"John", 10000);
    //before '-' operator overloading e1 values - observe the id value
    e1.display();
    -e1;
    //After '-' operator overloading e1 values - observe the id value
    e1.display();

    //before pre increment operator overloading e2 values - observe the salary
    e2.display();
    ++e2;
    //After pre increment operator overloading e2 values - observe the salary value
    e2.display();

    //before post increment operator overloading e2 values - observe the salary
    e2.display();
    e2++;
    //After post increment operator overloading e2 values - observe the salary value
    e2.display();
    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 028_example-OperatorOverloading-2.cpp
 *   Title          : Polymorphism - Binary Operator Overloading
 *   Description    : This program demonstrates the use of operator with Objects.
 *                    Objects are user defined data types, so operator are not designed to use 
 *                    with them directly.
 *                    Operator Overloading is the process of writing your own function to perform
 *                    specific task on objects using opeators.
 *-----------------------------------------------------------------------------------------------

#include <iostream>
#include <cstring>

using namespace std;

class Employee
{
    int id;
    char *name;
    int salary;

public:
    Employee(int i);
    Employee(int i, char *s, int sal);

    void display()
    {
        cout<<"Id: "<<id<<endl<<"Name: "<<name<<endl<<"Salary: "<<salary<<endl;
    }

    //Operator overloading for pre increment '++'
    void operator+(float hike)
    {
        salary=salary + (salary * (hike/100));
    }

    //Operator overloading for pre increment '++'
    void operator+(Employee emp)
    {
        salary= salary + emp.salary;
    }
};

Employee::Employee(int i)
{
    id = i;
}

Employee::Employee(int i, char *s, int sal)
{
    id = i;
    name = (char *)malloc(sizeof(char) * 10);
    strcpy(name, s);
    salary = sal;
}

int main()
{
    Employee e1(11, (char *)"John", 10000),e2(12,(char *)"Alex",10000);
    float hike =  10;
    //before '+' operator overloading e1 values - observe the salary
    e1.display();
    e1+hike;
    //After hiking the salary - observe the salary value
    e1.display();

    //before adding salary of another object
    e1.display();
    e2.display();
    //can also add two objects
    e1+e2;
    //After adding
    e1.display();
    e2.display();
    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 029_example-STL-string-1.cpp
 *   Title          : Standard Template Library - String - 1
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Strings are objects that represent sequences of characters.

                      The standard string class provides support for such objects with an 
					  interface similar to that of a standard container of bytes, but adding 
					  features specifically designed to operate with strings of single-byte 
					  characters. 
 *-----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
	// String creation and initialization in a different way
	string s0;				   // s0=""
	string s1 = "Hello World"; //s1="Hello World"
	string s2(s1);
	string s3(s1, 1, 3);	   //s3="ell"
	string s4(5, '*');		  //s4="*****"
	string s5(s1.begin(), s1.begin() + 3); // s5="Hel"
	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 030_example-STL-string-2.cpp
 *   Title          : Standard Template Library - String - Comparison
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Strings are objects that represent sequences of characters.

                      The standard string class provides support for such objects with an 
					  interface similar to that of a standard container of bytes, but adding 
					  features specifically designed to operate with strings of single-byte 
					  characters. 

					  compare() -- string compare method will compare 2 string and returns 0,
					               if the strings are equal.
 *-----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
	string s, s1;
	s = "HELLO";
	s1 = "HELLO";

	if(s.compare(s1) == 0)
		cout<<s<<" is equal to "<<s1<<endl;
	else
		cout<<s<<" is not equal to "<<s1<<endl;
	
	s.append(" WORLD");
	cout<<s<<endl;

	if(s.compare(s1) == 0)
		cout<<s<<" is equal to "<<s1<<endl;
	else
		cout<<s<<" is not equal to "<<s1<<endl;

	return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 030_example-STL-string-2.cpp
 *   Title          : Standard Template Library - String - Operation
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Strings are objects that represent sequences of characters.

                      The standard string class provides support for such objects with an 
					  interface similar to that of a standard container of bytes, but adding 
					  features specifically designed to operate with strings of single-byte 
					  characters. 

					   getline() - This function is used to store a stream of characters as entered
                                    by the user in the object memory.
                       push_back() - This function is used to input a character at the end of the 
                                      string.
                       pop_back() - Introduced from C++11(for strings), this function is used to 
                                     delete the last character from the string.
                       length():-This function finds the length of the string
 *-----------------------------------------------------------------------------------------------

#include <iostream>
using namespace std;

int main()
{
    // Declare a empty string str
    string str;

    cout<<"Enter the string value: ";
    // Taking string input using getline() function
    getline(cin, str);

    // Displaying the string
    cout << "The initial string is : ";
    cout << str << endl;

    // Using push_back() to insert a character
    str.push_back('e');

    // Displaying the string
    cout << "The string after push_back operation is : ";
    cout << str << endl;

    // Using pop_back() to delete a character
    str.pop_back();

    // Displaying the string
    cout << "The string after pop_back operation is : ";
    cout << str << endl;

    //Displaying length of the string
    cout<<"The length of the string is :"<<str.length()<<endl;
    
    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 032_example-STL-Vector-1.cpp
 *   Title          : Standard Template Library - Vector - Creation and display
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Vectors are same as dynamic arrays with the ability to resize itself 
                      automatically when an element is inserted or deleted, with their storage 
                      being handled automatically by the container.

                      begin() – Returns an iterator pointing to the first element in the vector
                      end() – Returns an iterator pointing to the theoretical element that 
                              follows the last element in the vector.
                      size() – Returns the number of elements in the vector.
 *-----------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Declaring vector
    vector<int> v;                        // empty vector of ints
    vector<int> v1(5, 10);                // five ints with value 10
    vector<int> v2(v1.begin(), v2.end()); // iterating through second vector
    vector<int> v3(v2);                   //copy of v2

    //Display all the vectors
    for (int i = 0; i < v.size(); i++)
        cout << v[i] << endl;

    for (int i = 0; i < v1.size(); i++)
        cout << v1[i] << endl;

    for (int i = 0; i < v2.size(); i++)
        cout << v2[i] << endl;

    for (int i = 0; i < v3.size(); i++)
        cout << v3[i] << endl;

    return 0;
}*/


/*------------------------------------------------------------------------------------------------- 
 *   Author         : Emertxe (https://emertxe.com) 
 *   Date           : Wed 08 Mar 2016 16:00:04 IST
 *   File           : 033_example-STL-Vector-2.cpp
 *   Title          : Standard Template Library - Vector - Operation
 *   Description    : This program demonstrates the STL string library.
 *                    The Standard Template Library (STL) is a set of C++ template classes to 
                      provide common programming data structures and functions such as lists, 
					  stacks, arrays, etc.
					  
					  Vectors are same as dynamic arrays with the ability to resize itself 
                      automatically when an element is inserted or deleted, with their storage 
                      being handled automatically by the container.

                      push_back() – It push the elements into a vector from the back
                      pop_back() – It is used to pop or remove elements from a vector from the back.
                      at(i) – Returns a reference to the element at position 'i' in the vector
                      front() – Returns a reference to the first element in the vector
                      back() – Returns a reference to the last element in the vector
                      erase() – It is used to remove elements from a container from the 
                                specified position or range.
                      swap() – It is used to swap the contents of one vector with another vector 
                               of same type. Size may differ.
 *-----------------------------------------------------------------------------------------------

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    // Create a integer vector
    vector<int> vec1;

    //vectors to perform swap
    vector<int> vec2,vec3;

    // fill the array with 10, 8 times
    vec1.assign(8, 10);

    //display vector
    cout << "The vector elements are: ";
    for (int i = 0; i < vec1.size(); i++)
        cout << vec1[i] << " ";

    // inserts 15 to the last position
    vec1.push_back(15);
    int n = vec1.size();
    cout << "\nThe last element is: " << vec1[n - 1];

    // removes last element
    vec1.pop_back();

    // prints the vector
    cout << "\nThe vector elements are: ";
    for (int i = 0; i < vec1.size(); i++)
        cout << vec1[i] << " ";

    // inserts 5 at the beginning
    vec1.insert(vec1.begin(), 5);

    cout << "\nThe first element is: " << vec1[0];

    // removes the first element
    vec1.erase(vec1.begin());

    cout << "\nThe first element is: " << vec1[0];

    //swap the vec2 with vec3
    vec2.push_back(1);
    vec2.push_back(2);
    vec3.push_back(3);
    vec3.push_back(4);
  
    //display both the vector before swap
    cout << "\n\nVector 1: ";
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < vec3.size(); i++)
        cout << vec3[i] << " ";

    //swap
    vec2.swap(vec3);

    //display both the vector after swap
    cout << "\n\nVector 1: ";
    for (int i = 0; i < vec2.size(); i++)
        cout << vec2[i] << " ";
  
    cout << "\nVector 2: ";
    for (int i = 0; i < vec3.size(); i++)
        cout << vec3[i] << " ";

    return 0;
}*/

























