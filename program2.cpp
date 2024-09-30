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
            cout << "Hello! My name is " << name << ". I am " << age << " years old " << endl;
        }

    public:
        string name;
        int age;
};

int main() {
    Person person1("Krithik", 19);
    Person person2("Kotyan", 14);
    person1.print_info();
    person2.print_info();

    return 0;
}

