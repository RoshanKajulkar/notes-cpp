#include <iostream>
using namespace std;

int main() {
    int card = 20;
    
    int *myp;  // * - asterik
    myp = &card; // & - ampersand
    
    int myCard = *myp; // ptr dereferencing
    
    printf("Value of card %d\n", card);
    printf("Value in myp %p\n", myp);
    printf("Value of mycard %d\n", myCard);
    
    return 0;
}