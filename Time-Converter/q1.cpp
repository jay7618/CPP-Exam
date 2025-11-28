#include <iostream>
using namespace std;

class TimeConverter {
    public:
        int userSeconds;
        int rem;
        int seconds = 0;
        int minutes = 0;
        int hours = 0;
};

int main () {

    TimeConverter t1;
    int no;

    cout << "-------------------------" << endl;
    cout << "Press 1 For Convert Seconds to Hour !! " << endl;
    cout << "Press 2 For Convert Hour to Seconds !! " << endl;
    cout << "-------------------------" << endl;
    
    cout << "Enetr No : " ;
    cin >> no;
    
    switch(no) {
        case 1:
        cout << "Enetr Seconds : ";
        cin >> t1.userSeconds;
        t1.hours = t1.userSeconds / 3600;
        t1.rem = t1.userSeconds % 3600;
        t1.minutes = t1.rem / 60;
        t1.seconds = t1.rem % 60;
        cout << "-------------------------" << endl;
        cout << "HH:MM:SS = " << t1.hours <<" : " << t1.minutes << " : " << t1.seconds << endl;
        cout << "-------------------------" << endl;
        break;
        
        case 2:
            cout << "Enetr Seconds : ";
            cin >> t1.userSeconds;
            cout << "Enetr Minutes : ";
            cin >> t1.minutes;
            cout << "Enetr Hours : ";
            cin >> t1.hours;
            
            t1.seconds = (t1.hours*3600)+(t1.minutes*60)+t1.userSeconds;
            
            cout << "-------------------------" << endl;
            cout << "Seconds : " << t1.seconds << endl;
            cout << "-------------------------" << endl;
            
        break;

        default:
            cout << "Invalid !!" << endl;

    }
}