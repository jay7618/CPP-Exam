#include <iostream>
#include <vector>
#include <string>

using namespace std;

class Rectangle {
    private:
        double lenght,width;
    public:
        void setValue(double len, double wth) {
            this->lenght = len;
            this->width = wth;
        }
        void getValue() {
            cout << "------------------------------------" << endl;
            cout << "Lenght : " << this->lenght << endl;
            cout << "Width : " << this->width << endl;
            cout << "------------------------------------" << endl;
        }
        double calculate() {
            return lenght*width;
        }
    };
    
    int main () {
        
        double len,wdh;
        Rectangle obj;
        
        cout << "------------------------------------" << endl;
        cout << "Enter Lenght of Rectangle : ";
        cin >> len;
        cout << "Enter Widht of Rectangle : ";
        cin >> wdh;
        
        obj.setValue(len,wdh);
        
        obj.getValue();
        
        // cout << "------------------------------------" << endl;
        cout << "the Area Of Reactangle Is : " << obj.calculate() << endl; 
        cout << "------------------------------------" << endl;

    return 0;
}