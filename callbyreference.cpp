/*Name Om bhombe
prn 23070123039
aim: To study the call by reference*/
#include <iostream>
using namespace std;

void swap(int *x, int *y)
{
    int swap;
    swap = *x;
    *x = *y;
    *y = swap;
}

int main()
{
    int x = 500, y = 100;  
    swap(x, y);
    cout << "value of x is: " << x << endl;
    cout << "value of y is: " << y << endl;
    return 0;
}
/*output
value of x is: 100
value of y is: 500*/
