// static member function..
// --> jo ki sare static varible ko acesss kr ske function ho ya variable..
// function jo ki class ke naam se runc hoje wihout declare object..
// static function ko dusre static function or static variable ko access kr paye

#include <iostream>
using namespace std;

class employee
{
    int id;
    static int count;

public:
    void setdata(void)
    {
        cout << endl
             << "enter the id: " << endl;
        cin >> id;
        count++;
    }
    void getdata(void)
    {
        cout << "the id of this employee is: " << id << " and this is employee number is: " << count << endl;
    }
    static void getCount(void)
    {
        cout << "the value of count is: " << count << endl;
    }
};

int employee ::count; // default value is zero

int main()
{
    employee sameer, mudit, advik;
    sameer.setdata();
    sameer.getdata();
    employee::getCount();

    mudit.setdata();
    mudit.getdata();
    employee::getCount();

    advik.setdata();
    advik.getdata();
    employee::getCount();
    return 0;
}