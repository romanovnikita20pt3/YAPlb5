#include <iostream>
#include <fstream>
#include <iomanip>

using namespace std;

int main()
{
    ifstream f("data_v12.txt");
    double digit;
    double result=0;
    int iterator=0;

    while (true) {
        f >> digit;
        if(f.eof()) {
            break;
        }
        if (f.fail()) {
            cerr<< "Error"<< endl;
            return 1;
        }
        ++iterator;
        result+=digit;
    }

    cout<<(result / iterator)<<endl;
    f.close();
    return 0;
}
