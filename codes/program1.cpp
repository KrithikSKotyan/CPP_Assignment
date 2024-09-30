#include <iostream>
#include <string>
using namespace std;

class Individual {
    public:
        Individual(string personName, int personAge) {
            this->personName = personName;
            this->personAge = personAge;
        }

        string getPersonName() {
            return personName;
        }

        int getPersonAge() {
            return personAge;
        }

        void display_info() {
            cout << "Hello! My name is " << personName << ", and I am " << personAge << " years old." << endl;
        }

    private:
        string personName;
        int personAge;
};

int main() {
    Individual person1("Krithik", 21);
    person1.display_info();

    return 0;
}
