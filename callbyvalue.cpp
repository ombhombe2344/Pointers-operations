/*Name Om bhombe
prn 23070123039
aim: To study the call by value*/
#include <iostream>
using namespace std;

void swap(int &x, int &y)
{
    int temp;
    temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 10010010, b = 7365;  
    swap(a, b);
    cout << "value of a is: " << a << endl;
    cout << "value of b is: " << b << endl;
    return 0;
}
/*output :
value of a is: 7365
value of b is: 1001001*/
