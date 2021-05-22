#include <iostream>
#include <fstream>

using namespace std;

int main()
{
    ifstream f("data_v10.bin",ios::in| ios::binary);
    f.seekg(0,ios::end);
    int fsize=f.tellg();
    f.seekg(0,ios::beg);
    double*a = new double[fsize];
    double tmp;
    for (int i=0; i<fsize; i++) {
        f.read((char*)&tmp,sizeof(double));
        a[i]=tmp;
    }
    f.close();
    float*b=new float[fsize];
    for (int i=0; i<fsize; i++) {
        b[i]=1/a[i];
    }
    ofstream ff("new.bin",ios::out| ios::binary);
    for (int i=0; i<fsize; i++) {
        ff.write((char*)&b[i], sizeof b);
    }
    ff.close();
    delete[] a;
    delete[] b;
    return 0;
}
