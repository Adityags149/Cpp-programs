#include <iostream>
using namespace std;
int main()
{
    int i, j, n;
    cout << "Enter the size of an array: " << endl;
    cin >> n;
    int number[n];
    for (i = 0; i < n; i++)
    {
        cout << "Enter arrray " << i << ' ';
        cin >> number[i];
    }
    cout << "Entered array is: ";
    for (j = 0; j < n; j++)
    {
        cout << number[j] << ' ';
    }
    cout << endl;
    cout << "Reversed array is: ";
    for (j = n - 1; j >= 0; j--)
    {
        cout << number[j] << ' ';
    }
    return 0;
}
