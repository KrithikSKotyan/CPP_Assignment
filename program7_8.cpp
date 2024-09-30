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
            cout << "Hi, my name is " << name << " and I am " << age << " years young!" << endl;
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
            cout << "Hello, I'm " << getName() << ". I'm " << getAge() << " years old and pursuing my studies in the " << department << " department." << endl;
        }

    private:
        string department;
};

int main() {
    Person person1("Krithik", 25);
    Student student1("Kotyan", 33, "ECE");

    person1.print_info();
    student1.print_info();

    return 0;
}
