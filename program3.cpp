#include <iostream>
#include <string>
using namespace std;

class Person {
    private:
        Person(string name, int age) {
            this->name = name;
            this->age = age;
        }

    public:
        static Person createPerson(string name, int age) {
            return Person(name, age);
        }

        string getName() {
            return name;
        }

        int getAge() {
            return age;
        }

        void print_info() {
            cout << "I am " << name << " and I am " << age << " years old." << endl;
        }

    private:
        string name;
        int age;
};

int main() {
    Person person1 = Person::createPerson("Krithik", 21);

    person1.print_info();

    return 0;
}
