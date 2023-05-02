//Print1To100WithOutLoop

#include <iostream>

using namespace std;

void printNum(int n)
{
    if (n>0)
    {
        cout << n << endl;
        printNum(n-1);
    }
    return;
}
int main()
{
    printNum(100);
}
