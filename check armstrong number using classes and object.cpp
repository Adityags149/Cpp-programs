// Program for Check a given number is Armstrong or not
#include <iostream>
#include <math.h> //using Math library for using mathematical function
using namespace std;
class armstrong_number
{
    int n, num, sum = 0, c = 0, res, rem;

public:
    int input()
    {
        cout << "Enter a number: " << endl;
        cin >> n;
    }
    int check_condition()
    {
        num = n;
        while (num != 0) // check length of entered number and store its value in variable c
        {
            num = num / 10;
            c++;
        }
        num = n;
        while (num != 0)
        {
            rem = num % 10;
            res = pow(rem, c);
            sum = sum + res;
            num = num / 10;
        }
    }
    void output()
    {
        if (sum == n)
        {
            cout << n << " is Armstrong number" << endl;
        }
        else
        {
            cout << n << " is not Armstrong number" << endl;
        }
    }
};
int main()
{
    armstrong_number a1;
    a1.input();
    a1.check_condition();
    a1.output();
    return 0;
}
