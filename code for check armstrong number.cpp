#include <iostream>
using namespace std;
int main()
{
    int num, a, arm, no;
    float c;
    cout << "Enter any number: " << endl;
    cin >> num;
    no = num;
    ;
    arm = 0;
    while (num > 0)
    {
        a = num % 10;
        num = num / 10;
        arm = arm + a * a * a;
    }
    if (arm = no)
    {
        cout << no << " is Armstrong number" << endl;
    }
    else
    {
        cout << "This is not Armstrong number";
    }
    return 0;
}
