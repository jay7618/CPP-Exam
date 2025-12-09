#include <iostream>
using namespace std;

class train {
    private:
        int trainNo;
        string trainName;
        string source;
        string destination;
        string trainTime;
        int totalTrains;
    public:
        static int trainCount;
        train () {
            
        }
        void addTrain (int tno,string tname,string source,string dest,string ttime) {
            this->trainNo = tno;
            this->trainName = tname;
            this->source = source;
            this->destination = dest;
            this->trainTime = ttime;
        }
        void displayAlltrains() {
            cout << "----------------------------" << endl;
            cout << "Train No : " << this->trainNo << endl;
            cout << "Train Name : " << this->trainName << endl;
            cout << "Source : " << this->source << endl;
            cout << "Destination : " << this->destination << endl;
            cout << "Train Time : " << this->trainTime << endl;
            cout << "----------------------------" << endl << endl;
        }

        int findTrainNO() {
            return trainNo;
        }
        
    };
    
    int train::trainCount = 3;
    
    int main () {
        
        int choise,idx = 0;
        train arr[5];
        
        do {
            cout << "----------------------------" << endl;
            cout << "Enter 1 for add new Train Record !!" << endl;
            cout << "Enter 2 for Display All Train Record !!" << endl;
            cout << "Enter 3 for Search Train Number !!" << endl;
            cout << "Enter 4 for Exit !!" << endl;
            cout << "----------------------------" << endl;
            cout << "Chose Your Number : " ;
            cin >> choise;
            cout << "----------------------------" << endl;
            
            switch (choise) {
                case 1: {
                    for(int i = 0;i < train::trainCount;i++) {
                        int tno;
                        string tname,source,dest,ttime;
                        
                        cout << "----------------------------" << endl;
                        cout << "Enter Train No : ";
                        cin >> tno;
                        cin.ignore();
                        cout << "Enter Train Name : ";
                        getline(cin,tname);
                        cout << "Enter Source : ";
                        getline(cin,source);
                        cout << "Enter Destination : ";
                        getline(cin,dest);
                        cout << "Enter Train Time : ";
                        getline(cin,ttime);

                        arr[i].addTrain(tno,tname,source,dest,ttime);
                }
                break;
            }
            case 2: {
                for(int i = 0; i < train::trainCount;i++) {
                    arr[i].displayAlltrains();
                }
                break;
            }
            case 3: {
                int key;
                cout << "Enter Train No Do You Want To Search : ";
                cin >> key;
                bool flag = false;
                for(int i = 0; i < train::trainCount;i++) {
                    if(key == arr[i].findTrainNO()) {
                        arr[i].displayAlltrains();
                        flag = true;
                        break;
                    }
                }
                if(!flag) {
                    cout << "Data Not Found !!" << endl;
                }
                break;
            }
            case 4: {
                cout << "Thank You !!" << endl;
            }
        }

    } while (choise != 4);



    return 0;
}