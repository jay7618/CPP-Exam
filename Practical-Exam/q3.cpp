#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Shape {
    protected:
        string color;
        double area;
    public:
        void setColor(string color) {
            this->color = color;
        }
        string getcolor() {
            return color;
        }
        virtual double areaCalculation() = 0;
};

class Circle : public Shape{
    protected:
        double radious;
        const int pie = 3.14;
    public:
        void setRadious(double radious) {
            this->radious = radious;
        };
        double areaCalculation() {
            return pie*radious*radious;
        }

};

int main () {

    Shape* ptr;
    int choice;

    do {
        cout << "Press 1 For Add Circle !!" << endl;
        cout << "Press 2 For Add Rectangle !!" << endl;
        cout << "Press 3 For Calculation !!" << endl;
        cout << "Press 4 For Display !!" << endl;
        cout << "Press 0 For Exit !!" << endl;

        switch(choice) {
            case 1: {
                string color;
                double radious;

                cout << "Enter Circle Color : ";
                getline(cin,color);
                cout << "Enter Circle Radious : ";
                cin >> radious;

                ptr->setColor(color);
                ptr.

                break;
            }
            case 2: {
                break;
            }
            case 3: {
                break;
            }
            case 4: {
                break;
            }
            case 0: {
                break;
            }
        }

    } while (choice != 0);

    return 0;
}