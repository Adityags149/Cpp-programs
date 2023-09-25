#include <iostream>
using namespace std;
int main()
{
    int i, j, A[2][2], B[2][2];
    cout << "Enter Matix 1: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> A[i][j];
        }
    }
    cout << "Matix 1: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << A[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Enter Matix 2: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cin >> B[i][j];
        }
    }
    cout << "Matix 2: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << B[i][j] << " ";
        }
        cout << endl;
    }
    cout << "Multiplied Matix is: " << endl;
    for (i = 0; i < 2; i++)
    {
        for (j = 0; j < 2; j++)
        {
            cout << A[i][j] * B[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}
