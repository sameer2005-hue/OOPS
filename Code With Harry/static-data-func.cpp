// static data member

#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << "enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is: " << id << " and this is employee number is: " << count << endl;
    }
};

int employee ::count; // default value is zero

int main()
{
    employee sameer, mudit, advik;
    sameer.setdata();
    sameer.getdata();

    mudit.setdata();
    mudit.getdata();

    advik.setdata();
    advik.getdata();
    return 0;
}