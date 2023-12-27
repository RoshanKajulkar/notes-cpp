#include <iostream>
using namespace std;

int main() {
    int score = 200;
    int *myp = &score;
    
    printf("Value of score %d \n", score);
    printf("Value of myp %p \n", myp);
    
    int &anotherScore = score;
    anotherScore = 500;
    
    printf("Value of score %d \n", score);
    printf("Value of myp %p \n", myp);
    
    return 0;
}