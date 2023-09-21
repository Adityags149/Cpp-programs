#include <iostream>
using namespace std;
int main()
{
    int a, b, c, d;
    char op;
    cout << "Enter value of a" << endl;
    cin >> a;
    cout << "Enter value of b" << endl;
    cin >> b;
    cout << "Enter operation you want to perform: '+','-','*','/','%'";
    cin >> op;
    switch (op)
    {
    case '+':
        cout << "The sum of numbers is: " << (a + b) << endl;
        break;
    case '-':
        cout << "The difference of numbers is: " << (a - b) << endl;
        break;
    case '*':
        cout << "The multiplication of numbers is: " << (a * b) << endl;
        break;
    case '/':
        cout << "The division of numbers is: " << (a / b) << endl;
        break;
    case '%':
        cout << "The remainder of numbers is: " << (a % b) << endl;
        break;

    default:
        break;
    }
    return 0;
}
