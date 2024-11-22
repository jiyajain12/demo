#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ifstream fin1, fin2;
    fin1.open("input.txt");
    fin2.open("output.txt");
    while (!fin1.eof())
    {
        string text;
        getline(fin1, text);
        cout << text << endl;
    }
    while (!fin2.eof())
    {
        string text;
        getline(fin2, text);
        cout << text << endl;
    }
    return 0;
}