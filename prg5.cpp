#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    fstream my_file("input.txt", ios::out);
    if (my_file)
    {
        my_file << "This is a test line." << endl;
        my_file.close();
    }
    string line;
    my_file.open("input.txt", ios::in);
    if (my_file)
    {
        while (!my_file.eof())
        {
            getline(my_file, line);
            cout << "Read from file: " << line
                 << endl;
        }
        my_file.close();
    }
    if (my_file)
    {
        my_file << "This is another test line,appended to the file." << endl;
        my_file.close();
    }
    return 0;
}
