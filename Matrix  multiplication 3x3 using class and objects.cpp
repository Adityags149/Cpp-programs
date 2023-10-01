#include <iostream>
using namespace std;
class A
{
    int A[3][3], B[3][3], mul[3][3], i, j, k;

public:
    int matrix()
    {
        cout << "Enter Matix 1: " << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> A[i][j];
            }
        }
        cout << "Enter Matix 2: " << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cin >> B[i][j];
            }
        }
    }
    int matrix_output1()
    {
        cout << "Matix 1: " << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << A[i][j] << " ";
            }
            cout << endl;
        }
        cout << "Matix 2: " << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                cout << B[i][j] << " ";
            }
            cout << endl;
        }
    }
    int addition()
    {
        cout << "Multiplied Matix is: " << endl;
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                mul[i][j] = 0;
                for (k = 0; k < 3; k++)
                {
                    mul[i][j] += A[i][k] * B[k][j];
                }
            }
        }
        for (i = 0; i < 3; i++)
        {
            for (j = 0; j < 3; j++)
            {
                {
                    cout << mul[i][j] << ' ';
                }
            }
            cout << endl;
        }
    }
};
int main()
{
    A ob;
    ob.matrix();
    ob.matrix_output1();
    ob.addition();
    return 0;
}
