#include <iostream>
#include <vector>
#include <string>
using namespace std;

// Structure for a person
struct Person {
    string name;
    int age;
};

int main() {
    vector<Person> people; // Storage for people
    int count;

    cout << "Enter the number of people: ";
    cin >> count;

    for (int i = 0; i < count; i++) {
        Person person;
        cout << "Enter the name of person " << i + 1 << ": ";
        cin >> person.name;
        cout << "Enter the age of " << person.name << ": ";
        cin >> person.age;

        people.push_back(person); // Add person to the list
    }

    cout << "\nList of people:\n";
    for (const auto& person : people) {
        cout << "Name: " << person.name << ", Age: " << person.age << " years\n";
    }

    return 0;
}