#include <iostream>
#include "stack.h"
using namespace std;

int main()
{
    stack<int> s;
    stack<double> ds;
    stack<string> ss;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);

    s.peek();

    s.pop();
    s.pop();

    s.push(50);

    s.getCapacity();
    s.getSize();

    s.print();


    return 0;
}
