#include <iostream>
#include <string>

using namespace std;

class Employee {
    protected:
        int employeeID;
        string name;
        string department;
        bool isAssigned;
    public:
        void addEmployee(int id, string eName, string dpt) {
            this->employeeID = id;
            this->name = eName;
            this->department = dpt;
        }
        void viewEmployeeDetails() {
            cout << "Employee ID : " << this->employeeID << endl;
            cout << "Employee Name : " << this->name << endl;
            cout << "Department : " << this->department << endl;
            cout << "Status : " << (this->isAssigned == false ? "Free" : "Assigned") << endl;
            cout << "------------------------------------" << endl;
        }
};

class AssignedEmployee : public Employee {
    protected:
        string taskName;
        string assignedDate;
        int assignedTaskID;
    public:
        void assignTask(string tname, string assDate) {
            this->taskName = tname;
            this->assignedDate = assDate;
        }
        int returnEmplyeeID() {
            return employeeID;
        }
        bool isAssgnedTask () {
            this->isAssigned = true;
        }
        int setAssignedTaskID (int eId) {
            this->assignedTaskID = eId;
        }
        void removeTask() {
            this->isAssigned = false;
        }
        int getAssignedTaskID () {
            return assignedTaskID;
        }
};

int main () {

    AssignedEmployee sys[500];

    int choice,idx = 0;

    do {
        cout << "------------------------------------" << endl;
        cout << "Enter 1 For Add a New Employee : " << endl;
        cout << "Enter 2 For Assign Task : " << endl;
        cout << "Enter 3 For Remove Task : " << endl;
        cout << "Enter 4 For View Employee Status : " << endl;
        cout << "Enter 0 For Exit : " << endl;
        cout << "------------------------------------" << endl;
        cout << "Enter Your Choice : ";
        cin >> choice;
        cout << "------------------------------------" << endl;
        
        switch(choice) {
            case 1: {
                int id;
                string name,dpt;
                cout << "Enter Employee ID : ";
                cin >> id;
                cin.ignore();
                cout << "Enter Employee Name : ";
                getline(cin,name);
                cout << "Enter Department Name : ";
                getline(cin,dpt);
                
                sys[idx++].addEmployee(id,name,dpt);
                
                break;
            }
            case 2: {
                int eID;
                bool flag = false;
                string tName,assDate;
                cout << "Enetr Employee ID Do You Want To Assign Task : ";
                cin >> eID;
                cin.ignore();
                for(int i = 0;i < idx; i++) {
                    if(sys[i].returnEmplyeeID() == eID) {
                        cout << "Enter Task Name : ";
                        getline(cin,tName);
                        cout << "Enter Date : ";
                        getline(cin,assDate);
                        
                        sys[i].assignTask(tName,assDate);
                        sys[i].isAssgnedTask();
                        sys[i].setAssignedTaskID(eID);
                        cout << "Task Assigned For That Employee ID !!" << endl;
                        flag = true;
                        break;
                    }
                }
                
                if(flag != true) {
                    cout << "----------------------------------------------------------------------" << endl;
                    cout << "No Employee ID Found or Task Already Assigned For This Employee ID !!" << endl;
                    cout << "----------------------------------------------------------------------" << endl;
                }
                break;
            }
            case 3: {
                int eID;
                bool flag = false;
                cout << "Enter Employee ID Do You Want To Remove Their Task : ";
                cin >> eID;
                
                for(int i = 0;i < idx; i++) {
                    if(sys[i].getAssignedTaskID() == eID) {
                        sys[i].removeTask();
                        cout << "Task Removed For That Employee ID !!" << endl;
                        break;
                    }
                }
                
                if(flag != true) {
                    cout << "----------------------------------------------------------------------" << endl;
                    cout << "No Employee ID Found or Task Already Rmoved For This Employee ID !!" << endl;
                    cout << "----------------------------------------------------------------------" << endl;
                }
                break;

                break;
            }
            case 4: {
               
                for(int i = 0;i < idx; i++) {
                    sys[i].viewEmployeeDetails();
                }
               
                break;
            }
            case 0: {
                cout << "Thank You..." << endl;
            }
        }

    } while(choice != 0);


    return 0;
}