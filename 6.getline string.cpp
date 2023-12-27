#include <iostream>
#include <string>
using namespace std;

int main() {
    string favColor;
    cout << "Enter your fav. color \n";
    getline(cin, favColor);
    cout<< "Your fav. color is " << favColor << endl;
    
    return 0;
}