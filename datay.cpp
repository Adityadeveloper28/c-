#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int a = 10;
    float b = 3.14;
    double c = 30.215421;
    char d = 'A';
    bool e = true;
    cout << "Integer: " << a << endl;
    cout << "Float: " << b << endl;
    cout << "Double: " << c << endl;
    cout << "Character: " << d << endl;
    cout << "Boolean: " << e << endl;


    int age;
    cout << "enter age: ";
    cin>> age; //input for user
    cout<< "your enter age: " << age << endl;
    if (age>=18)
    {
        cout << "adult" << endl;
    }else
    {
        cout << "minor" << endl;
    }
    
    

    return 0;
}
