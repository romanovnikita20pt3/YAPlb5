#include <iostream>

using namespace std;

int main()
{
    int numbers[10];
    int i;

    for (i=0; i<10; i++) {
        cout<<"Введите "<< (i+1)<< " элемент: ";
        cin>> numbers[i];
    }
    for(i=0; i<10; i++) {
        cout<< oct << numbers[i] << "\t" << dec << numbers[i] << "\t" << hex <<numbers[i] <<endl;
    }
    return 0;
}
