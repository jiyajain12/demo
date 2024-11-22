#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream in;
    in.open("input.txt");
    ofstream out;
    out.open("output.txt");
    while (!in.eof())
    {
        string text;
        getline(in, text);
        out << text << endl;
    }
    out.close();
    in.close();
    return 0;
}
