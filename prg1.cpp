#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    // Input file stream object to write to  File5.txt, File6.txt
    ofstream fout;
    fout.open("input.txt");
    fout << "Department of Computer Sciecne and  Applications" << endl;
    fout << "School of Computer Sciecne and  Engineering" << endl;
    fout << "Dr. Vishwanath Karad MIT World Peace  University" << endl;
    fout.close();
    fout.open("output.txt");
    fout << "Department of Electronics" << endl;
    fout << "School of Engineering and Technology" << endl;
    fout << "Dr. Vishwanath Karad MIT World Peace  University" << endl;
    fout.close();
    // Output file stream object to read from  File5.txt
    ifstream fin;
    fin.open("input.txt");
    // Reading File5.txt completely using END OF FILE  eof() method
    while (!fin.eof())
    {
        string text;
        getline(fin, text);
        cout << text << endl;
    }
    fin.close();
    fin.open("output.txt");
    // Reading File6.txt completely using END OF FILE
    while (!fin.eof())
    {
        string text;
        getline(fin, text);
        cout << text << endl;
    }
    fin.close();
    return 0;
}
