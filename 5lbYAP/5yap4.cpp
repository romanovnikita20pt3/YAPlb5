#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    string file_data;
    ifstream f("file2.txt");
    if (f.good()) {
        f >> file_data;
    }
    f.close();
    ofstream ff ("file1.txt", ios::app);
    if (f.good()) {
        ff<<file_data;
    }
    ff.close();
    return 0;

}
