#include <iostream>
using namespace std;
class deptInfo
{
public:
    char dname[10];
    char aswork[20];
    int time;
    void getdata()
    {
        cout << "enter department name:" << endl;
        cin >> dname;
        cout << "enter assigned work:" << endl;
        cin >> aswork;
        cout << "enter time required to complete the task:" << endl;
        cin >> time;
    }
    void printdata()
    {
        cout << "The department info is as follows:" << endl;
        cout << "Name of department is:" << dname << endl;
        cout << "The assigned work is:" << aswork << endl;
        cout << "The time required to complete the task is:" << time << endl;
    }
};
class basicInfo
{
public:
    char name[20];
    int id;
    char gender[8];
    void gdata()
    {
        cout << "enter your name:" << endl;
        cin >> name;
        cout << "enter your id:" << endl;
        cin >> id;
        cout << "enter your gender:" << endl;
        cin >> gender;
    }
    void pdata()
    {
        cout << "The basic info of employee is as follows:" << endl;
        cout << "Name of employee is:" << name << endl;
        cout << "The id of employee is:" << id << endl;
        cout << "The gender is:" << gender << endl;
    }
};
class employee : private basicInfo, private deptInfo
{
public:
    void callfunc()
    {
        getdata();
        printdata();
        gdata();
        pdata();
    }
};
int main()
{
    employee e;
    e.callfunc();
}