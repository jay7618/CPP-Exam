#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Animal {
    protected:
        string name;
        int age;
    public:
        Animal() {}
        Animal(string name, int age) {
            this->name = name;
            this->age = age;
        }
        virtual void sound() {}
        virtual void move() {}

};

class Dog : public Animal {
    public:
        void sound() {
            cout << "Barking.........." << endl;
        }
        void move() {
            cout << "Walking.........." << endl;
        }
        Dog(string name, int age) : Animal(name,age) {
            sound();
            move();
        }
};

class Bird : public Animal {
    public:
        void sound() {
            cout << "Speaking.........." << endl;
        }
        void move() {
            cout << "Flying.........." << endl;
        }
        Bird(string name, int age) : Animal(name,age) {
            sound();
            move();
        }
};

int main () {

    vector <Animal*> animal;

    animal.push_back(name,age)

    

    return 0;
}