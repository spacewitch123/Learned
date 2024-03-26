#include <iostream>
using namespace std;

int add(int x, int y)
{

    int z;
    z = x + y;
    return z;
}

int main()
{

    int a, b, c;
    a = 10;
    b = 20;

    c = add(a, b);
    cout << "sum of two numbers is " << c << endl;
}