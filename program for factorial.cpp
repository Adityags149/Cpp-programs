#include <iostream>
using namespace std;
int main()
{
    int n, fact;
    cout << "enter number: ";
    cin >> n;
    fact = 1;
    while (n > 1)
    {
        fact = fact * (n * (n - 1));
        n -= 2;
    }
    cout << fact;
    return 0;
}
