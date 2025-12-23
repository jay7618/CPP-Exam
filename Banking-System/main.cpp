#include <iostream>
#include <string>
using namespace std;

class BankAccount {
    private:
        double balane;
    protected:
        string accountNumber;
        string accountHoldername;
    public:
        BankAccount (string no, string name, int amount) {
            this->accountNumber = no;
            this->accountHoldername = name;
            this->balane = amount;
        }
        void deposit() {}
        void withdraw() {}
        int getBalance() {
            return balane;
        }
        void displayAccountInfo() {
            
        }
    
};
class SavingAccount : public BankAccount {
protected:
    int intrestrate;
public:
    BankAccount (string no, string name, int amount) {
        this->accountNumber = no;
        this->accountHoldername = name;
        this->balane = amount;
    }

    void calculateIntrest () {
        int intrestAmount = getBalance()*intrestrate / 100;
    }
};

class CheckingAccount : public BankAccount {
    protected:
        double overDraftLimit;
    public:
        void checkOverdraft() {
            
        }
};

class FixedDepositAccount : public BankAccount {
    protected:
        double term;
    public:
        void calculateIntrest() {

        }
};

int main () {
    int choice;

    BankAccount* acc = NULL;

    do {
        cout << "press 1 For Create Saving Account !!" << endl;
        cout << "press 2 For Create Check Account !!" << endl;
        cout << "press 3 For Create Fixed Deposit Account !!" << endl;
        cout << "press 4 For Show Bank Account Info !!" << endl;
        cout << "press 0 For Exit The System !!" << endl;
        cout << "chose one no : ";
        cin >> choice;
        cin.ignore();

        switch(choice) {
            case 1: {
                int amount,rate;
                string accNo,accHoldName;

                cout << "Enter Account No : ";
                getline(cin,accNo);
                cout << "Enter Account Holder Name : ";
                getline(cin,accHoldName);
                cout << "Enter Amount : ";
                cin >> amount;
                cout << "Enter Intrest Rate in (%) : ";
                cin >> rate;

                acc = acc.(accNo,accHoldName,amount,rate);

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
                cout << "Thank You !! " << endl;
            }
        }

    } while(choice != 4);

    return 0;
}