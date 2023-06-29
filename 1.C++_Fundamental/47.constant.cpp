#include<iostream>
#define RADIUS 5  // replacement for text Radius
using namespace std;


int main(){

    cout << RADIUS * RADIUS << endl;

    const float pi = 3.14;    

    cout << "Area " << pi * RADIUS * RADIUS << endl;

    return 0;
}