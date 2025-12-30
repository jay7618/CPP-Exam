#include <iostream>
#include <vector>

using namespace std;

class LibraryItem {
    protected:
        string title;
        string author;
        string dueDate;
    public:
        LibraryItem(string t, string a, string dd) {
            title = t;
            author = a;
            dueDate = dd;
        }

        void getLibraryData() {
            cout << "Title : " << title << endl;
            cout << "Author : " << title << endl;
            cout << "Due Date : " << title << endl;
        }

        virtual void checkOut() = 0;
        virtual void returnItem() = 0;
        virtual void displayDetails() = 0;

        virtual ~LibraryItem() {}
};

class Book : public LibraryItem {
    protected:
        int quantities;
    public:
        Book(string t, string a, string dd, int q) : LibraryItem( t, a, dd) {
            this->quantities = q;
        }
        void checkOut() {
            if(quantities > 0) {
                quantities--;
                cout << "Book Check Out Completed !!" << endl;
            }
        }
        void returnItem() {
            quantities++;
            cout << "Book returned !!" << endl;
        }
        void displayDetails() {
            getLibraryData();
            cout << "Quantities : " << quantities;
        }
        virtual ~Book() {}
};

class DVD : public LibraryItem {
    protected:
        int quantities;
        string duration;
    public:
        DVD(string t, string a, string dd, int q, string time) : LibraryItem( t, a, dd) {
            this->quantities = q;
            this->duration = time;
        }
        void checkOut() {
            if(quantities > 0) {
                quantities--;
                cout << "DVD Check Out Completed !!" << endl;
            }
        }
        void returnItem() {
            quantities++;
            cout << "DVD returned !!" << endl;
        }
        void displayDetails() {
            getLibraryData();
            cout << "Duration : " << duration;
            cout << "Quantities : " << quantities;
        }
        virtual ~DVD() {}
};

class Magazine : public LibraryItem {
    protected:
        int quantities,id;
    public:
        Magazine(string t, string a, string dd, int q, int id) : LibraryItem( t, a, dd) {
            this->quantities = q;
            this->id = id;
        }
        void checkOut() {
            if(quantities > 0) {
                quantities--;
                cout << "DVD Check Out Completed !!" << endl;
            }
        }
        void returnItem() {
            quantities++;
            cout << "DVD returned !!" << endl;
        }
        void displayDetails() {
            getLibraryData();
            cout << "ID No : " << id;
            cout << "Quantities : " << quantities;
        }
        virtual ~Magazine() {}
};



int main () {
    vector <LibraryItem*> arr;
    int choice;

    do {
        cout << "Press 1 To Add a New Book !!" << endl;
        cout << "Press 2 To Add a New DVD !!" << endl;
        cout << "Press 3 To Add a New Magazine !!" << endl;
        cout << "Press 4 To Chekout !!" << endl;
        cout << "Press 5 To Return !!" << endl;
        cout << "Press 6 To Display Details !!" << endl;
        cout << "Press 0 To Exit System !!" << endl;
        cout << "Enter Your Number : ";
        cin >> choice;

        switch (choice) {
            
            case 1: {
                string title,author,dueDate;
                int quantities,no;

                cout << "Enter No Of Book You Want To Add : ";
                cin >> no;
                cin.ignore();
                for (int i = 0; i < no;i++) {
                    cout << "Enter Book Title : ";
                    getline(cin,title);
                    cout << "Enter Book Author Name : ";
                    getline(cin,author);
                    cout << "Enter Due Date : ";
                    getline(cin,dueDate);
                    cout << "Enter quantities : ";
                    cin >> quantities;
                    cin.ignore();

                    arr.push_back(new Book(title,author,dueDate,quantities));
                }

                break;
            }
            case 2: {
                string title,author,dueDate,duration;
                int quantities,no;

                cout << "Enter No Of DVD You Want To Add : ";
                cin >> no;
                cin.ignore();
                for (int i = 0; i < no;i++) {
                    cout << "Enter DVD Title : ";
                    getline(cin,title);
                    cout << "Enter DVD Author Name : ";
                    getline(cin,author);
                    cout << "Enter Due Date : ";
                    getline(cin,dueDate);
                    cout << "Enter Duration : ";
                    getline(cin,duration);
                    cout << "Enter quantities : ";
                    cin >> quantities;
                    cin.ignore();

                    arr.push_back(new DVD(title,author,dueDate,quantities,duration));
                }
                break;
            }
            case 3: {
                string title,author,dueDate;
                int quantities,id,no;

                cout << "Enter No Of Magazine You Want To Add : ";
                cin >> no;
                cin.ignore();
                for (int i = 0; i < no;i++) {
                    cout << "Enter Magazine Title : ";
                    getline(cin,title);
                    cout << "Enter Magazine Author Name : ";
                    getline(cin,author);
                    cout << "Enter Due Date : ";
                    getline(cin,dueDate);
                    cout << "Enter Magazine ID : ";
                    cin >> id;
                    cout << "Enter quantities : ";
                    cin >> quantities;
                    cin.ignore();

                    arr.push_back(new Magazine(title,author,dueDate,quantities,id));
                }
                break;
            }
            case 4: {
                int idx;
                cout << "Enetr Idx No to Check Out : ";
                cin >> idx;

                for(int i = 0;i < arr.size();i++) {
                    if(idx == i) {
                        arr[i]->checkOut();
                    }

                }

                break;
            }
            case 5: {
                int idx;
                cout << "Enetr Idx No to Return : ";
                cin >> idx;

                for(int i = 0;i < arr.size();i++) {
                    if(idx == i) {
                        arr[i]->returnItem();
                    }

                }
                break;
            }
            case 6: {
                for(int i = 0;i < arr.size();i++) {
                    cout << "--------------------------" << endl;
                    cout << "Item IDX No : " << i << endl;
                    arr[i]->getLibraryData();
                    cout << "--------------------------" << endl << endl;
                }
                break;
            }
            case 0: {
                cout << "thank You !!" << endl;
                break;
            }

        }

    } while (choice != 0);

    return 0;
}