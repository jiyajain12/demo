#include <iostream>
using namespace std;
void func3()
{
    throw runtime_error("Error in func3");
}
void func2()
{
    func3();
}
void func1()
{
    func2();
}
int main()
{
    try
    {
        func1();
    }
    catch (const runtime_error &e)
    {
        cout << "Caught exception: " << e.what() << endl;
    }
    return 0;
}