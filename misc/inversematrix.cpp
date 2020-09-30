#include <iostream>
#include <string>

using namespace std;

struct RecType
{
    string P_name;
    int dependents;
    float P_salary;
    bool ins_cov;
};

void read()
{
public:
    struct RecType R;
    cout << "Enter name";
    getline(R.P_name);
    cout << "Enter Dependents";
    cin >> R.dependents;
    cout << "Enter salary";
    cin >> R.P_salary;
    cout << "if you have Insurance coverage enter 0 for medical coverage & 1 for basic coverage";
    cin >> R.ins_cov;
}

void print()
{

    struct RecType R;
    read();
    cout << R.P_name;
    cout << R.dependents;
    cout << R.P_salary;
    cout << R.ins_cov;
}
void arr()
{
    struct RecType R;
    for (int i = 0; i < 5; i++)
    {
        getline(R.P_name);
        cin >> R.dependents;
        cin >> R.P_salary;
        cin >> R.ins_cov;
    }

    cout << R.P_name;
    cout << R.dependents;
    cout << R.P_salary;
    cout << R.ins_cov;
}
void check()
{
    struct RecType R;
    if (R.ins_cov != 0)
        cout << R.P_name;
    // return R.P_name;
}
