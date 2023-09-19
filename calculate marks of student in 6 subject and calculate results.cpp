#include <iostream>
using namespace std;
int main()
{
    int i, total;
    float c;
    i = 1;
    c = 0;
    while (i <= 6)
    {
        cout << "Enter Marks for sub" << i << endl;
        cin >> total;
        c += total;
        i++;
    }
    cout << "Total Marks of student is: " << c << endl;
    cout << "Percentage of student is: " << (c / 6) << endl;
    return 0;
}
