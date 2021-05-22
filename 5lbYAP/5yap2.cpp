#include <iostream>
using namespace std;

void printTable (int InSystem)
{
    if ((InSystem !=8)&&(InSystem !=10)&&(InSystem !=16)) {
        cerr<< "Ошибка! Система счисления не используется"<< endl;
    } else {
        for(int i=2; i<10; i++) {
            for(int t=1; t<=10; t++) {
                switch(InSystem) {
                case 8:
                    cout << oct << i << " * " << t << " = " << i * t << endl;
                    break;
                case 10:
                    cout << dec << i << " * " << t << " = " << i * t << endl;
                    break;
                case 16:
                    cout << hex << i << " * " << t << " = " << i * t << endl;
                    break;
                }
            }
            cout<< endl;
        }
    }
}
int main()
{
    int sees;
    cout<<"Введите систему счисления: ";
    cin>> sees;
    printTable(sees);

    return 0;
}
