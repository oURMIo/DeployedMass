#include <iostream>

using namespace std;

#define SIZE 10

int mas[SIZE];

int main()
{
    int i;
    for (i = 0; i < SIZE; i++) {
        mas[i] =i + 1;
    }
    cout << "before    :   ";
    for ( i = 0; i <SIZE; i++) {
        cout<<mas[i]<<"  ";
    }
    cout<<endl;


    for (int i=0; i<SIZE/2; i++)
    {
        mas[i] = mas[i] + mas[SIZE - i - 1];
        mas[SIZE - i - 1] = mas[i] - mas[SIZE - i - 1];
        mas[i] -= mas[SIZE - i - 1];
    }


    cout<<"after    :   ";
    for (i = 0; i <SIZE; i++) {
        cout<<mas[i]<<"  ";
    }
    return 0;
}