/*
	Tylor C.
	Intro to C++ (Intermediate)
	Summary: Introduction to OOP Programming skills starting with classes and objects,
	constructors and destructors, the this pointer, 
	
*/
#include <iostream> //(1.2)
#include <cmath>	//(1.2)
#include <string>	//(1.3)
using namespace std;

//CH. 1.2: Defining Classes & Objects
/*
class Circle {
public:
	double radius;

	double area() const {
		return 3.14159 * radius * radius;
	}
	double circumference() const {
		return 2 * 3.14159 * radius;
	}
	void print() const {
		cout << "Circle: radius = " << radius
			<< ", Area = " << area()
			<< "Circumference = " << circumference() << '\n';
	}

};


int main() {
	Circle c;
	c.radius = 2.5;
	c.print();
	return 0;
}
*/

//CH 1.3 Access Specifiers & Encapsulation
/*
	Visual:
	Class: Student
	Attributes:
		- name: string
		- age: int
	Methods:
		+ setName(n: string): void
		+ setAge(a: int): void
		+ getName(): string
		+ getAge(): int
		+ print(): void
*/
/*
class Student {
private:
	string name;
	int age;

public:
	//Setting w/ validation
	void setName(string n) {
		if (!n.empty()) name = n;
		else cout << "Invalid name\n";
	}
	void setAge(int a) {
		if (a >= 0 && a <= 120) age = a;
		else cout << "Invalid Age\n";
	}
	//Getters
	string getName() const { return name; }
	int getAge() const { return age; }

	void print() const {
		cout << "Student: " << name << ", Age: " << age << "\n";
	}
};

int main() {
	Student s;
	s.setName("Alice");
	s.setAge(20);
	s.print();
	s.setAge(-5); //Returns error
	return 0;
}
*/

/*
	Modified Circle Class from 1.2
*/
/*
class Circle {
private:
	double radius;

public:
	void setRadius(double r) {
		if (r > 0) radius = r;
		else cout << "Invalid radius...\n";
	}
	double getRadius() const { return radius; }

	double area() const {
		return 3.14159 * radius * radius;
	}
	double circumference() const {
		return 2 * 3.14159 * radius;
	}
	void print() const {
		cout << "Circle: radius = " << radius
			<< ", Area = " << area()
			<< ", Circumference = " << circumference() << '\n';
	}

};


int main() {
	Circle c;
	c.setRadius(2.5);
	c.print();
	c.setRadius(-1); //Prints Error message
	cout << "Radius: " << c.getRadius() << "\n";
	return 0;
}
*/

/*
	CHAPTER 1 TEST solution,
*/
/*
#include <iostream>
#include <string>

class Book {
private:
	std::string title;
	int pages;

public:
	void setTitle(std::string t) {
		if (!t.empty()) title = t;
		else std::cout << "Invalid title\n";
	}

	void setPages(int p) {
		if (p > 0) pages = p;
		else std::cout << "Invalid pages\n";
	}

	std::string getTitle() const { return title; }
	int getPages() const { return pages; }

	void print() const {
		std::cout << "Book: " << title << ", Pages: " << pages << '\n';
	}
};

int main() {
	Book b;
	b.setTitle("C++ Guide");
	b.setPages(300);
	b.print();
	b.setPages(-50); // Prints "Invalid pages"
	return 0;
}
*/

