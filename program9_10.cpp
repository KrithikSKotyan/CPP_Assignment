#include <iostream>
#include <string>
using namespace std;

class Person {
    public:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        void print_info() {
            cout << "Hi, I'm " << name << " and I'm " << age << " years old." << endl;
        }

    public:
        string name;
        int age;
};

class Student : public Person {
    public:
        Student(string name, int age, string department) : Person(name, age) {
            this->department = department;
        }

        void print_info() {
            cout << "Hello, I'm " << getName() << ", a " << getAge() << "-year-old student in the " << department << " department." << endl;
        }

    private:
        string department;
};

class Teacher : public Person {
    public:
        Teacher(string name, int age, int salary) : Person(name, age) {
            this->salary = salary;
        }

        void print_info() {
            cout << "Hi, I'm " << name << ", " << age << " years old, and I earn a salary of " << salary << " dollars." << endl;
        }

    private:
        int salary;
};

int main() {
    Person person1("Krithik", 25);
    Student student1("Kotyan", 21, "ECE");
    Teacher teacher1("Bob", 56, 10000);

    person1.print_info();
    student1.print_info();
    teacher1.print_info();

    return 0;
}
