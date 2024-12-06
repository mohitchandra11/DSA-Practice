#include<iostream>
using namespace std;

int main()
{
    char button;
    cout<<"Enter the button"<<endl;
    cin>>button;

    switch(button)
    {
        case 'a':
        cout<<"Hello";
        break;
        case 'b':
        cout<<"Hola";
        break;
        case 'c':
        cout<<"Salut";
        break;
        case 'd':
        cout<<"Namste";
        break;
        case 'e':
        cout<<"Ciao";
        break;

        default:
        cout<<"I don't know anything ";
        break;

    }
    return 0;
}