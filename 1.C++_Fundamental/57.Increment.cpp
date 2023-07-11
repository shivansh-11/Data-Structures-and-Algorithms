#include<iostream>
using namespace std;

int main(){

    // post increment a++ and pre increment ++a

    int x = 10;
    int y = x++;

    cout <<"X " << x << " Y " << y << endl;

    int z = ++x;
    cout <<"X " << x << " Z " << z << endl;

    return 0;
}