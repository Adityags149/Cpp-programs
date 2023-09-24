#include <iostream>
using namespace std;
class student
{
    int id, rol;
    string nam, gen;

public:
    string Name()
    {
        cout << "Enter Name of Student:" << endl;
        getline(cin, nam);
    }
    double Student_id()
    {
        cout << "Enter Student Id:" << endl;
        cin >> id;
    }
    int Roll_no()
    {
        cout << "Enter Roll no:" << endl;
        cin >> rol;
    }
    char gender()
    {
        cout << "Enter Gender:" << endl;
        cin >> gen;
    }
    void Output()
    {
        cout << "Student Name is: " << nam << endl;
        cout << "Student Id is: " << id << endl;
        cout << "Student Roll no. is: " << rol << endl;
        cout << "Student Gender is: " << gen << endl;
    }
};
int main()
{
    student in;
    in.Name();
    in.Student_id();
    in.Roll_no();
    in.gender();
    in.Output();
    return 0;
}
