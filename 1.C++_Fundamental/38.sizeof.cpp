#include<iostream>
using namespace std;


int main(){

    cout << "Int " << sizeof(int) << endl; // 4 bytes
    cout << "Char " << sizeof(char) << endl; // 1 bytes
    cout << "Bool " << sizeof(bool) << endl; // 1 bytes
    cout << "Float " << sizeof(float) << endl; // 4 bytes
    cout << "Double " << sizeof(double) << endl; // 8 bytes

    cout << "Short Int " << sizeof(short int) << endl; // 2 bytes
    cout << "Long Int " << sizeof(long int) << endl; // 8 bytes
    cout << "long long Int " << sizeof(long long int ) << endl; //8 bytes 

    cout << "long double " << sizeof(long double)  << endl; // 16 bytes
   
    return 0;
}