#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Employee {
    private:
        string name;
        double salary;
        string designation;
    public:
        void setData(string name, double salary, string desig) {
            this->name = name;
            this->salary =salary;
            this->designation = desig;
        }
        void getData() {
            cout << "------------------------------------" << endl;
            cout << "Employee Name : " << this->name << endl;
            cout << "Employee Salary : " << this->salary << endl;
            cout << "Employee Designation : " << this->designation << endl;
            cout << "------------------------------------" << endl;
        }
};

int main () {

    string name,desi;
    double salary;
    Employee managment;

    cout << "------------------------------------" << endl;
    cout << "Enter Employee Name : ";
    getline(cin,name);    
    cout << "Enter Employee Salary : ";
    cin >> salary;
    cin.ignore();
    cout << "Enter Employee Designation : ";
    getline(cin,desi);    

    managment.setData(name,salary,desi);

    managment.getData();

    return 0;
}